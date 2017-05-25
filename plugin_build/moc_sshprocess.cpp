/****************************************************************************
** Meta object code from reading C++ file 'sshprocess.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/sshprocess.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sshprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SshProcess[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   12,   11,   11, 0x05,
      76,   66,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      93,   11,   11,   11, 0x08,
     131,  118,   11,   11, 0x08,
     166,  118,   11,   11, 0x08,
     231,  201,   11,   11, 0x08,
     283,  270,   11,   11, 0x08,
     330,  322,   11,   11, 0x08,
     377,  363,   11,   11, 0x08,
     422,  322,   11,   11, 0x08,
     446,  201,   11,   11, 0x08,
     507,  487,   11,   11, 0x08,
     553,   11,   11,   11, 0x08,
     573,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SshProcess[] = {
    "SshProcess\0\0result,output,processId\0"
    "sshFinished(bool,QString,int)\0processId\0"
    "sshTunnelOk(int)\0slotCheckNewConnection()\0"
    "creator,data\0slotStdErr(SshProcess*,QByteArray)\0"
    "slotStdOut(SshProcess*,QByteArray)\0"
    "creator,message,sshSessionErr\0"
    "slotIOerr(SshProcess*,QString,QString)\0"
    "creator,uuid\0slotChannelClosed(SshProcess*,QString)\0"
    "creator\0slotReverseTunnelOk(SshProcess*)\0"
    "creator,error\0"
    "slotReverseTunnelFailed(SshProcess*,QString)\0"
    "slotCopyOk(SshProcess*)\0"
    "slotCopyErr(SshProcess*,QString,QString)\0"
    "exitCode,exitStatus\0"
    "slotSshProcFinished(int,QProcess::ExitStatus)\0"
    "slotSshProcStdErr()\0slotSshProcStdOut()\0"
};

void SshProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SshProcess *_t = static_cast<SshProcess *>(_o);
        switch (_id) {
        case 0: _t->sshFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->sshTunnelOk((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotCheckNewConnection(); break;
        case 3: _t->slotStdErr((*reinterpret_cast< SshProcess*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 4: _t->slotStdOut((*reinterpret_cast< SshProcess*(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 5: _t->slotIOerr((*reinterpret_cast< SshProcess*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->slotChannelClosed((*reinterpret_cast< SshProcess*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->slotReverseTunnelOk((*reinterpret_cast< SshProcess*(*)>(_a[1]))); break;
        case 8: _t->slotReverseTunnelFailed((*reinterpret_cast< SshProcess*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->slotCopyOk((*reinterpret_cast< SshProcess*(*)>(_a[1]))); break;
        case 10: _t->slotCopyErr((*reinterpret_cast< SshProcess*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 11: _t->slotSshProcFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 12: _t->slotSshProcStdErr(); break;
        case 13: _t->slotSshProcStdOut(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SshProcess::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SshProcess::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SshProcess,
      qt_meta_data_SshProcess, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SshProcess::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SshProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SshProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SshProcess))
        return static_cast<void*>(const_cast< SshProcess*>(this));
    return QObject::qt_metacast(_clname);
}

int SshProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SshProcess::sshFinished(bool _t1, QString _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SshProcess::sshTunnelOk(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
