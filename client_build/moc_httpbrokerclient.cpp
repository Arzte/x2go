/****************************************************************************
** Meta object code from reading C++ file 'httpbrokerclient.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/httpbrokerclient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httpbrokerclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HttpBrokerClient[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      38,   17,   17,   17, 0x05,
      55,   17,   17,   17, 0x05,
      68,   17,   17,   17, 0x05,
      85,   17,   17,   17, 0x05,
     103,   17,   17,   17, 0x05,
     130,  128,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     160,  154,   17,   17, 0x08,
     212,  196,   17,   17, 0x08,
     270,  267,  259,   17, 0x08,
     317,  292,   17,   17, 0x08,
     385,  357,   17,   17, 0x08,
     470,  442,   17,   17, 0x08,
     536,  525,   17,   17, 0x28,
     592,  586,   17,   17, 0x08,
     622,   17,   17,   17, 0x08,
     663,  644,   17,   17, 0x08,
     698,  644,   17,   17, 0x08,
     734,  644,   17,   17, 0x08,
     768,  644,   17,   17, 0x08,
     835,  805,   17,   17, 0x08,
     877,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_HttpBrokerClient[] = {
    "HttpBrokerClient\0\0haveSshKey(QString)\0"
    "fatalHttpError()\0authFailed()\0"
    "sessionsLoaded()\0sessionSelected()\0"
    "passwordChanged(QString)\0,\0"
    "connectionTime(int,int)\0reply\0"
    "slotRequestFinished(QNetworkReply*)\0"
    "netReply,errors\0"
    "slotSslErrors(QNetworkReply*,QList<QSslError>)\0"
    "QString\0ba\0getHexVal(QByteArray)\0"
    "message,lastSessionError\0"
    "slotSshConnectionError(QString,QString)\0"
    "error,sshMessage,connection\0"
    "slotSshServerAuthError(int,QString,SshMasterConnection*)\0"
    "connection,verificationCode\0"
    "slotSshServerAuthPassphrase(SshMasterConnection*,bool)\0"
    "connection\0slotSshServerAuthPassphrase(SshMasterConnection*)\0"
    "error\0slotSshUserAuthError(QString)\0"
    "slotSshConnectionOk()\0success,answer,pid\0"
    "slotListSessions(bool,QString,int)\0"
    "slotSelectSession(bool,QString,int)\0"
    "slotPassChanged(bool,QString,int)\0"
    "slotConnectionTest(bool,QString,int)\0"
    "caller,error,lastSessionError\0"
    "slotSshIoErr(SshProcess*,QString,QString)\0"
    "getUserSessions()\0"
};

void HttpBrokerClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HttpBrokerClient *_t = static_cast<HttpBrokerClient *>(_o);
        switch (_id) {
        case 0: _t->haveSshKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->fatalHttpError(); break;
        case 2: _t->authFailed(); break;
        case 3: _t->sessionsLoaded(); break;
        case 4: _t->sessionSelected(); break;
        case 5: _t->passwordChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->connectionTime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->slotRequestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->slotSslErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        case 9: { QString _r = _t->getHexVal((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: _t->slotSshConnectionError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->slotSshServerAuthError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< SshMasterConnection*(*)>(_a[3]))); break;
        case 12: _t->slotSshServerAuthPassphrase((*reinterpret_cast< SshMasterConnection*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->slotSshServerAuthPassphrase((*reinterpret_cast< SshMasterConnection*(*)>(_a[1]))); break;
        case 14: _t->slotSshUserAuthError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->slotSshConnectionOk(); break;
        case 16: _t->slotListSessions((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 17: _t->slotSelectSession((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 18: _t->slotPassChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 19: _t->slotConnectionTest((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 20: _t->slotSshIoErr((*reinterpret_cast< SshProcess*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 21: _t->getUserSessions(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData HttpBrokerClient::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HttpBrokerClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HttpBrokerClient,
      qt_meta_data_HttpBrokerClient, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HttpBrokerClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HttpBrokerClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HttpBrokerClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HttpBrokerClient))
        return static_cast<void*>(const_cast< HttpBrokerClient*>(this));
    return QObject::qt_metacast(_clname);
}

int HttpBrokerClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void HttpBrokerClient::haveSshKey(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HttpBrokerClient::fatalHttpError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void HttpBrokerClient::authFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void HttpBrokerClient::sessionsLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void HttpBrokerClient::sessionSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void HttpBrokerClient::passwordChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void HttpBrokerClient::connectionTime(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
