/****************************************************************************
** Meta object code from reading C++ file 'pulsemanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/pulsemanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pulsemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PulseManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      75,   44,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     125,   13,   13,   13, 0x0a,
     133,   13,   13,   13, 0x0a,
     143,   13,   13,   13, 0x0a,
     164,  154,   13,   13, 0x08,
     192,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PulseManager[] = {
    "PulseManager\0\0sig_pulse_server_terminated()\0"
    "error,main_text,inf_text,modal\0"
    "sig_pulse_user_warning(bool,QString,QString,bool)\0"
    "start()\0restart()\0shutdown()\0exit_code\0"
    "slot_on_pulse_finished(int)\0"
    "slot_play_startup_sound()\0"
};

void PulseManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PulseManager *_t = static_cast<PulseManager *>(_o);
        switch (_id) {
        case 0: _t->sig_pulse_server_terminated(); break;
        case 1: _t->sig_pulse_user_warning((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->start(); break;
        case 3: _t->restart(); break;
        case 4: _t->shutdown(); break;
        case 5: _t->slot_on_pulse_finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slot_play_startup_sound(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PulseManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PulseManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PulseManager,
      qt_meta_data_PulseManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PulseManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PulseManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PulseManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PulseManager))
        return static_cast<void*>(const_cast< PulseManager*>(this));
    return QObject::qt_metacast(_clname);
}

int PulseManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PulseManager::sig_pulse_server_terminated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PulseManager::sig_pulse_user_warning(bool _t1, const QString & _t2, const QString & _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
