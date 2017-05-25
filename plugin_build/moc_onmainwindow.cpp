/****************************************************************************
** Meta object code from reading C++ file 'onmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/onmainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'onmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SessTreeView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_SessTreeView[] = {
    "SessTreeView\0\0index\0selected(QModelIndex)\0"
};

void SessTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SessTreeView *_t = static_cast<SessTreeView *>(_o);
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SessTreeView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SessTreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_SessTreeView,
      qt_meta_data_SessTreeView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SessTreeView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SessTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SessTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SessTreeView))
        return static_cast<void*>(const_cast< SessTreeView*>(this));
    return QTreeView::qt_metacast(_clname);
}

int SessTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void SessTreeView::selected(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ONMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       6,   14, // classinfo
     123,   26, // methods
       1,  641, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
      52,   13,
      99,   60,
     150,  111,
     218,  159,
     223,    0,
     247,  236,

 // slots: signature, parameters, type, tag, flags
     264,  263,  263,  263, 0x08,
     280,  263,  263,  263, 0x08,
     299,  263,  263,  263, 0x08,
     321,  314,  263,  263, 0x08,
     359,  352,  263,  263, 0x08,
     387,  384,  263,  263, 0x08,
     410,  405,  263,  263, 0x08,
     436,  263,  263,  263, 0x08,
     452,  263,  263,  263, 0x08,
     475,  263,  263,  263, 0x08,
     496,  263,  263,  263, 0x08,
     519,  263,  263,  263, 0x08,
     536,  531,  263,  263, 0x08,
     570,  263,  263,  263, 0x08,
     589,  263,  263,  263, 0x08,
     605,  263,  263,  263, 0x08,
     624,  263,  263,  263, 0x08,
     637,  263,  263,  263, 0x08,
     658,  263,  263,  263, 0x08,
     703,  678,  263,  263, 0x08,
     771,  743,  263,  263, 0x08,
     856,  828,  263,  263, 0x08,
     929,  911,  263,  263, 0x08,
    1001,  983,  263,  263, 0x08,
    1067, 1056,  263,  263, 0x08,
    1135, 1114,  263,  263, 0x08,
    1200,  263,  263,  263, 0x08,
    1235, 1229,  263,  263, 0x08,
    1265,  263,  263,  263, 0x08,
    1294, 1287,  263,  263, 0x08,
    1334, 1327,  263,  263, 0x08,
    1363,  263,  263,  263, 0x08,
    1375,  263,  263,  263, 0x08,
    1418, 1400,  263,  263, 0x08,
    1457,  263,  263,  263, 0x0a,
    1470,  263,  263,  263, 0x0a,
    1487,  263,  263,  263, 0x0a,
    1512,  263,  263,  263, 0x0a,
    1536,  263,  263,  263, 0x0a,
    1557,  263,  263,  263, 0x0a,
    1600, 1568,  263,  263, 0x08,
    1647,  263,  263,  263, 0x08,
    1681, 1673,  263,  263, 0x08,
    1718,  263,  263,  263, 0x08,
    1734,  263,  263,  263, 0x08,
    1761, 1755,  263,  263, 0x08,
    1788,  263,  263,  263, 0x08,
    1805,  263,  263,  263, 0x08,
    1823,  263,  263,  263, 0x08,
    1844,  263,  263,  263, 0x08,
    1868,  263,  263,  263, 0x08,
    1883,  263,  263,  263, 0x08,
    1897,  263,  263,  263, 0x08,
    1917,  263,  263,  263, 0x08,
    1955, 1940,  263,  263, 0x08,
    1988, 1940,  263,  263, 0x08,
    2038, 2023,  263,  263, 0x08,
    2072, 1940,  263,  263, 0x08,
    2106, 1940,  263,  263, 0x08,
    2142, 1940,  263,  263, 0x08,
    2177, 1940,  263,  263, 0x08,
    2214, 1940,  263,  263, 0x08,
    2252, 1940,  263,  263, 0x08,
    2282,  263,  263,  263, 0x08,
    2300,  263,  263,  263, 0x28,
    2315,  263,  263,  263, 0x08,
    2339, 2335,  263,  263, 0x08,
    2388, 2378,  263,  263, 0x08,
    2432,  263,  263,  263, 0x08,
    2450,  263,  263,  263, 0x08,
    2468,  263,  263,  263, 0x08,
    2503,  263,  263,  263, 0x08,
    2526,  263,  263,  263, 0x08,
    2545,  263,  263,  263, 0x08,
    2578, 2569,  263,  263, 0x08,
    2611, 1940,  263,  263, 0x08,
    2647, 1940,  263,  263, 0x08,
    2680, 1940,  263,  263, 0x08,
    2718, 1940,  263,  263, 0x08,
    2753,  263,  263,  263, 0x08,
    2766,  263,  263,  263, 0x08,
    2788,  263,  263,  263, 0x08,
    2806,  263,  263,  263, 0x08,
    2820,  263,  263,  263, 0x08,
    2832,  263,  263,  263, 0x08,
    2853, 2846,  263,  263, 0x08,
    2906,  263,  263,  263, 0x08,
    2927,  263,  263,  263, 0x08,
    2938,  263,  263,  263, 0x08,
    2953,  263,  263,  263, 0x08,
    2981,  263,  263,  263, 0x08,
    3003,  263,  263,  263, 0x08,
    3021,  263,  263,  263, 0x08,
    3036,  263,  263,  263, 0x08,
    3055,  263,  263,  263, 0x08,
    3076,  263,  263,  263, 0x08,
    3117, 3097,  263,  263, 0x08,
    3159, 3097,  263,  263, 0x08,
    3206, 1229,  263,  263, 0x08,
    3248,  263,  263,  263, 0x08,
    3263,  263,  263,  263, 0x08,
    3283, 3097,  263,  263, 0x08,
    3330,  263,  263,  263, 0x08,
    3354,  263,  263,  263, 0x08,
    3372,  263,  263,  263, 0x08,
    3396,  263,  263,  263, 0x08,
    3415,  263,  263,  263, 0x08,
    3436,  263,  263,  263, 0x08,
    3461,  263,  263,  263, 0x08,
    3485,  263,  263,  263, 0x08,
    3513,  263,  263,  263, 0x08,
    3550, 3531,  263,  263, 0x08,
    3585,  263,  263,  263, 0x08,
    3604,  263,  263,  263, 0x08,
    3630,  263,  263,  263, 0x08,
    3660,  405,  263,  263, 0x08,
    3700, 3694,  263,  263, 0x08,
    3725,  263,  263,  263, 0x08,
    3746,  263,  263,  263, 0x08,
    3763,  263,  263,  263, 0x08,
    3786,  263,  263,  263, 0x08,
    3804,  263,  263,  263, 0x08,
    3832,  405,  263,  263, 0x0a,

 // properties: name, type, flags
     236, 3855, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_ONMainWindow[] = {
    "ONMainWindow\0{5a20006d-118f-4185-9653-9f98958a0008}\0"
    "ClassID\0{2df000ba-da4f-4fb7-8f35-b8dfbf80009a}\0"
    "InterfaceID\0{44900013-f8bd-4d2e-a2cf-eab407c03005}\0"
    "EventsID\0"
    "application/x2go:x2go:Configuration File for X2Go Sessions\0"
    "MIME\0ToSuperClass\0x2goconfig\0"
    "DefaultProperty\0\0slotAppDialog()\0"
    "slotShowPassForm()\0displayUsers()\0"
    "action\0slotAppMenuTriggered(QAction*)\0"
    "result\0slotPassChanged(QString)\0sz\0"
    "slotResize(QSize)\0text\0slotUnameChanged(QString)\0"
    "slotPassEnter()\0slotChangeBrokerPass()\0"
    "slotTestConnection()\0slotCheckPortableDir()\0"
    "readUsers()\0user\0slotSelectedFromList(UserButton*)\0"
    "slotUnameEntered()\0slotClosePass()\0"
    "slotReadSessions()\0slotManage()\0"
    "displayToolBar(bool)\0showSessionStatus()\0"
    "message,lastSessionError\0"
    "slotSshConnectionError(QString,QString)\0"
    "error,sshMessage,connection\0"
    "slotSshServerAuthError(int,QString,SshMasterConnection*)\0"
    "connection,verificationCode\0"
    "slotSshServerAuthPassphrase(SshMasterConnection*,bool)\0"
    "connection,prompt\0"
    "slotSshInteractionStart(SshMasterConnection*,QString)\0"
    "connection,output\0"
    "slotSshInteractionUpdate(SshMasterConnection*,QString)\0"
    "connection\0slotSshInteractionFinish(SshMasterConnection*)\0"
    "connection,Challenge\0"
    "slotSshServerAuthChallengeResponse(SshMasterConnection*,QString)\0"
    "slotCloseInteractionDialog()\0error\0"
    "slotSshUserAuthError(QString)\0"
    "slotSshConnectionOk()\0server\0"
    "slotServSshConnectionOk(QString)\0"
    "layout\0slotChangeKbdLayout(QString)\0"
    "slotSyncX()\0slotShutdownThinClient()\0"
    "result,output,pid\0"
    "slotReadApplications(bool,QString,int)\0"
    "slotConfig()\0slotNewSession()\0"
    "slotEmbedControlAction()\0"
    "slotDetachProxyWindow()\0slotActivateWindow()\0"
    "setFocus()\0error,main_text,info_text,modal\0"
    "slotShowPAMSGDialog(bool,QString,QString,bool)\0"
    "slotSnameChanged(QString)\0session\0"
    "slotSelectedFromList(SessionButton*)\0"
    "slotSessEnter()\0slotCloseSelectDlg()\0"
    "index\0slotActivated(QModelIndex)\0"
    "slotResumeSess()\0slotSuspendSess()\0"
    "slotTermSessFromSt()\0slotSuspendSessFromSt()\0"
    "slotTermSess()\0slotNewSess()\0"
    "slotGetBrokerAuth()\0slotGetBrokerSession()\0"
    "result,output,\0slotCmdMessage(bool,QString,int)\0"
    "slotListSessions(bool,QString,int)\0"
    "value,message,\0slotRetSuspSess(bool,QString,int)\0"
    "slotRetTermSess(bool,QString,int)\0"
    "slotRetResumeSess(bool,QString,int)\0"
    "slotTunnelFailed(bool,QString,int)\0"
    "slotFsTunnelFailed(bool,QString,int)\0"
    "slotSndTunnelFailed(bool,QString,int)\0"
    "slotCopyKey(bool,QString,int)\0"
    "slotTunnelOk(int)\0slotTunnelOk()\0"
    "slotFsTunnelOk(int)\0err\0"
    "slotProxyError(QProcess::ProcessError)\0"
    "result,st\0slotProxyFinished(int,QProcess::ExitStatus)\0"
    "slotProxyStderr()\0slotProxyStdout()\0"
    "slotResumeDoubleClick(QModelIndex)\0"
    "slotShowAdvancedStat()\0slotRestartProxy()\0"
    "slotTestSessionStatus()\0,output,\0"
    "SlotRunCommand(bool,QString,int)\0"
    "slotRetRunCommand(bool,QString,int)\0"
    "slotGetServers(bool,QString,int)\0"
    "slotListAllSessions(bool,QString,int)\0"
    "slotRetExportDir(bool,QString,int)\0"
    "slotResize()\0slotExportDirectory()\0"
    "slotExportTimer()\0slotAboutQt()\0"
    "slotAbout()\0slotSupport()\0reason\0"
    "trayIconActivated(QSystemTrayIcon::ActivationReason)\0"
    "trayMessageClicked()\0trayQuit()\0"
    "trayIconInit()\0slotSetProxyWinFullscreen()\0"
    "slotCheckPrintSpool()\0slotRereadUsers()\0"
    "slotExtTimer()\0slotStartPGPAuth()\0"
    "slotScDaemonStdOut()\0slotScDaemonStdErr()\0"
    "exitCode,exitStatus\0"
    "slotGpgFinished(int,QProcess::ExitStatus)\0"
    "slotScDaemonFinished(int,QProcess::ExitStatus)\0"
    "slotScDaemonError(QProcess::ProcessError)\0"
    "slotGpgError()\0slotCheckScDaemon()\0"
    "slotGpgAgentFinished(int,QProcess::ExitStatus)\0"
    "slotCheckAgentProcess()\0slotExecXmodmap()\0"
    "slotCreateSessionIcon()\0slotFindProxyWin()\0"
    "slotConfigXinerama()\0slotXineramaConfigured()\0"
    "slotAttachProxyWindow()\0"
    "slotEmbedIntoParentWindow()\0"
    "slotEmbedWindow()\0result,output,proc\0"
    "slotPCookieReady(bool,QString,int)\0"
    "slotEmbedToolBar()\0slotEmbedToolBarToolTip()\0"
    "slotHideEmbedToolBarToolTip()\0"
    "slotDesktopFilterChanged(QString)\0"
    "state\0slotDesktopFilterCb(int)\0"
    "slotShadowViewSess()\0slotShadowSess()\0"
    "slotReconnectSession()\0slotStartBroker()\0"
    "slotStartNewBrokerSession()\0"
    "setX2goconfig(QString)\0QString\0"
};

void ONMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ONMainWindow *_t = static_cast<ONMainWindow *>(_o);
        switch (_id) {
        case 0: _t->slotAppDialog(); break;
        case 1: _t->slotShowPassForm(); break;
        case 2: _t->displayUsers(); break;
        case 3: _t->slotAppMenuTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->slotPassChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->slotResize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 6: _t->slotUnameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->slotPassEnter(); break;
        case 8: _t->slotChangeBrokerPass(); break;
        case 9: _t->slotTestConnection(); break;
        case 10: _t->slotCheckPortableDir(); break;
        case 11: _t->readUsers(); break;
        case 12: _t->slotSelectedFromList((*reinterpret_cast< UserButton*(*)>(_a[1]))); break;
        case 13: _t->slotUnameEntered(); break;
        case 14: _t->slotClosePass(); break;
        case 15: _t->slotReadSessions(); break;
        case 16: _t->slotManage(); break;
        case 17: _t->displayToolBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->showSessionStatus(); break;
        case 19: _t->slotSshConnectionError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 20: _t->slotSshServerAuthError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< SshMasterConnection*(*)>(_a[3]))); break;
        case 21: _t->slotSshServerAuthPassphrase((*reinterpret_cast< SshMasterConnection*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 22: _t->slotSshInteractionStart((*reinterpret_cast< SshMasterConnection*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 23: _t->slotSshInteractionUpdate((*reinterpret_cast< SshMasterConnection*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 24: _t->slotSshInteractionFinish((*reinterpret_cast< SshMasterConnection*(*)>(_a[1]))); break;
        case 25: _t->slotSshServerAuthChallengeResponse((*reinterpret_cast< SshMasterConnection*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 26: _t->slotCloseInteractionDialog(); break;
        case 27: _t->slotSshUserAuthError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->slotSshConnectionOk(); break;
        case 29: _t->slotServSshConnectionOk((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 30: _t->slotChangeKbdLayout((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->slotSyncX(); break;
        case 32: _t->slotShutdownThinClient(); break;
        case 33: _t->slotReadApplications((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 34: _t->slotConfig(); break;
        case 35: _t->slotNewSession(); break;
        case 36: _t->slotEmbedControlAction(); break;
        case 37: _t->slotDetachProxyWindow(); break;
        case 38: _t->slotActivateWindow(); break;
        case 39: _t->setFocus(); break;
        case 40: _t->slotShowPAMSGDialog((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 41: _t->slotSnameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 42: _t->slotSelectedFromList((*reinterpret_cast< SessionButton*(*)>(_a[1]))); break;
        case 43: _t->slotSessEnter(); break;
        case 44: _t->slotCloseSelectDlg(); break;
        case 45: _t->slotActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 46: _t->slotResumeSess(); break;
        case 47: _t->slotSuspendSess(); break;
        case 48: _t->slotTermSessFromSt(); break;
        case 49: _t->slotSuspendSessFromSt(); break;
        case 50: _t->slotTermSess(); break;
        case 51: _t->slotNewSess(); break;
        case 52: _t->slotGetBrokerAuth(); break;
        case 53: _t->slotGetBrokerSession(); break;
        case 54: _t->slotCmdMessage((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 55: _t->slotListSessions((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 56: _t->slotRetSuspSess((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 57: _t->slotRetTermSess((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 58: _t->slotRetResumeSess((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 59: _t->slotTunnelFailed((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 60: _t->slotFsTunnelFailed((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 61: _t->slotSndTunnelFailed((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 62: _t->slotCopyKey((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 63: _t->slotTunnelOk((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 64: _t->slotTunnelOk(); break;
        case 65: _t->slotFsTunnelOk((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 66: _t->slotProxyError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 67: _t->slotProxyFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 68: _t->slotProxyStderr(); break;
        case 69: _t->slotProxyStdout(); break;
        case 70: _t->slotResumeDoubleClick((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 71: _t->slotShowAdvancedStat(); break;
        case 72: _t->slotRestartProxy(); break;
        case 73: _t->slotTestSessionStatus(); break;
        case 74: _t->SlotRunCommand((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 75: _t->slotRetRunCommand((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 76: _t->slotGetServers((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 77: _t->slotListAllSessions((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 78: _t->slotRetExportDir((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 79: _t->slotResize(); break;
        case 80: _t->slotExportDirectory(); break;
        case 81: _t->slotExportTimer(); break;
        case 82: _t->slotAboutQt(); break;
        case 83: _t->slotAbout(); break;
        case 84: _t->slotSupport(); break;
        case 85: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 86: _t->trayMessageClicked(); break;
        case 87: _t->trayQuit(); break;
        case 88: _t->trayIconInit(); break;
        case 89: _t->slotSetProxyWinFullscreen(); break;
        case 90: _t->slotCheckPrintSpool(); break;
        case 91: _t->slotRereadUsers(); break;
        case 92: _t->slotExtTimer(); break;
        case 93: _t->slotStartPGPAuth(); break;
        case 94: _t->slotScDaemonStdOut(); break;
        case 95: _t->slotScDaemonStdErr(); break;
        case 96: _t->slotGpgFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 97: _t->slotScDaemonFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 98: _t->slotScDaemonError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 99: _t->slotGpgError(); break;
        case 100: _t->slotCheckScDaemon(); break;
        case 101: _t->slotGpgAgentFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 102: _t->slotCheckAgentProcess(); break;
        case 103: _t->slotExecXmodmap(); break;
        case 104: _t->slotCreateSessionIcon(); break;
        case 105: _t->slotFindProxyWin(); break;
        case 106: _t->slotConfigXinerama(); break;
        case 107: _t->slotXineramaConfigured(); break;
        case 108: _t->slotAttachProxyWindow(); break;
        case 109: _t->slotEmbedIntoParentWindow(); break;
        case 110: _t->slotEmbedWindow(); break;
        case 111: _t->slotPCookieReady((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 112: _t->slotEmbedToolBar(); break;
        case 113: _t->slotEmbedToolBarToolTip(); break;
        case 114: _t->slotHideEmbedToolBarToolTip(); break;
        case 115: _t->slotDesktopFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 116: _t->slotDesktopFilterCb((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 117: _t->slotShadowViewSess(); break;
        case 118: _t->slotShadowSess(); break;
        case 119: _t->slotReconnectSession(); break;
        case 120: _t->slotStartBroker(); break;
        case 121: _t->slotStartNewBrokerSession(); break;
        case 122: _t->setX2goconfig((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ONMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ONMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ONMainWindow,
      qt_meta_data_ONMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ONMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ONMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ONMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ONMainWindow))
        return static_cast<void*>(const_cast< ONMainWindow*>(this));
    if (!strcmp(_clname, "QtNPBindable"))
        return static_cast< QtNPBindable*>(const_cast< ONMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ONMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 123)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 123;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = x2goconfig(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setX2goconfig(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
