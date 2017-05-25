/****************************************************************************
** Meta object code from reading C++ file 'sessionexplorer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/sessionexplorer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sessionexplorer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SessionExplorer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   17,   16,   16, 0x0a,
      53,   16,   16,   16, 0x0a,
      78,   17,   16,   16, 0x0a,
     116,   17,   16,   16, 0x0a,
     144,   17,   16,   16, 0x08,
     178,   16,   16,   16, 0x08,
     211,  204,  192,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SessionExplorer[] = {
    "SessionExplorer\0\0bt\0"
    "slotDeleteButton(SessionButton*)\0"
    "slotEdit(SessionButton*)\0"
    "slotCreateDesktopIcon(SessionButton*)\0"
    "exportsEdit(SessionButton*)\0"
    "slotFolderSelected(FolderButton*)\0"
    "slotLevelUp()\0QStringList\0folder\0"
    "getFolderChildren(FolderButton*)\0"
};

void SessionExplorer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SessionExplorer *_t = static_cast<SessionExplorer *>(_o);
        switch (_id) {
        case 0: _t->slotDeleteButton((*reinterpret_cast< SessionButton*(*)>(_a[1]))); break;
        case 1: _t->slotEdit((*reinterpret_cast< SessionButton*(*)>(_a[1]))); break;
        case 2: _t->slotCreateDesktopIcon((*reinterpret_cast< SessionButton*(*)>(_a[1]))); break;
        case 3: _t->exportsEdit((*reinterpret_cast< SessionButton*(*)>(_a[1]))); break;
        case 4: _t->slotFolderSelected((*reinterpret_cast< FolderButton*(*)>(_a[1]))); break;
        case 5: _t->slotLevelUp(); break;
        case 6: { QStringList _r = _t->getFolderChildren((*reinterpret_cast< FolderButton*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SessionExplorer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SessionExplorer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SessionExplorer,
      qt_meta_data_SessionExplorer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SessionExplorer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SessionExplorer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SessionExplorer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SessionExplorer))
        return static_cast<void*>(const_cast< SessionExplorer*>(this));
    return QObject::qt_metacast(_clname);
}

int SessionExplorer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
