/****************************************************************************
** Meta object code from reading C++ file 'folderexplorer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/folderexplorer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folderexplorer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FolderExplorer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   16,   15,   15, 0x08,
      46,   42,   15,   15, 0x08,
      85,   15,   15,   15, 0x08,
     101,   15,   15,   15, 0x08,
     118,   15,   15,   15, 0x08,
     135,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FolderExplorer[] = {
    "FolderExplorer\0\0p\0slotContextMenu(QPoint)\0"
    "it,\0slotItemSelected(QTreeWidgetItem*,int)\0"
    "slotNewFolder()\0slotChangeName()\0"
    "slotChangeIcon()\0slotDeleteFolder()\0"
};

void FolderExplorer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FolderExplorer *_t = static_cast<FolderExplorer *>(_o);
        switch (_id) {
        case 0: _t->slotContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->slotItemSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->slotNewFolder(); break;
        case 3: _t->slotChangeName(); break;
        case 4: _t->slotChangeIcon(); break;
        case 5: _t->slotDeleteFolder(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FolderExplorer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FolderExplorer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FolderExplorer,
      qt_meta_data_FolderExplorer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FolderExplorer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FolderExplorer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FolderExplorer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FolderExplorer))
        return static_cast<void*>(const_cast< FolderExplorer*>(this));
    if (!strcmp(_clname, "Ui_FolderExplorer"))
        return static_cast< Ui_FolderExplorer*>(const_cast< FolderExplorer*>(this));
    return QDialog::qt_metacast(_clname);
}

int FolderExplorer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
