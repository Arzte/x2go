/****************************************************************************
** Meta object code from reading C++ file 'printprocess.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/printprocess.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrintProcess[] = {

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
      34,   14,   13,   13, 0x08,
      87,   81,   13,   13, 0x08,
     128,   81,   13,   13, 0x08,
     163,   13,   13,   13, 0x08,
     173,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PrintProcess[] = {
    "PrintProcess\0\0exitCode,exitStatus\0"
    "slot_processFinished(int,QProcess::ExitStatus)\0"
    "error\0slot_pdf2psError(QProcess::ProcessError)\0"
    "slot_error(QProcess::ProcessError)\0"
    "openPdf()\0print()\0"
};

void PrintProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PrintProcess *_t = static_cast<PrintProcess *>(_o);
        switch (_id) {
        case 0: _t->slot_processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 1: _t->slot_pdf2psError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 2: _t->slot_error((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 3: _t->openPdf(); break;
        case 4: _t->print(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PrintProcess::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PrintProcess::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PrintProcess,
      qt_meta_data_PrintProcess, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrintProcess::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrintProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrintProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrintProcess))
        return static_cast<void*>(const_cast< PrintProcess*>(this));
    return QObject::qt_metacast(_clname);
}

int PrintProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
