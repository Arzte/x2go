/****************************************************************************
** Meta object code from reading C++ file 'sessionmanagedialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/sessionmanagedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sessionmanagedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SessionManageDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   21,   20,   20, 0x08,
      72,   67,   20,   20, 0x28,
     111,  105,   20,   20, 0x08,
     181,   20,   20,   20, 0x08,
     191,   20,   20,   20, 0x08,
     203,   20,   20,   20, 0x08,
     228,   20,   20,   20, 0x08,
     242,  105,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SessionManageDialog[] = {
    "SessionManageDialog\0\0item,col\0"
    "slot_endisable(QTreeWidgetItem*,int)\0"
    "item\0slot_endisable(QTreeWidgetItem*)\0"
    "item,\0"
    "slot_endisable_ItemChanged_wrapper(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "slotNew()\0slot_edit()\0slot_createSessionIcon()\0"
    "slot_delete()\0slot_dclicked(QTreeWidgetItem*,int)\0"
};

void SessionManageDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SessionManageDialog *_t = static_cast<SessionManageDialog *>(_o);
        switch (_id) {
        case 0: _t->slot_endisable((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->slot_endisable((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->slot_endisable_ItemChanged_wrapper((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 3: _t->slotNew(); break;
        case 4: _t->slot_edit(); break;
        case 5: _t->slot_createSessionIcon(); break;
        case 6: _t->slot_delete(); break;
        case 7: _t->slot_dclicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SessionManageDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SessionManageDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SessionManageDialog,
      qt_meta_data_SessionManageDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SessionManageDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SessionManageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SessionManageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SessionManageDialog))
        return static_cast<void*>(const_cast< SessionManageDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SessionManageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
