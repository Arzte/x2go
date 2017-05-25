/****************************************************************************
** Meta object code from reading C++ file 'sshmasterconnection.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/sshmasterconnection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sshmasterconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SshMasterConnection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   21,   20,   20, 0x05,
      64,   21,   20,   20, 0x05,
     125,   95,   20,   20, 0x05,
     160,   95,   20,   20, 0x05,
     204,  197,   20,   20, 0x05,
     236,  224,   20,   20, 0x05,
     271,  197,   20,   20, 0x05,
     313,  300,   20,   20, 0x05,
     379,  354,   20,   20, 0x05,
     438,  412,   20,   20, 0x05,
     488,   20,   20,   20, 0x05,
     514,  508,   20,   20, 0x05,
     542,  537,   20,   20, 0x05,
     582,  564,   20,   20, 0x05,
     635,  624,   20,   20, 0x05,
     695,  687,   20,   20, 0x05,
     742,   20,   20,   20, 0x05,
     790,  782,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
     841,  838,   20,   20, 0x08,
     903,   20,   20,   20, 0x08,
     935,   20,   20,   20, 0x08,
     972,  970,   20,   20, 0x08,
    1017,   20,   20,   20, 0x08,
    1044,   20,   20,   20, 0x08,
    1085, 1070,   20,   20, 0x08,
    1146, 1128,   20,   20, 0x08,
    1223, 1205,   20,   20, 0x08,
    1294, 1283,   20,   20, 0x08,
    1351, 1346,   20,   20, 0x0a,
    1381,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SshMasterConnection[] = {
    "SshMasterConnection\0\0caller,data\0"
    "stdErr(SshProcess*,QByteArray)\0"
    "stdOut(SshProcess*,QByteArray)\0"
    "caller,error,lastSessionError\0"
    "ioErr(SshProcess*,QString,QString)\0"
    "copyErr(SshProcess*,QString,QString)\0"
    "caller\0copyOk(SshProcess*)\0caller,uuid\0"
    "channelClosed(SshProcess*,QString)\0"
    "reverseTunnelOk(SshProcess*)\0caller,error\0"
    "reverseTunnelFailed(SshProcess*,QString)\0"
    "message,lastSessionError\0"
    "connectionError(QString,QString)\0"
    "errCode,lastSessionError,\0"
    "serverAuthError(int,QString,SshMasterConnection*)\0"
    "serverAuthAborted()\0error\0"
    "userAuthError(QString)\0host\0"
    "connectionOk(QString)\0,verificationCode\0"
    "needPassPhrase(SshMasterConnection*,bool)\0"
    ",Challenge\0"
    "needChallengeResponse(SshMasterConnection*,QString)\0"
    ",prompt\0startInteraction(SshMasterConnection*,QString)\0"
    "finishInteraction(SshMasterConnection*)\0"
    ",output\0updateInteraction(SshMasterConnection*,QString)\0"
    ",,\0slotSshProxyServerAuthError(int,QString,SshMasterConnection*)\0"
    "slotSshProxyServerAuthAborted()\0"
    "slotSshProxyUserAuthError(QString)\0,\0"
    "slotSshProxyConnectionError(QString,QString)\0"
    "slotSshProxyConnectionOk()\0"
    "slotSshProxyTunnelOk(int)\0result,output,\0"
    "slotSshProxyTunnelFailed(bool,QString,int)\0"
    "connection,prompt\0"
    "slotSshProxyInteractionStart(SshMasterConnection*,QString)\0"
    "connection,output\0"
    "slotSshProxyInteractionUpdate(SshMasterConnection*,QString)\0"
    "connection\0"
    "slotSshProxyInteractionFinish(SshMasterConnection*)\0"
    "text\0interactionTextEnter(QString)\0"
    "interactionInterruptSlot()\0"
};

void SshMasterConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SshMasterConnection *_t = static_cast<SshMasterConnection *>(_o);
        switch (_id) {
        case 0: _t->stdErr((*reinterpret_cast< SshProcess*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 1: _t->stdOut((*reinterpret_cast< SshProcess*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 2: _t->ioErr((*reinterpret_cast< SshProcess*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->copyErr((*reinterpret_cast< SshProcess*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: _t->copyOk((*reinterpret_cast< SshProcess*(*)>(_a[1]))); break;
        case 5: _t->channelClosed((*reinterpret_cast< SshProcess*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->reverseTunnelOk((*reinterpret_cast< SshProcess*(*)>(_a[1]))); break;
        case 7: _t->reverseTunnelFailed((*reinterpret_cast< SshProcess*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->connectionError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->serverAuthError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< SshMasterConnection*(*)>(_a[3]))); break;
        case 10: _t->serverAuthAborted(); break;
        case 11: _t->userAuthError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->connectionOk((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->needPassPhrase((*reinterpret_cast< SshMasterConnection*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->needChallengeResponse((*reinterpret_cast< SshMasterConnection*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 15: _t->startInteraction((*reinterpret_cast< SshMasterConnection*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->finishInteraction((*reinterpret_cast< SshMasterConnection*(*)>(_a[1]))); break;
        case 17: _t->updateInteraction((*reinterpret_cast< SshMasterConnection*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 18: _t->slotSshProxyServerAuthError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< SshMasterConnection*(*)>(_a[3]))); break;
        case 19: _t->slotSshProxyServerAuthAborted(); break;
        case 20: _t->slotSshProxyUserAuthError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->slotSshProxyConnectionError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 22: _t->slotSshProxyConnectionOk(); break;
        case 23: _t->slotSshProxyTunnelOk((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->slotSshProxyTunnelFailed((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 25: _t->slotSshProxyInteractionStart((*reinterpret_cast< SshMasterConnection*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 26: _t->slotSshProxyInteractionUpdate((*reinterpret_cast< SshMasterConnection*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 27: _t->slotSshProxyInteractionFinish((*reinterpret_cast< SshMasterConnection*(*)>(_a[1]))); break;
        case 28: _t->interactionTextEnter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->interactionInterruptSlot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SshMasterConnection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SshMasterConnection::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_SshMasterConnection,
      qt_meta_data_SshMasterConnection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SshMasterConnection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SshMasterConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SshMasterConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SshMasterConnection))
        return static_cast<void*>(const_cast< SshMasterConnection*>(this));
    return QThread::qt_metacast(_clname);
}

int SshMasterConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void SshMasterConnection::stdErr(SshProcess * _t1, QByteArray _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SshMasterConnection::stdOut(SshProcess * _t1, QByteArray _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SshMasterConnection::ioErr(SshProcess * _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SshMasterConnection::copyErr(SshProcess * _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SshMasterConnection::copyOk(SshProcess * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SshMasterConnection::channelClosed(SshProcess * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SshMasterConnection::reverseTunnelOk(SshProcess * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SshMasterConnection::reverseTunnelFailed(SshProcess * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SshMasterConnection::connectionError(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SshMasterConnection::serverAuthError(int _t1, QString _t2, SshMasterConnection * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void SshMasterConnection::serverAuthAborted()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void SshMasterConnection::userAuthError(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void SshMasterConnection::connectionOk(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void SshMasterConnection::needPassPhrase(SshMasterConnection * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void SshMasterConnection::needChallengeResponse(SshMasterConnection * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void SshMasterConnection::startInteraction(SshMasterConnection * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void SshMasterConnection::finishInteraction(SshMasterConnection * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void SshMasterConnection::updateInteraction(SshMasterConnection * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_END_MOC_NAMESPACE
