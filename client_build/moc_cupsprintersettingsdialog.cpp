/****************************************************************************
** Meta object code from reading C++ file 'cupsprintersettingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cupsprintersettingsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cupsprintersettingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CUPSPrinterSettingsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      44,   27,   26,   26, 0x08,
      99,   27,   26,   26, 0x08,
     153,   26,   26,   26, 0x08,
     177,  173,   26,   26, 0x08,
     199,  173,   26,   26, 0x08,
     221,  173,   26,   26, 0x08,
     243,   26,   26,   26, 0x08,
     263,   26,   26,   26, 0x08,
     279,   26,   26,   26, 0x08,
     302,   26,   26,   26, 0x08,
     321,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CUPSPrinterSettingsDialog[] = {
    "CUPSPrinterSettingsDialog\0\0current,previous\0"
    "slot_optionSelected(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "slot_valueSelected(QTreeWidgetItem*,QTreeWidgetItem*)\0"
    "slot_reloadValues()\0ind\0slot_changePSize(int)\0"
    "slot_changePType(int)\0slot_changeISlot(int)\0"
    "slot_changeDuplex()\0setGeneralTab()\0"
    "slot_restoreDefaults()\0slot_saveOptions()\0"
    "slot_ok()\0"
};

void CUPSPrinterSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CUPSPrinterSettingsDialog *_t = static_cast<CUPSPrinterSettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->slot_optionSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->slot_valueSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->slot_reloadValues(); break;
        case 3: _t->slot_changePSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slot_changePType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slot_changeISlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slot_changeDuplex(); break;
        case 7: _t->setGeneralTab(); break;
        case 8: _t->slot_restoreDefaults(); break;
        case 9: _t->slot_saveOptions(); break;
        case 10: _t->slot_ok(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CUPSPrinterSettingsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CUPSPrinterSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CUPSPrinterSettingsDialog,
      qt_meta_data_CUPSPrinterSettingsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CUPSPrinterSettingsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CUPSPrinterSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CUPSPrinterSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CUPSPrinterSettingsDialog))
        return static_cast<void*>(const_cast< CUPSPrinterSettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CUPSPrinterSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
