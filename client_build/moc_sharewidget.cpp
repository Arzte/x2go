/****************************************************************************
** Meta object code from reading C++ file 'sharewidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/sharewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sharewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ShareWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      28,   12,   12,   12, 0x08,
      42,   12,   12,   12, 0x08,
      56,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ShareWidget[] = {
    "ShareWidget\0\0slot_openDir()\0slot_addDir()\0"
    "slot_delDir()\0slot_convClicked()\0"
};

void ShareWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ShareWidget *_t = static_cast<ShareWidget *>(_o);
        switch (_id) {
        case 0: _t->slot_openDir(); break;
        case 1: _t->slot_addDir(); break;
        case 2: _t->slot_delDir(); break;
        case 3: _t->slot_convClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ShareWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ShareWidget::staticMetaObject = {
    { &ConfigWidget::staticMetaObject, qt_meta_stringdata_ShareWidget,
      qt_meta_data_ShareWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ShareWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ShareWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ShareWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ShareWidget))
        return static_cast<void*>(const_cast< ShareWidget*>(this));
    return ConfigWidget::qt_metacast(_clname);
}

int ShareWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
