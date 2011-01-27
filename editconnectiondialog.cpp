//
// C++ Implementation: editconnectiondialog
//
// Description:
//
//
// Author: Oleksandr Shneyder <oleksandr.shneyder@obviously-nice.de>, (C) 2006
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "editconnectiondialog.h"
#include "x2goclientconfig.h"
#include "x2gologdebug.h"

#include <QInputDialog>
#include <QSettings>
#include <QFileDialog>
#include <QDir>
#include <QPushButton>
#include <QTabWidget>
#include <QBoxLayout>
#include <QFrame>
#include <QLineEdit>
#include <QPushButton>
#include <QGroupBox>
#include <QLabel>
#include <QSpinBox>
#include <QCheckBox>
#include <QSlider>
#include <QComboBox>
#include <QRadioButton>
#include <QButtonGroup>
#include <QTreeView>
#include <QStandardItemModel>
#include <QHeaderView>
#include "onmainwindow.h"
#include <QTextStream>

EditConnectionDialog::EditConnectionDialog ( QString id, QWidget * par,
        int ind,Qt::WFlags f )
		: QDialog ( par,f )
{
	QVBoxLayout* ml=new QVBoxLayout ( this );
#ifdef Q_WS_HILDON
	ml->setMargin ( 2 );
#endif
	fr=new QTabWidget ( this );
	ml->addWidget ( fr );

	QFrame* sessSet=new QFrame();
	QFrame* conSet=new QFrame();
	QFrame* otherSet=new QFrame();
	QFrame* exportDir=new QFrame();

	parent= ( ONMainWindow* ) par;
	QFont fnt=font();
	if ( parent->retMiniMode() )
#ifdef Q_WS_HILDON
		fnt.setPointSize ( 10 );
#else
		fnt.setPointSize ( 9 );
#endif
	setFont ( fnt );

	bool miniMode=parent->retMiniMode();

	fr->addTab ( sessSet,tr ( "&Session" ) );
	fr->addTab ( conSet,tr ( "&Connection" ) );
	fr->addTab ( otherSet,tr ( "&Settings" ) );
	fr->addTab ( exportDir,tr ( "&Shared folders" ) );

	QPushButton* ok=new QPushButton ( tr ( "&OK" ),this );
	QPushButton* cancel=new QPushButton ( tr ( "&Cancel" ),this );
	QPushButton* def=new QPushButton ( tr ( "Defaults" ),this );
	QHBoxLayout* bLay=new QHBoxLayout();
	bLay->setSpacing ( 5 );
	bLay->addStretch();
	bLay->addWidget ( ok );
	bLay->addWidget ( cancel );
	bLay->addWidget ( def );
	ml->addLayout ( bLay );
#ifdef Q_WS_HILDON
	bLay->setMargin ( 2 );
#endif

	setSizeGripEnabled ( true );
	sessionId=id;


	setWindowIcon ( QIcon ( parent->iconsPath ( "/32x32/edit.png" ) ) );

	QVBoxLayout* sessLay=new QVBoxLayout ( sessSet );
#ifdef Q_WS_HILDON
	sessLay->setMargin ( 2 );
#endif
	sessName=new QLineEdit ( sessSet );
	icon=new QPushButton ( QString::null,sessSet );
	if ( !miniMode )
	{
		icon->setIconSize ( QSize ( 100,100 ) );
		icon->setFixedSize ( 100,100 );
	}
	else
	{
		icon->setIconSize ( QSize ( 48,48 ) );
		icon->setFixedSize ( 48,48 );
	}
	icon->setFlat ( true );

	QHBoxLayout* slay=new QHBoxLayout();
	slay->addWidget ( new QLabel ( tr ( "Session name:" ),sessSet ) );
	slay->addWidget ( sessName );

	QHBoxLayout* ilay=new QHBoxLayout();
	ilay->addWidget ( icon );
	ilay->addWidget ( new QLabel ( tr ( "<< change icon" ),sessSet ) );

#ifndef Q_WS_HILDON
	QGroupBox *sgb=new QGroupBox ( tr ( "&Server" ),sessSet );
#else
	QFrame* sgb=sessSet;
#endif
	server=new QLineEdit ( sgb );
	uname=new QLineEdit ( sgb );
	sshPort=new QSpinBox ( sgb );
	sshPort->setValue ( parent->getDefaultSshPort().toInt() );
	sshPort->setMinimum ( 1 );
	sshPort->setMaximum ( 999999999 );
	key=new QLineEdit ( sgb );

#ifndef Q_WS_HILDON
	QPushButton* openKey=new QPushButton (
	    QIcon ( parent->iconsPath (
	                "/32x32/file-open.png" ) ),
	    QString::null,sgb );
	QVBoxLayout *sgbLay = new QVBoxLayout ( sgb );
#else
	QPushButton* openKey=new QPushButton (
	    QIcon ( parent->iconsPath ( "/16x16/file-open.png" ) ),
	    QString::null,sgb );
	QVBoxLayout *sgbLay = new QVBoxLayout ();
#endif
	QHBoxLayout *suLay =new QHBoxLayout();
	QVBoxLayout *slLay =new QVBoxLayout();
	QVBoxLayout *elLay =new QVBoxLayout();
	slLay->addWidget ( new QLabel ( tr ( "Host:" ),sgb ) );
	slLay->addWidget ( new QLabel ( tr ( "Login:" ),sgb ) );
	slLay->addWidget ( new QLabel ( tr ( "SSH port:" ),sgb ) );
	elLay->addWidget ( server );
	elLay->addWidget ( uname );
	elLay->addWidget ( sshPort );
	suLay->addLayout ( slLay );
	suLay->addLayout ( elLay );
#ifdef Q_WS_HILDON
	sshPort->setFixedHeight ( int ( sshPort->sizeHint().height() *1.5 ) );
#endif

	QHBoxLayout *keyLay =new QHBoxLayout();
	keyLay->addWidget (
	    new QLabel ( tr ( "Use RSA/DSA key for ssh connection:" ),sgb ) );
	keyLay->addWidget ( key );
	keyLay->addWidget ( openKey );

	sgbLay->addLayout ( suLay );
	sgbLay->addLayout ( keyLay );

#ifndef Q_WS_HILDON
	QGroupBox *deskSess=new QGroupBox ( tr ( "&Session type" ),sessSet );
	QHBoxLayout* cmdLay=new QHBoxLayout ( deskSess );
#else
	QFrame* deskSess=sessSet;
	QHBoxLayout* cmdLay=new QHBoxLayout ();
	cmdLay->addWidget ( new QLabel ( tr ( "Session type:" ),sessSet ) );
#endif
	sessBox=new QComboBox ( deskSess );
	cmd=new QLineEdit ( deskSess );
	cmdCombo=new QComboBox ( deskSess );
	cmdCombo->setEditable ( true );
	sessBox->addItem ( "KDE" );
	sessBox->addItem ( "GNOME" );
	sessBox->addItem ( "LXDE" );
	sessBox->addItem ( tr ( "Connect to Windows terminal server" ) );
	sessBox->addItem ( tr ( "Custom desktop" ) );
	sessBox->addItem ( tr ( "Single application" ) );
	cmdLay->addWidget ( sessBox );
	leCmdIp=new QLabel ( tr ( "Command:" ),deskSess );
	pbAdvanced=new QPushButton ( tr ( "Advanced options..." ),deskSess );
	cmdLay->addWidget ( leCmdIp );
	cmdLay->addWidget ( cmd );
	cmdLay->addWidget ( cmdCombo );
	cmdLay->addWidget ( pbAdvanced );
	cmdCombo->setSizePolicy ( QSizePolicy::Expanding,
	                          QSizePolicy::Preferred );
	cmdCombo->hide();
	pbAdvanced->hide();
	cmdCombo->addItem ( "" );
	cmdCombo->addItems ( parent->transApplicationsNames() );
	cmdCombo->lineEdit()->setText ( tr ( "Path to executable" ) );
	cmdCombo->lineEdit()->selectAll();
#ifndef Q_WS_HILDON
	sessLay->addLayout ( slay );
	sessLay->addLayout ( ilay );
	if ( !miniMode )
		sessLay->addSpacing ( 15 );
	sessLay->addWidget ( sgb );
	sessLay->addWidget ( deskSess );
#else
	QVBoxLayout* sHildILay = new QVBoxLayout();
	sHildILay->addLayout ( slay );
	sHildILay->addLayout ( ilay );
	sHildILay->addStretch();
	QHBoxLayout* sHildLay = new QHBoxLayout();
	sHildLay->addLayout ( sHildILay );

	QFrame* vl=new QFrame;
	vl->setLineWidth ( 0 );
	vl->setFrameStyle ( QFrame::VLine|QFrame::Plain );
	sHildLay->addWidget ( vl );
	sHildLay->setSpacing ( 6 );
	sHildLay->addLayout ( sgbLay );
	sessLay->addLayout ( sHildLay );
	sessLay->addStretch();
	sessLay->addLayout ( cmdLay );
#endif
	sessLay->addStretch();


	QVBoxLayout *connLay=new QVBoxLayout ( conSet );
#ifndef Q_WS_HILDON
	QGroupBox* netSpd=new QGroupBox ( tr ( "&Connection speed" ),conSet );
	QVBoxLayout *spdLay=new QVBoxLayout ( netSpd );
#else
	QFrame* netSpd=conSet ;
	QVBoxLayout *spdLay=new QVBoxLayout ();
	spdLay->addWidget ( new QLabel ( tr ( "Connection speed:" ),netSpd ) );
#endif
	spd=new QSlider ( Qt::Horizontal,netSpd );
	spd->setMinimum ( 0 );
	spd->setMaximum ( 4 );
	spd->setTickPosition ( QSlider::TicksBelow );
	spd->setTickInterval ( 1 );
	spd->setSingleStep ( 1 );
	spd->setPageStep ( 1 );

	QHBoxLayout *tickLay=new QHBoxLayout();
	QHBoxLayout *slideLay=new QHBoxLayout();
	slideLay->addWidget ( spd );
	QLabel* mlab= new QLabel ( "MODEM",netSpd );
	tickLay->addWidget ( mlab );
	tickLay->addStretch();
	tickLay->addWidget ( new QLabel ( "ISDN",netSpd ) );
	tickLay->addStretch();
	tickLay->addWidget ( new QLabel ( "ADSL",netSpd ) );
	tickLay->addStretch();
	tickLay->addWidget ( new QLabel ( "WAN",netSpd ) );
	tickLay->addStretch();
	tickLay->addWidget ( new QLabel ( "LAN",netSpd ) );
	spdLay->addLayout ( slideLay );
	spdLay->addLayout ( tickLay );
	QFontMetrics fm ( mlab->font() );
	slideLay->insertSpacing ( 0,fm.width ( "MODEM" ) /2 );
	slideLay->addSpacing ( fm.width ( "LAN" ) /2 );

#ifndef Q_WS_HILDON
	QGroupBox* compr=new QGroupBox ( tr ( "C&ompression" ),conSet );
	QHBoxLayout* comprLay=new QHBoxLayout ( compr );
#else
	QFrame* compr=conSet;
	QHBoxLayout* comprLay=new QHBoxLayout ();
#endif
	packMethode = new QComboBox ( conSet );
	quali= new QSpinBox ( conSet );
	quali->setRange ( 0,9 );
#ifdef Q_WS_HILDON
	quali->setFixedHeight ( int ( quali->sizeHint().height() *1.5 ) );
#endif

	QVBoxLayout* colLay=new QVBoxLayout();
	QVBoxLayout* cowLay=new QVBoxLayout();
	QHBoxLayout* spbl=new QHBoxLayout();
#ifndef Q_WS_HILDON
	colLay->addWidget ( new QLabel ( tr ( "Method:" ),compr ) );
#else
	colLay->addWidget ( new QLabel ( tr ( "Compression method:" ),compr ) );
#endif
	colLay->addWidget ( qualiLabel=new QLabel ( tr ( "Image quality:" ),
	        compr ) );
	cowLay->addWidget ( packMethode );
	spbl->addWidget ( quali );
	spbl->addStretch();
	cowLay->addLayout ( spbl );
	comprLay->addLayout ( colLay );
	comprLay->addLayout ( cowLay );
#ifndef Q_WS_HILDON
	connLay->addWidget ( netSpd );
	connLay->addWidget ( compr );
#else
	connLay->addLayout ( spdLay );
	connLay->addLayout ( comprLay );
#endif
	connLay->addStretch();

#ifdef Q_WS_HILDON
	QTabWidget* tabSettings=new QTabWidget ( this );
	QFrame* dgb=new QFrame();
	QFrame* kgb=new QFrame();
	QFrame* sbgr=new QFrame();
	tabSettings->addTab ( dgb, tr ( "&Display" ) );
	tabSettings->addTab ( kgb,tr ( "&Keyboard" ) );
	tabSettings->addTab ( sbgr,tr ( "Sound" ) );
#else
	QGroupBox *dgb=new QGroupBox ( tr ( "&Display" ),otherSet );
	QGroupBox *kgb=new QGroupBox ( tr ( "&Keyboard" ),otherSet );
	QGroupBox *sbgr=new QGroupBox ( tr ( "Sound" ),otherSet );
#endif
	QVBoxLayout *dbLay = new QVBoxLayout ( dgb );
	QVBoxLayout  *sndLay=new QVBoxLayout ( sbgr );
	QHBoxLayout* sLay=new QHBoxLayout ( );
	QVBoxLayout* sLay_sys=new QVBoxLayout ( );
	QVBoxLayout* sLay_opt=new QVBoxLayout ( );
	sLay->addLayout ( sLay_sys );
	sLay->addLayout ( sLay_opt );
	QVBoxLayout* setLay=new QVBoxLayout ( otherSet );
	QButtonGroup* radio = new QButtonGroup ( dgb );
	fs=new QRadioButton ( tr ( "Fullscreen" ),dgb );
#ifndef Q_WS_HILDON
	custom=new QRadioButton ( tr ( "Custom" ),dgb );
#else
	custom=new QRadioButton ( tr ( "Window" ),dgb );
#endif
	radio->addButton ( fs );
	radio->addButton ( custom );
	radio->setExclusive ( true );
	width=new QSpinBox ( dgb );
	height=new QSpinBox ( dgb );
	QHBoxLayout *dgLay =new QHBoxLayout();
	QHBoxLayout *dwLay =new QHBoxLayout();

	dgLay->addWidget ( fs );
	dgLay->addStretch();

	dwLay->addWidget ( custom );
	dwLay->addSpacing ( 15 );
	dwLay->addWidget ( widthLabel=new QLabel ( tr ( "Width:" ),dgb ) );
	dwLay->addWidget ( width );
	width->setRange ( 0,10000 );
	dwLay->addWidget ( heightLabel=new QLabel ( tr ( "Height:" ),dgb ) );
	dwLay->addWidget ( height );
	height->setRange ( 0,10000 );
	dwLay->addStretch();
	dbLay->addLayout ( dgLay );
	dbLay->addLayout ( dwLay );
#ifdef Q_WS_HILDON
	width->hide();
	height->hide();
	widthLabel->hide();
	heightLabel->hide();
#endif


	kbd=new QCheckBox ( tr ( "Keep current keyboard Settings" ),kgb );
	layout=new QLineEdit ( kgb );
	type=new QLineEdit ( kgb );
	QVBoxLayout *kbLay = new QVBoxLayout ( kgb );

	QVBoxLayout *klLay = new QVBoxLayout();
	QVBoxLayout *kwLay = new QVBoxLayout();
	QHBoxLayout *ksLay = new QHBoxLayout();

	klLay->addWidget ( layoutLabel= new QLabel (
	    tr ( "Keyboard layout:" ),kgb ) );
	klLay->addWidget ( typeLabel= new QLabel (
	    tr ( "Keyboard model:" ),kgb ) );

	kwLay->addWidget ( layout );
	kwLay->addWidget ( type );

	ksLay->addLayout ( klLay );
	ksLay->addLayout ( kwLay );

	kbLay->addWidget ( kbd );
	kbLay->addLayout ( ksLay );

	sound=new QCheckBox ( tr ( "Enable sound support" ),sbgr );
	QButtonGroup* sndsys=new QButtonGroup;
	pulse=new QRadioButton ( "PulseAudio",sbgr );
	arts=new QRadioButton ( "arts",sbgr );
#ifdef WINDOWS
	arts->hide();
#endif
	esd=new QRadioButton ( "esd",sbgr );
	sndsys->addButton ( pulse,PULSE );
	sndsys->addButton ( arts,ARTS );
	sndsys->addButton ( esd,ESD );
	sndsys->setExclusive ( true );
	rbStartSnd=new QRadioButton ( tr ( "Start sound daemon" ),sbgr );
	rbNotStartSnd=new QRadioButton (
	    tr ( "Use running sound daemon" ),sbgr );
	cbSndSshTun=new QCheckBox (
	    tr ( "Use SSH port forwarding to tunnel\n"
	         "sound system connections through firewalls" ),sbgr );
	cbDefSndPort=new QCheckBox ( tr ( "Use default sound port" ),sbgr );
	sbSndPort=new QSpinBox ( sbgr );
	sbSndPort->setMinimum ( 1 );
	sbSndPort->setMaximum ( 99999999 );


	QHBoxLayout *sndPortLay = new QHBoxLayout();
	lSndPort=new QLabel ( tr ( "Sound port:" ),sbgr );
	sndPortLay->addWidget ( lSndPort );
	sndPortLay->addWidget ( sbSndPort );

	sLay_sys->addWidget ( pulse );
	sLay_sys->addWidget ( arts );
	sLay_sys->addWidget ( esd );

	sLay_opt->addWidget ( rbStartSnd );
	sLay_opt->addWidget ( rbNotStartSnd );
	sLay_opt->addWidget ( cbSndSshTun );
	QFrame* hl=new QFrame ( sbgr );
	hl->setFrameStyle ( QFrame::HLine | QFrame::Sunken );
	sLay_opt->addWidget ( hl );
	sLay_opt->addWidget ( cbDefSndPort );
	sLay_opt->addLayout ( sndPortLay );
	sndLay->addWidget ( sound );
	sndLay->addLayout ( sLay );
	cbClientPrint=new QCheckBox ( tr ( "Client side printing support" ),
	                              otherSet );
#ifdef	Q_OS_DARWIN
	arts->hide();
	pulse->hide();
	esd->setChecked ( true );
#endif

#ifndef Q_WS_HILDON
	setLay->addWidget ( dgb );
	setLay->addWidget ( kgb );
	setLay->addWidget ( sbgr );
#else
	setLay->addWidget ( tabSettings );
// 	cbClientPrint->hide();
#endif
	setLay->addWidget ( cbClientPrint );
	setLay->addStretch();





	QGroupBox *egb=new QGroupBox ( tr ( "&Folders" ),exportDir );

	expTv=new QTreeView ( egb );
	expTv->setItemsExpandable ( false );
	expTv->setRootIsDecorated ( false );

	model=new QStandardItemModel ( 0,2 );
	ldir=new QLabel ( egb );


	model->setHeaderData ( 0,Qt::Horizontal,QVariant (
	                           ( QString ) tr ( "Path" ) ) );
	model->setHeaderData ( 1,Qt::Horizontal,QVariant (
	                           ( QString ) tr ( "Automount" ) ) );
	expTv->setEditTriggers ( QAbstractItemView::NoEditTriggers );



	QPushButton* openDir=new QPushButton (
	    QIcon ( parent->iconsPath ( "/16x16/file-open.png" ) ),
	    QString::null,egb );

	QPushButton* addDir=new QPushButton ( tr ( "Add" ),egb );
	QPushButton* delDir=new QPushButton ( tr ( "Delete" ),egb );
#ifdef Q_WS_HILDON
	QSize sz=addDir->sizeHint();
	sz.setHeight ( ( int ) ( sz.height() /1.5 ) );
	addDir->setFixedSize ( sz );
	sz=delDir->sizeHint();
	sz.setHeight ( ( int ) ( sz.height() /1.5 ) );
	delDir->setFixedSize ( sz );
#endif

	QLabel *dirPrompt=new QLabel ( tr ( "Path:" ),egb );
	dirPrompt->setFixedSize ( dirPrompt->sizeHint() );
	openDir->setFixedSize ( openDir->sizeHint() );

	ldir->setFrameStyle ( QFrame::StyledPanel|QFrame::Sunken );


	cbFsSshTun=new QCheckBox (
	    tr ( "Use ssh port forwarding to tunnel file system "
	         "connections through firewalls" ),egb );

	QVBoxLayout* expLay=new QVBoxLayout ( exportDir );
	expLay->addWidget ( egb );

	QHBoxLayout *tvLay=new QHBoxLayout ( egb );

	QHBoxLayout *dirLAy=new QHBoxLayout();
	dirLAy->addWidget ( dirPrompt );
	dirLAy->addWidget ( ldir );
	dirLAy->addWidget ( openDir );

	QVBoxLayout* leftLay=new QVBoxLayout();
	leftLay->addLayout ( dirLAy );
	leftLay->addSpacing ( 10 );
	leftLay->addWidget ( expTv );
	expLay->addWidget ( cbFsSshTun );

	QVBoxLayout* rightLay=new QVBoxLayout();
	rightLay->addWidget ( addDir );
	rightLay->addStretch();
	rightLay->addWidget ( delDir );
	rightLay->addStretch();


	tvLay->addLayout ( leftLay );
	tvLay->addSpacing ( 10 );
	tvLay->addLayout ( rightLay );



	expTv->setModel ( ( QAbstractItemModel* ) model );
	QFontMetrics fm1 ( expTv->font() );
	expTv->header()->resizeSection ( 1,
	                                 fm1.width ( tr ( "Automount" ) ) +10 );


	connect ( sessName,SIGNAL ( textChanged ( const QString & ) ),this,
	          SLOT ( slot_changeCaption ( const QString& ) ) );
	connect ( this,SIGNAL ( accepted() ),this,SLOT ( slot_accepted() ) );
	connect ( ok,SIGNAL ( clicked() ),this,SLOT ( accept() ) );
	connect ( cancel,SIGNAL ( clicked() ),this,SLOT ( reject() ) );
	connect ( def,SIGNAL ( clicked() ),this,SLOT ( slot_default() ) );
	connect ( icon,SIGNAL ( clicked() ),this,SLOT ( slot_getIcon() ) );
	connect ( openKey,SIGNAL ( clicked() ),this,SLOT ( slot_getKey() ) );
	connect ( openDir,SIGNAL ( clicked() ),this,SLOT ( slot_openDir() ) );
	connect ( addDir,SIGNAL ( clicked() ),this,SLOT ( slot_addDir() ) );
	connect ( delDir,SIGNAL ( clicked() ),this,SLOT ( slot_delDir() ) );
	connect ( pbAdvanced,SIGNAL ( clicked() ),this,
	          SLOT ( slot_rdpOptions() ) );

	connect ( custom,SIGNAL ( toggled ( bool ) ),width,
	          SLOT ( setEnabled ( bool ) ) );
	connect ( custom,SIGNAL ( toggled ( bool ) ),height,
	          SLOT ( setEnabled ( bool ) ) );
	connect ( custom,SIGNAL ( toggled ( bool ) ),widthLabel,
	          SLOT ( setEnabled ( bool ) ) );
	connect ( custom,SIGNAL ( toggled ( bool ) ),heightLabel,
	          SLOT ( setEnabled ( bool ) ) );


	connect ( kbd,SIGNAL ( toggled ( bool ) ),layout,
	          SLOT ( setDisabled ( bool ) ) );
	connect ( kbd,SIGNAL ( toggled ( bool ) ),layoutLabel,
	          SLOT ( setDisabled ( bool ) ) );
	connect ( kbd,SIGNAL ( toggled ( bool ) ),type,
	          SLOT ( setDisabled ( bool ) ) );
	connect ( kbd,SIGNAL ( toggled ( bool ) ),typeLabel,
	          SLOT ( setDisabled ( bool ) ) );

	connect ( packMethode,SIGNAL ( activated ( const QString& ) ),this,
	          SLOT ( slot_changePack ( const QString& ) ) );

	connect ( sessBox,SIGNAL ( activated ( int ) ),this,
	          SLOT ( slot_changeCmd ( int ) ) );

	connect ( sound,SIGNAL ( toggled ( bool ) ),this,
	          SLOT ( slot_sndToggled ( bool ) ) );
	connect ( sndsys,SIGNAL ( buttonClicked ( int ) ),this,
	          SLOT ( slot_sndSysSelected ( int ) ) );
	connect ( rbStartSnd,SIGNAL ( clicked ( ) ),this,
	          SLOT ( slot_sndStartClicked() ) );
	connect ( rbNotStartSnd,SIGNAL ( clicked ( ) ),this,
	          SLOT ( slot_sndStartClicked() ) );
	connect ( cbDefSndPort,SIGNAL ( toggled ( bool ) ),this,
	          SLOT ( slot_sndDefPortChecked ( bool ) ) );

	kbd->setChecked ( true );
	custom->setChecked ( true );
	ok->setDefault ( true );
#ifdef Q_WS_HILDON
	sz=ok->sizeHint();
	sz.setWidth ( ( int ) ( sz.width() /1.5 ) );
	sz.setHeight ( ( int ) ( sz.height() /1.5 ) );
	ok->setFixedSize ( sz );
	sz=cancel->sizeHint();
	sz.setWidth ( ( int ) ( sz.width() ) );
	sz.setHeight ( ( int ) ( sz.height() /1.5 ) );
	cancel->setFixedSize ( sz );
	sz=def->sizeHint();
	sz.setWidth ( ( int ) ( sz.width() ) );
	sz.setHeight ( ( int ) ( sz.height() /1.5 ) );
	def->setFixedSize ( sz );
#endif
	if ( parent->retMiniMode() )
		setContentsMargins ( 3,3,3,3 );
	readConfig();
	fr->setCurrentIndex ( ind );
}


EditConnectionDialog::~EditConnectionDialog()
{}


void EditConnectionDialog::readConfig()
{

	loadPackMethods();
#ifndef WINDOWS
	QSettings st ( QDir::homePath() +"/.x2goclient/sessions",
	               QSettings::NativeFormat );
#else
	QSettings st ( "Obviously Nice","x2goclient" );
	st.beginGroup ( "sessions" );
#endif
	sessName->setText (
	    st.value ( sessionId+"/name",
	               ( QVariant ) tr ( "New session" ) ).toString() );
	sessIcon=st.value (
	             sessionId+"/icon",
	             ( QVariant ) ":icons/128x128/x2gosession.png" ).toString();
	icon->setIcon ( QIcon ( sessIcon ) );

	server->setText ( st.value ( sessionId+"/host",
	                             ( QVariant ) QString::null ).toString() );
	uname->setText ( st.value ( sessionId+"/user",
	                            ( QVariant ) QString::null ).toString() );
	key->setText ( st.value ( sessionId+"/key",
	                          ( QVariant ) QString::null ).toString() );
	sshPort->setValue (
	    st.value ( sessionId+"/sshport",
	               ( QVariant ) parent->getDefaultSshPort().toInt()
	             ).toInt() );

	QStringList appNames=st.value (
	                         sessionId+"/applications" ).toStringList();
	bool rootless=st.value ( sessionId+"/rootless",false ).toBool();

	QString
	command=st.value ( sessionId+"/command",
	                   ( QVariant ) parent->getDefaultCmd() ).toString();
	
	rdpOptions=st.value ( sessionId+"/rdpoptions",
	                   ( QVariant ) "").toString();
	rdpServer=st.value ( sessionId+"/rdpserver",
	                   ( QVariant ) "" ).toString();
	
	for ( int i=0;i<appNames.count();++i )
	{
		QString app=parent->transAppName ( appNames[i] );
		if ( cmdCombo->findText ( app ) ==-1 )
			cmdCombo->addItem ( app );
	}
	if ( rootless )
	{
		sessBox->setCurrentIndex ( APPLICATION );
		QString app=parent->transAppName ( command );
		cmdCombo->lineEdit()->setText ( app );
		slot_changeCmd ( APPLICATION );
	}
	else
	{
		if ( command=="KDE" )
		{
			sessBox->setCurrentIndex ( KDE );
			cmd->setEnabled ( false );
		}
		else if ( command=="GNOME" )
		{
			sessBox->setCurrentIndex ( GNOME );
			cmd->setEnabled ( false );
		}
		else if ( command=="LXDE" )
		{
			sessBox->setCurrentIndex ( LXDE );
			cmd->setEnabled ( false );
		}
		else if ( command=="RDP" )
		{
			leCmdIp->setText ( tr ( "Server:" ) );
			sessBox->setCurrentIndex ( RDP );
			cmd->setEnabled ( true );
			cmd->setText(rdpServer);
			pbAdvanced->show();
		}
		else
		{
			cmd->setText ( command );
			sessBox->setCurrentIndex ( OTHER );
			cmd->setEnabled ( true );
		}
	}
	if ( sessName->text() ==tr ( "New session" ) )
	{
		sessName->selectAll();
		sessName->setFocus();
	}

	spd->setValue ( st.value (
	                    sessionId+"/speed",
	                    ( QVariant ) parent->getDefaultLink() ).toInt() );
	QString mt=st.value (
	               sessionId+"/pack",
	               ( QVariant ) parent->getDefaultPack() ).toString();


	packMethode->setCurrentIndex ( packMethode->findText ( mt ) );
	quali->setValue ( st.value ( sessionId+"/quality",
	                             parent->getDefaultQuality() ).toInt() );
	slot_changePack ( mt );


	fs->setChecked (
	    st.value ( sessionId+"/fullscreen",
	               ( QVariant ) parent->getDefaultFullscreen() ).toBool() );

	custom->setChecked ( ! st.value (
	                         sessionId+"/fullscreen",
	                         ( QVariant ) parent->getDefaultFullscreen()
	                     ).toBool() );


	width->setValue (
	    st.value ( sessionId+"/width",
	               ( QVariant ) parent->getDefaultWidth() ).toInt() );
	height->setValue (
	    st.value ( sessionId+"/height",
	               ( QVariant ) parent->getDefaultHeight() ).toInt() );

	kbd->setChecked ( !st.value (
	                      sessionId+"/usekbd",
	                      ( QVariant ) parent->getDefaultSetKbd()
	                  ).toBool() );
	layout->setText (
	    st.value ( sessionId+"/layout",
	               ( QVariant ) parent->getDefaultLayout()
	             ).toString() );
	type->setText (
	    st.value ( sessionId+"/type",
	               ( QVariant ) parent->getDefaultKbdType()
	             ).toString() );
	bool snd=st.value (
	             sessionId+"/sound",
	             ( QVariant ) parent->getDefaultUseSound()
	         ).toBool();
	QString sndsys=st.value ( sessionId+"/soundsystem","pulse" ).toString();
	bool startServ=st.value ( sessionId+"/startsoundsystem",
	                          true ).toBool();
	bool sndInTun=st.value ( sessionId+"/soundtunnel", true ).toBool();
	bool defSndPort=st.value ( sessionId+"/defsndport", true ).toBool();
	int sndPort= st.value ( sessionId+"/sndport",4713 ).toInt();
	cbFsSshTun->setChecked ( st.value ( sessionId+"/fstunnel",
	                                    true ).toBool() );
	if ( startServ )
		rbStartSnd->setChecked ( true );
	else
		rbNotStartSnd->setChecked ( true );

	pulse->setChecked ( true );
	slot_sndSysSelected ( PULSE );
#ifdef WINDOWS
	if ( sndsys=="arts" )
	{
		sndsys="pulse";
	}
#endif
	if ( sndsys=="arts" )
	{
		arts->setChecked ( true );
		slot_sndSysSelected ( ARTS );
	}
#ifdef	Q_OS_DARWIN
	sndsys="esd";
#endif
	if ( sndsys=="esd" )
	{
		esd->setChecked ( true );
		slot_sndSysSelected ( ESD );
	}
	cbSndSshTun->setChecked ( sndInTun );
	sound->setChecked ( snd );
	if ( !defSndPort )
		sbSndPort->setValue ( sndPort );
	cbDefSndPort->setChecked ( defSndPort );
	if ( sndsys=="arts" )
		cbDefSndPort->setChecked ( false );
	slot_sndToggled ( snd );
	slot_sndStartClicked();

	cbClientPrint->setChecked ( st.value ( sessionId+"/print",
	                                       true ).toBool() );

	QString exportDir=st.value ( sessionId+"/export",
	                             ( QVariant ) QString::null ).toString();

	QStringList lst=exportDir.split ( ";",QString::SkipEmptyParts );
	for ( int i=0;i<lst.size();++i )
	{
#ifndef WINDOWS
		QStringList tails=lst[i].split ( ":",QString::SkipEmptyParts );
#else
		QStringList tails=lst[i].split ( "#",QString::SkipEmptyParts );
#endif
		QStandardItem *item;
		item= new QStandardItem ( tails[0] );
		model->setItem ( model->rowCount(),0,item );
		item= new QStandardItem();
		item->setCheckable ( true );
		if ( tails[1]=="1" )
			item->setCheckState ( Qt::Checked );
		model->setItem ( model->rowCount()-1,1,item );
	}
}


void EditConnectionDialog::slot_changeCaption ( const QString& newName )
{
	setWindowTitle ( tr ( "Session preferences - " ) +newName );
}


void EditConnectionDialog::loadPackMethods()
{
	QFile file ( ":/txt/packs" );
	if ( !file.open ( QIODevice::ReadOnly | QIODevice::Text ) )
		return;
	QTextStream in ( &file );
	while ( !in.atEnd() )
	{
		QString pc=in.readLine();
		if ( pc.indexOf ( "-%" ) !=-1 )
		{
			pc=pc.left ( pc.indexOf ( "-%" ) );
			qualiList<<pc;
		}
		packMethode->addItem ( pc );
	}
	file.close();
}


void EditConnectionDialog::slot_changePack ( const QString& pc )
{
	bool ct=qualiList.contains ( pc );
	quali->setEnabled ( ct );
	qualiLabel->setEnabled ( ct );
}


void EditConnectionDialog::slot_getIcon()
{
	QString path= QFileDialog::getOpenFileName (
	                  this,
	                  tr ( "Open picture" ),
	                  QDir::homePath(),
	                  tr ( "Pictures" ) +" (*.png *.xpm *.jpg)" );
	if ( path!=QString::null )
	{
		sessIcon=path;
		icon->setIcon ( QIcon ( sessIcon ) );
	}
}

void EditConnectionDialog::slot_getKey()
{
	QString path= QFileDialog::getOpenFileName (
	                  this,
	                  tr ( "Open key file" ),
	                  QDir::homePath(),
	                  tr ( "All files" ) +" (*)" );
	if ( path!=QString::null )
	{
		key->setText ( path );
	}
}


void EditConnectionDialog::slot_accepted()
{

#ifndef WINDOWS
	QSettings st ( QDir::homePath() +"/.x2goclient/sessions",
	               QSettings::NativeFormat );
#else
	QSettings st ( "Obviously Nice","x2goclient" );
	st.beginGroup ( "sessions" );
#endif
	st.setValue ( sessionId+"/name", ( QVariant ) sessName->text() );
	st.setValue ( sessionId+"/icon", ( QVariant ) sessIcon );
	st.setValue ( sessionId+"/host", ( QVariant ) server->text() );
	st.setValue ( sessionId+"/user", ( QVariant ) uname->text() );
	st.setValue ( sessionId+"/key", ( QVariant ) key->text() );
	st.setValue ( sessionId+"/sshport", ( QVariant ) sshPort->value() );
	QString command;
	bool rootless=false;


	if ( sessBox->currentIndex() < OTHER )
		command=sessBox->currentText();
	else
		command=cmd->text();
	if ( sessBox->currentIndex() == RDP )
	{
		command="RDP";
		rdpServer=cmd->text();
	}

	QStringList appList;
	for ( int i=-1;i<cmdCombo->count();++i )
	{
		QString app;
		if ( i==-1 )
			app=parent->internAppName (
			        cmdCombo->lineEdit()->text () );
		else
			app=parent->internAppName ( cmdCombo->itemText ( i ) );
		if ( appList.indexOf ( app ) ==-1 && app!="" &&
		        app!=tr ( "Path to executable" ) )
		{
			appList.append ( app );
		}
	}
	if ( sessBox->currentIndex() ==APPLICATION )
	{
		rootless=true;
		command=parent->internAppName ( cmdCombo->lineEdit()->text() );
	}
	st.setValue ( sessionId+"/rootless", ( QVariant ) rootless );
	st.setValue ( sessionId+"/applications", ( QVariant ) appList );
	st.setValue ( sessionId+"/command", ( QVariant ) command );
	st.setValue ( sessionId+"/rdpoptions", ( QVariant ) rdpOptions );
	st.setValue ( sessionId+"/rdpserver", ( QVariant ) rdpServer );
	st.setValue ( sessionId+"/speed", ( QVariant ) spd->value() );
	st.setValue ( sessionId+"/pack",
	              ( QVariant ) packMethode->currentText() );
	st.setValue ( sessionId+"/quality", ( QVariant ) quali->value() );
	st.setValue ( sessionId+"/fullscreen", ( QVariant ) fs->isChecked() );
	st.setValue ( sessionId+"/width", ( QVariant ) width->value() );
	st.setValue ( sessionId+"/height", ( QVariant ) height->value() );
	st.setValue ( sessionId+"/usekbd", ( QVariant ) !kbd->isChecked() );
	st.setValue ( sessionId+"/layout", ( QVariant ) layout->text() );
	st.setValue ( sessionId+"/type", ( QVariant ) type->text() );
	st.setValue ( sessionId+"/sound", ( QVariant ) sound->isChecked() );
	if ( arts->isChecked() )
		st.setValue ( sessionId+"/soundsystem", ( QVariant ) "arts" );
	if ( esd->isChecked() )
		st.setValue ( sessionId+"/soundsystem", ( QVariant ) "esd" );
	if ( pulse->isChecked() )
		st.setValue ( sessionId+"/soundsystem", ( QVariant ) "pulse" );

	st.setValue ( sessionId+"/startsoundsystem",
	              ( QVariant ) rbStartSnd->isChecked() );
	st.setValue ( sessionId+"/soundtunnel",
	              ( QVariant ) cbSndSshTun->isChecked() );
	st.setValue ( sessionId+"/fstunnel",
	              ( QVariant ) cbFsSshTun->isChecked() );
	st.setValue ( sessionId+"/defsndport",
	              ( QVariant ) cbDefSndPort->isChecked() );
	st.setValue ( sessionId+"/sndport", ( QVariant ) sbSndPort->value() );
	st.setValue ( sessionId+"/print",
	              ( QVariant ) cbClientPrint->isChecked() );


	QString exportDirs;
	for ( int i=0;i<model->rowCount();++i )
	{
#ifndef WINDOWS
		exportDirs+=model->index ( i,0 ).data().toString() +":";
#else
		exportDirs+=model->index ( i,0 ).data().toString() +"#";
#endif

		if ( model->item ( i,1 )->checkState() ==Qt::Checked )
			exportDirs+="1;";
		else
			exportDirs+="0;";
	}
	st.setValue ( sessionId+"/export", ( QVariant ) exportDirs );
	st.sync();
}


void EditConnectionDialog::slot_default()
{
	switch ( fr->currentIndex() )
	{
		case 0:
		{
			cmd->setText ( "" );
			sessBox->setCurrentIndex ( KDE );
			cmdCombo->clear();
			cmdCombo->addItem ( "" );
			cmdCombo->addItems ( parent->transApplicationsNames() );
			cmdCombo->lineEdit()->setText (
			    tr ( "Path to executable" ) );
			cmdCombo->lineEdit()->selectAll();
			slot_changeCmd ( 0 );
			cmd->setEnabled ( false );
			sessIcon=":icons/128x128/x2gosession.png";
			icon->setIcon ( QIcon ( sessIcon ) );
			sshPort->setValue (
			    parent->getDefaultSshPort().toInt() );
		}
		break;
		case 1:
		{
			spd->setValue ( 2 );
			packMethode->setCurrentIndex (
			    packMethode->findText ( "16m-jpeg" ) );
			quali->setValue ( 9 );
			slot_changePack ( "16m-jpeg" );
		}
		break;
		case 2:
		{
			fs->setChecked ( false );
			custom->setChecked ( true );
			width->setValue ( 800 );
			height->setValue ( 600 );

			kbd->setChecked ( true );
			layout->setText ( tr ( "us" ) );
			type->setText ( tr ( "pc105/us" ) );
			sound->setChecked ( true );
			pulse->setChecked ( true );
			slot_sndToggled ( true );
			slot_sndSysSelected ( PULSE );
			cbSndSshTun->setChecked ( true );
			rbStartSnd->setChecked ( true );
		}
		break;
	}
}

void EditConnectionDialog::slot_changeCmd ( int var )
{
	leCmdIp->setText ( tr ( "Command:" ) );
	pbAdvanced->hide();
	if ( var==APPLICATION )
	{
		cmd->hide();
		cmdCombo->setVisible ( true );
		cmdCombo->lineEdit()->selectAll();
		cmdCombo->lineEdit()->setFocus();
	}
	else
	{
		cmdCombo->hide();
		cmd->setVisible ( true );
		if ( var==OTHER || var == RDP )
		{
			cmd->setText ( "" );
			cmd->setEnabled ( true );
			cmd->selectAll();
			cmd->setFocus();
			if ( var==RDP )
			{
				leCmdIp->setText ( tr ( "Server:" ) );
				pbAdvanced->show();
				cmd->setText(rdpServer);
			}
		}
		else
		{
			cmd->setEnabled ( false );
			cmd->setText ( "" );
		}
	}
}




void EditConnectionDialog::slot_openDir()
{
	QString path= QFileDialog::getExistingDirectory (
	                  this,
	                  tr ( "Select folder" ),
	                  QDir::homePath() );
	if ( path!=QString::null )
	{
		ldir->setText ( path );
	}
}


void EditConnectionDialog::slot_addDir()
{
	QString path=ldir->text();
	if ( path.length() <1 )
		return;
	for ( int i=0;i<model->rowCount();++i )
		if ( model->index ( i,0 ).data().toString() ==path )
			return;
	QStandardItem *item;
	item= new QStandardItem ( path );
	model->setItem ( model->rowCount(),0,item );
	item= new QStandardItem();
	item->setCheckable ( true );
	model->setItem ( model->rowCount()-1,1,item );
	ldir->setText ( QString::null );
}


void EditConnectionDialog::slot_delDir()
{
	model->removeRow ( expTv->currentIndex().row() );
}

void EditConnectionDialog::slot_sndSysSelected ( int system )
{
	rbStartSnd->show();
	rbNotStartSnd->show();
	cbSndSshTun->hide();
	cbDefSndPort->setChecked ( true );
	cbDefSndPort->setEnabled ( true );

	switch ( system )
	{
		case PULSE:
		{
			rbStartSnd->hide();
			rbNotStartSnd->hide();
			cbSndSshTun->show();
			cbSndSshTun->setEnabled ( true );
			break;
		}
		case ARTS:
		{
			cbDefSndPort->setChecked ( false );
			cbDefSndPort->setEnabled ( false );
			sbSndPort->setValue ( 20221 );
			break;
		}
		case ESD:
		{
#ifdef WINDOWS
			rbStartSnd->hide();
			rbNotStartSnd->hide();
			cbSndSshTun->show();
			cbSndSshTun->setEnabled ( false );
			cbSndSshTun->setChecked ( true );
#endif
			sbSndPort->setValue ( 16001 );
			break;
		}
	}
	slot_sndStartClicked();
}

void EditConnectionDialog::slot_sndToggled ( bool val )
{
	arts->setEnabled ( val );
	pulse->setEnabled ( val );
	esd->setEnabled ( val );

	rbStartSnd->setEnabled ( val );
	rbNotStartSnd->setEnabled ( val );

	cbSndSshTun->setEnabled ( false );
	if ( pulse->isChecked() )
		cbSndSshTun->setEnabled ( val );
	lSndPort->setEnabled ( val );
	if ( !arts->isChecked() )
		cbDefSndPort->setEnabled ( val );
	sbSndPort->setEnabled ( val );
	if ( val )
		slot_sndStartClicked();

}

void EditConnectionDialog::slot_sndStartClicked()
{
	bool start=rbStartSnd->isChecked();
#ifdef WINDOWS
	start=false;
#endif
	if ( pulse->isChecked() )
	{
		lSndPort->setEnabled ( true );
		sbSndPort->setEnabled ( true );
		cbDefSndPort->setEnabled ( true );
	}
	else
	{
		lSndPort->setEnabled ( !start );
		sbSndPort->setEnabled ( !start );
		cbDefSndPort->setEnabled ( !start );
	}
	if ( arts->isChecked() )
		cbDefSndPort->setEnabled ( false );
	if ( ( !start  && esd->isChecked() ) ||pulse->isChecked() )
		slot_sndDefPortChecked ( cbDefSndPort->isChecked() );

}

void EditConnectionDialog::slot_sndDefPortChecked ( bool val )
{
	sbSndPort->setEnabled ( !val );
	lSndPort->setEnabled ( !val );
	if ( val )
	{
		if ( pulse->isChecked() )
			sbSndPort->setValue ( 4713 );
		if ( arts->isChecked() )
			sbSndPort->setValue ( 20221 );
		if ( esd->isChecked() )
			sbSndPort->setValue ( 16001 );
	}

}

void EditConnectionDialog::slot_rdpOptions()
{
	bool ok;
	QString text = QInputDialog::getText (
	                   this,
	                   tr ( "Connect to Windows terminal server" ),
	                   tr ( "rdesktop command line options:" ),
	                   QLineEdit::Normal,
	                   rdpOptions, &ok );
		rdpOptions= text;
}
