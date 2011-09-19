//
// C++ Implementation: sessionwidget
//
// Description:
//
//
// Author: Oleksandr Shneyder <oleksandr.shneyder@obviously-nice.de>, (C) 2009
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "sessionwidget.h"
#include <QBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QGroupBox>
#include <QSpinBox>
#include <QIcon>
#include <QComboBox>
#include <QFileDialog>
#include <QDir>
#include <QInputDialog>
#include <QCheckBox>
#include "onmainwindow.h"
#include "x2gosettings.h"
#include <QMessageBox>

SessionWidget::SessionWidget ( QString id, ONMainWindow * mw,
                               QWidget * parent, Qt::WindowFlags f )
        : ConfigWidget ( id,mw,parent,f )
{
    QVBoxLayout* sessLay=new QVBoxLayout ( this );
#ifdef Q_WS_HILDON
    sessLay->setMargin ( 2 );
#endif
    sessName=new QLineEdit ( this );
    icon=new QPushButton ( QString::null,this );
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
    slay->addWidget ( new QLabel ( tr ( "Session name:" ),this ) );
    slay->addWidget ( sessName );

    QHBoxLayout* ilay=new QHBoxLayout();
    ilay->addWidget ( icon );
    ilay->addWidget ( new QLabel ( tr ( "<< change icon" ),this ) );

#ifndef Q_WS_HILDON
    QGroupBox *sgb=new QGroupBox ( tr ( "&Server" ),this );
#else
    QFrame* sgb=this;
#endif
    server=new QLineEdit ( sgb );
    uname=new QLineEdit ( sgb );
    sshPort=new QSpinBox ( sgb );
    sshPort->setValue ( mainWindow->getDefaultSshPort().toInt() );
    sshPort->setMinimum ( 1 );
    sshPort->setMaximum ( 999999999 );
    key=new QLineEdit ( sgb );

#ifndef Q_WS_HILDON
    QPushButton* openKey=new QPushButton (
        QIcon ( mainWindow->iconsPath (
                    "/32x32/file-open.png" ) ),
        QString::null,sgb );
    QVBoxLayout *sgbLay = new QVBoxLayout ( sgb );
#else
    QPushButton* openKey=new QPushButton (
        QIcon ( mainWindow->iconsPath ( "/16x16/file-open.png" ) ),
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
    cbAutoLogin=new QCheckBox(tr("Try auto login (ssh-agent or default ssh key)"),sgb);
    sgbLay->addWidget(cbAutoLogin);

#ifndef Q_WS_HILDON
    QGroupBox *deskSess=new QGroupBox ( tr ( "&Session type" ),this );
    QHBoxLayout* cmdLay=new QHBoxLayout ( deskSess );
#else
    QFrame* deskSess=this;
    QHBoxLayout* cmdLay=new QHBoxLayout ();
    cmdLay->addWidget ( new QLabel ( tr ( "Session type:" ),this ) );
#endif
    sessBox=new QComboBox ( deskSess );
    cmd=new QLineEdit ( deskSess );
    cmdCombo=new QComboBox ( deskSess );
    cmdCombo->setEditable ( true );
    sessBox->addItem ( "KDE" );
    sessBox->addItem ( "GNOME" );
    sessBox->addItem ( "LXDE" );
    sessBox->addItem ( tr ( "Connect to Windows terminal server" ) );
    sessBox->addItem ( tr ( "XDMCP" ) );
    sessBox->addItem ( tr ( "Connect to local desktop" ) );
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
    cmdCombo->addItems ( mainWindow->transApplicationsNames() );
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

    connect ( icon,SIGNAL ( clicked() ),this,SLOT ( slot_getIcon() ) );
    connect ( openKey,SIGNAL ( clicked() ),this,SLOT ( slot_getKey() ) );
    connect ( pbAdvanced,SIGNAL ( clicked() ),this,
              SLOT ( slot_rdpOptions() ) );
    connect ( sessBox,SIGNAL ( activated ( int ) ),this,
              SLOT ( slot_changeCmd ( int ) ) );
    connect ( sessName,SIGNAL ( textChanged ( const QString & ) ),this,
              SIGNAL ( nameChanged ( const QString & ) ) );
    readConfig();
}

SessionWidget::~SessionWidget()
{
}


void SessionWidget::slot_getIcon()
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

void SessionWidget::slot_getKey()
{
    QString path;
    QString startDir=ONMainWindow::getHomeDirectory();
#ifdef Q_OS_WIN
    if ( ONMainWindow::getPortable() &&
            ONMainWindow::U3DevicePath().length() >0 )
    {
        startDir=ONMainWindow::U3DevicePath() +"/";
    }
#endif
    path = QFileDialog::getOpenFileName (
               this,
               tr ( "Open key file" ),
               startDir,
               tr ( "All files" ) +" (*)" );
    if ( path!=QString::null )
    {
#ifdef Q_OS_WIN
        if ( ONMainWindow::getPortable() &&
                ONMainWindow::U3DevicePath().length() >0 )
        {
            if ( path.indexOf ( ONMainWindow::U3DevicePath() ) !=0 )
            {
                QMessageBox::critical (
                    0l,tr ( "Error" ),
                    tr ( "x2goclient is running in "
                         "portable mode. You should "
                         "use a path on your usb device "
                         "to be able to access your data "
                         "whereever you are" ),
                    QMessageBox::Ok,QMessageBox::NoButton );
                slot_getKey();
                return;
            }
            path.replace ( ONMainWindow::U3DevicePath(),
                           "(U3)" );
        }
#endif
        key->setText ( path );
    }
}


void SessionWidget::slot_changeCmd ( int var )
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
        if ( var==OTHER || var == RDP || var == XDMCP )
        {
            cmd->setText ( "" );
            cmd->setEnabled ( true );
            cmd->selectAll();
            cmd->setFocus();
            if ( var==RDP )
            {
                leCmdIp->setText ( tr ( "Server:" ) );
                pbAdvanced->show();
                cmd->setText ( rdpServer );
            }
            if ( var== XDMCP )
            {
                leCmdIp->setText ( tr ( "XDMCP server:" ) );
                cmd->setText ( xdmcpServer );
            }
        }
        else
        {
            cmd->setEnabled ( false );
            cmd->setText ( "" );
        }
    }
}

void SessionWidget::slot_rdpOptions()
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

void SessionWidget::readConfig()
{

    X2goSettings st ( "sessions" );
    sessName->setText (
        st.setting()->value (
            sessionId+"/name",
            ( QVariant ) tr ( "New session" ) ).toString() );
    sessIcon=st.setting()->value (
                 sessionId+"/icon",
                 ( QVariant ) ":icons/128x128/x2gosession.png" ).toString();
    icon->setIcon ( QIcon ( sessIcon ) );

    server->setText ( st.setting()->value (
                          sessionId+"/host",
                          ( QVariant ) QString::null ).toString() );
    uname->setText ( st.setting()->value (
                         sessionId+"/user",
                         ( QVariant ) QString::null ).toString() );
    key->setText ( st.setting()->value (
                       sessionId+"/key",
                       ( QVariant ) QString::null ).toString() );
    cbAutoLogin->setChecked(st.setting()->value (
                                sessionId+"/autologin",
                                ( QVariant ) QString::null ).toBool());
    sshPort->setValue (
        st.setting()->value (
            sessionId+"/sshport",
            ( QVariant ) mainWindow->getDefaultSshPort().toInt()
        ).toInt() );

    QStringList appNames=st.setting()->value (
                             sessionId+"/applications" ).toStringList();
    bool rootless=st.setting()->value (
                      sessionId+"/rootless",false ).toBool();

    QString
    command=st.setting()->value (
                sessionId+"/command",
                ( QVariant ) mainWindow->getDefaultCmd() ).toString();

    rdpOptions=st.setting()->value ( sessionId+"/rdpoptions",
                                     ( QVariant ) "" ).toString();
    rdpServer=st.setting()->value ( sessionId+"/rdpserver",
                                    ( QVariant ) "" ).toString();
    xdmcpServer=st.setting()->value ( sessionId+"/xdmcpserver",
                                      ( QVariant ) "localhost" ).toString();

    for ( int i=0;i<appNames.count();++i )
    {
        QString app=mainWindow->transAppName ( appNames[i] );
        if ( cmdCombo->findText ( app ) ==-1 )
            cmdCombo->addItem ( app );
    }
    if ( rootless )
    {
        sessBox->setCurrentIndex ( APPLICATION );
        QString app=mainWindow->transAppName ( command );
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
        else if ( command=="SHADOW" )
        {
            sessBox->setCurrentIndex ( SHADOW );
            cmd->setEnabled ( false );
        }
        else if ( command=="RDP" )
        {
            leCmdIp->setText ( tr ( "Server:" ) );
            sessBox->setCurrentIndex ( RDP );
            cmd->setEnabled ( true );
            cmd->setText ( rdpServer );
            pbAdvanced->show();
        }
        else if ( command=="XDMCP" )
        {
            leCmdIp->setText ( tr ( "XDMCP server:" ) );
            sessBox->setCurrentIndex ( XDMCP );
            cmd->setEnabled ( true );
            cmd->setText ( xdmcpServer );
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
}

void SessionWidget::setDefaults()
{
    cmd->setText ( "" );
    sessBox->setCurrentIndex ( KDE );
    cmdCombo->clear();
    cmdCombo->addItem ( "" );
    cmdCombo->addItems ( mainWindow->transApplicationsNames() );
    cbAutoLogin->setChecked(false);
    cmdCombo->lineEdit()->setText (
        tr ( "Path to executable" ) );
    cmdCombo->lineEdit()->selectAll();
    slot_changeCmd ( 0 );
    cmd->setEnabled ( false );
    sessIcon=":icons/128x128/x2gosession.png";
    icon->setIcon ( QIcon ( sessIcon ) );
    sshPort->setValue (
        mainWindow->getDefaultSshPort().toInt() );
}


void SessionWidget::saveSettings()
{

    X2goSettings st ( "sessions" );
    st.setting()->setValue ( sessionId+"/name",
                             ( QVariant ) sessName->text() );
    st.setting()->setValue ( sessionId+"/icon",
                             ( QVariant ) sessIcon );
    st.setting()->setValue ( sessionId+"/host",
                             ( QVariant ) server->text() );
    st.setting()->setValue ( sessionId+"/user",
                             ( QVariant ) uname->text() );

    st.setting()->setValue ( sessionId+"/key",
                             ( QVariant ) key->text() );
    st.setting()->setValue ( sessionId+"/sshport",
                             ( QVariant ) sshPort->value() );
    st.setting()->setValue(sessionId+"/autologin",( QVariant ) cbAutoLogin->isChecked());
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
    if ( sessBox->currentIndex() == XDMCP )
    {
        command="XDMCP";
        xdmcpServer=cmd->text();
    }
    if ( sessBox->currentIndex() == SHADOW )
    {
        command="SHADOW";
    }

    QStringList appList;
    for ( int i=-1;i<cmdCombo->count();++i )
    {
        QString app;
        if ( i==-1 )
            app=mainWindow->internAppName (
                    cmdCombo->lineEdit()->text () );
        else
            app=mainWindow->internAppName ( cmdCombo->itemText ( i ) );
        if ( appList.indexOf ( app ) ==-1 && app!="" &&
                app!=tr ( "Path to executable" ) )
        {
            appList.append ( app );
        }
    }
    if ( sessBox->currentIndex() ==APPLICATION )
    {
        rootless=true;
        command=mainWindow->internAppName ( cmdCombo->lineEdit()->text() );
    }
    st.setting()->setValue ( sessionId+"/rootless", ( QVariant ) rootless );
    st.setting()->setValue ( sessionId+"/applications",
                             ( QVariant ) appList );
    st.setting()->setValue ( sessionId+"/command",
                             ( QVariant ) command );
    st.setting()->setValue ( sessionId+"/rdpoptions",
                             ( QVariant ) rdpOptions );
    st.setting()->setValue ( sessionId+"/rdpserver",
                             ( QVariant ) rdpServer );
    st.setting()->setValue ( sessionId+"/xdmcpserver",
                             ( QVariant ) xdmcpServer );
    st.setting()->sync();
}

QString SessionWidget::sessionName()
{
    return sessName->text();
}