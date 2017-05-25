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
       0,    0, // classinfo
     122,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      30,   13,   13,   13, 0x08,
      49,   13,   13,   13, 0x08,
      71,   64,   13,   13, 0x08,
     109,  102,   13,   13, 0x08,
     137,  134,   13,   13, 0x08,
     160,  155,   13,   13, 0x08,
     186,   13,   13,   13, 0x08,
     202,   13,   13,   13, 0x08,
     225,   13,   13,   13, 0x08,
     246,   13,   13,   13, 0x08,
     269,   13,   13,   13, 0x08,
     286,  281,   13,   13, 0x08,
     320,   13,   13,   13, 0x08,
     339,   13,   13,   13, 0x08,
     355,   13,   13,   13, 0x08,
     374,   13,   13,   13, 0x08,
     387,   13,   13,   13, 0x08,
     408,   13,   13,   13, 0x08,
     453,  428,   13,   13, 0x08,
     521,  493,   13,   13, 0x08,
     606,  578,   13,   13, 0x08,
     679,  661,   13,   13, 0x08,
     751,  733,   13,   13, 0x08,
     817,  806,   13,   13, 0x08,
     885,  864,   13,   13, 0x08,
     950,   13,   13,   13, 0x08,
     985,  979,   13,   13, 0x08,
    1015,   13,   13,   13, 0x08,
    1044, 1037,   13,   13, 0x08,
    1084, 1077,   13,   13, 0x08,
    1113,   13,   13,   13, 0x08,
    1125,   13,   13,   13, 0x08,
    1168, 1150,   13,   13, 0x08,
    1207,   13,   13,   13, 0x0a,
    1220,   13,   13,   13, 0x0a,
    1237,   13,   13,   13, 0x0a,
    1262,   13,   13,   13, 0x0a,
    1286,   13,   13,   13, 0x0a,
    1307,   13,   13,   13, 0x0a,
    1350, 1318,   13,   13, 0x08,
    1397,   13,   13,   13, 0x08,
    1431, 1423,   13,   13, 0x08,
    1468,   13,   13,   13, 0x08,
    1484,   13,   13,   13, 0x08,
    1511, 1505,   13,   13, 0x08,
    1538,   13,   13,   13, 0x08,
    1555,   13,   13,   13, 0x08,
    1573,   13,   13,   13, 0x08,
    1594,   13,   13,   13, 0x08,
    1618,   13,   13,   13, 0x08,
    1633,   13,   13,   13, 0x08,
    1647,   13,   13,   13, 0x08,
    1667,   13,   13,   13, 0x08,
    1705, 1690,   13,   13, 0x08,
    1738, 1690,   13,   13, 0x08,
    1788, 1773,   13,   13, 0x08,
    1822, 1690,   13,   13, 0x08,
    1856, 1690,   13,   13, 0x08,
    1892, 1690,   13,   13, 0x08,
    1927, 1690,   13,   13, 0x08,
    1964, 1690,   13,   13, 0x08,
    2002, 1690,   13,   13, 0x08,
    2032,   13,   13,   13, 0x08,
    2050,   13,   13,   13, 0x28,
    2065,   13,   13,   13, 0x08,
    2089, 2085,   13,   13, 0x08,
    2138, 2128,   13,   13, 0x08,
    2182,   13,   13,   13, 0x08,
    2200,   13,   13,   13, 0x08,
    2218,   13,   13,   13, 0x08,
    2253,   13,   13,   13, 0x08,
    2276,   13,   13,   13, 0x08,
    2295,   13,   13,   13, 0x08,
    2328, 2319,   13,   13, 0x08,
    2361, 1690,   13,   13, 0x08,
    2397, 1690,   13,   13, 0x08,
    2430, 1690,   13,   13, 0x08,
    2468, 1690,   13,   13, 0x08,
    2503,   13,   13,   13, 0x08,
    2516,   13,   13,   13, 0x08,
    2538,   13,   13,   13, 0x08,
    2556,   13,   13,   13, 0x08,
    2570,   13,   13,   13, 0x08,
    2582,   13,   13,   13, 0x08,
    2603, 2596,   13,   13, 0x08,
    2656,   13,   13,   13, 0x08,
    2677,   13,   13,   13, 0x08,
    2688,   13,   13,   13, 0x08,
    2703,   13,   13,   13, 0x08,
    2731,   13,   13,   13, 0x08,
    2753,   13,   13,   13, 0x08,
    2771,   13,   13,   13, 0x08,
    2786,   13,   13,   13, 0x08,
    2805,   13,   13,   13, 0x08,
    2826,   13,   13,   13, 0x08,
    2867, 2847,   13,   13, 0x08,
    2909, 2847,   13,   13, 0x08,
    2956,  979,   13,   13, 0x08,
    2998,   13,   13,   13, 0x08,
    3013,   13,   13,   13, 0x08,
    3033, 2847,   13,   13, 0x08,
    3080,   13,   13,   13, 0x08,
    3104,   13,   13,   13, 0x08,
    3122,   13,   13,   13, 0x08,
    3146,   13,   13,   13, 0x08,
    3165,   13,   13,   13, 0x08,
    3186,   13,   13,   13, 0x08,
    3211,   13,   13,   13, 0x08,
    3235,   13,   13,   13, 0x08,
    3263,   13,   13,   13, 0x08,
    3300, 3281,   13,   13, 0x08,
    3335,   13,   13,   13, 0x08,
    3354,   13,   13,   13, 0x08,
    3380,   13,   13,   13, 0x08,
    3410,  155,   13,   13, 0x08,
    3450, 3444,   13,   13, 0x08,
    3475,   13,   13,   13, 0x08,
    3496,   13,   13,   13, 0x08,
    3513,   13,   13,   13, 0x08,
    3536,   13,   13,   13, 0x08,
    3554,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ONMainWindow[] = {
    "ONMainWindow\0\0slotAppDialog()\0"
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
    return QMainWindow::qt_metacast(_clname);
}

int ONMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 122)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 122;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
