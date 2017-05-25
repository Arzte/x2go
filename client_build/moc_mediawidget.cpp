/****************************************************************************
** Meta object code from reading C++ file 'mediawidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mediawidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mediawidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MediaWidget[] = {

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
      20,   13,   12,   12, 0x08,
      49,   45,   12,   12, 0x08,
      71,   12,   12,   12, 0x08,
      94,   45,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MediaWidget[] = {
    "MediaWidget\0\0system\0slot_sndSysSelected(int)\0"
    "val\0slot_sndToggled(bool)\0"
    "slot_sndStartClicked()\0"
    "slot_sndDefPortChecked(bool)\0"
};

void MediaWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MediaWidget *_t = static_cast<MediaWidget *>(_o);
        switch (_id) {
        case 0: _t->slot_sndSysSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slot_sndToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->slot_sndStartClicked(); break;
        case 3: _t->slot_sndDefPortChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MediaWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MediaWidget::staticMetaObject = {
    { &ConfigWidget::staticMetaObject, qt_meta_stringdata_MediaWidget,
      qt_meta_data_MediaWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MediaWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MediaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MediaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MediaWidget))
        return static_cast<void*>(const_cast< MediaWidget*>(this));
    return ConfigWidget::qt_metacast(_clname);
}

int MediaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
