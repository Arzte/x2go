/****************************************************************************
** Meta object code from reading C++ file 'sessionbutton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/sessionbutton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sessionbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SessionButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      47,   14,   14,   14, 0x05,
      75,   14,   14,   14, 0x05,
     105,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     115,   14,   14,   14, 0x08,
     129,   14,   14,   14, 0x08,
     140,   14,   14,   14, 0x08,
     168,  160,   14,   14, 0x08,
     199,  193,   14,   14, 0x08,
     225,   14,   14,   14, 0x08,
     238,   14,   14,   14, 0x08,
     253,   14,   14,   14, 0x08,
     268,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SessionButton[] = {
    "SessionButton\0\0sessionSelected(SessionButton*)\0"
    "signal_edit(SessionButton*)\0"
    "signal_remove(SessionButton*)\0clicked()\0"
    "slotClicked()\0slotEdit()\0slot_soundClicked()\0"
    "command\0slot_cmd_change(QString)\0new_g\0"
    "slot_geom_change(QString)\0slotRemove()\0"
    "slotMenuHide()\0slotShowMenu()\0"
    "slotCreateSessionIcon()\0"
};

void SessionButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SessionButton *_t = static_cast<SessionButton *>(_o);
        switch (_id) {
        case 0: _t->sessionSelected((*reinterpret_cast< SessionButton*(*)>(_a[1]))); break;
        case 1: _t->signal_edit((*reinterpret_cast< SessionButton*(*)>(_a[1]))); break;
        case 2: _t->signal_remove((*reinterpret_cast< SessionButton*(*)>(_a[1]))); break;
        case 3: _t->clicked(); break;
        case 4: _t->slotClicked(); break;
        case 5: _t->slotEdit(); break;
        case 6: _t->slot_soundClicked(); break;
        case 7: _t->slot_cmd_change((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->slot_geom_change((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->slotRemove(); break;
        case 10: _t->slotMenuHide(); break;
        case 11: _t->slotShowMenu(); break;
        case 12: _t->slotCreateSessionIcon(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SessionButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SessionButton::staticMetaObject = {
    { &SVGFrame::staticMetaObject, qt_meta_stringdata_SessionButton,
      qt_meta_data_SessionButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SessionButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SessionButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SessionButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SessionButton))
        return static_cast<void*>(const_cast< SessionButton*>(this));
    return SVGFrame::qt_metacast(_clname);
}

int SessionButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SVGFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void SessionButton::sessionSelected(SessionButton * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SessionButton::signal_edit(SessionButton * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SessionButton::signal_remove(SessionButton * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SessionButton::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
