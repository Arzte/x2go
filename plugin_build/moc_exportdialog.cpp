/****************************************************************************
** Meta object code from reading C++ file 'exportdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/exportdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'exportdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExportDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x08,
      48,   13,   13,   13, 0x08,
      58,   13,   13,   13, 0x08,
      70,   14,   13,   13, 0x08,
      97,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExportDialog[] = {
    "ExportDialog\0\0index\0slot_activated(QModelIndex)\0"
    "slotNew()\0slot_edit()\0slot_dclicked(QModelIndex)\0"
    "slot_accept()\0"
};

void ExportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExportDialog *_t = static_cast<ExportDialog *>(_o);
        switch (_id) {
        case 0: _t->slot_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->slotNew(); break;
        case 2: _t->slot_edit(); break;
        case 3: _t->slot_dclicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->slot_accept(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ExportDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExportDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ExportDialog,
      qt_meta_data_ExportDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExportDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExportDialog))
        return static_cast<void*>(const_cast< ExportDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ExportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
