/****************************************************************************
** Meta object code from reading C++ file 'sessionwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/sessionwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sessionwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SessionWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      38,   36,   14,   14, 0x05,
      62,   59,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     103,   14,   14,   14, 0x08,
     118,   14,   14,   14, 0x08,
     136,  132,   14,   14, 0x08,
     156,   14,   14,   14, 0x08,
     174,   14,   14,   14, 0x08,
     194,   14,   14,   14, 0x08,
     211,   14,   14,   14, 0x08,
     233,   14,   14,   14, 0x08,
     252,   14,   14,   14, 0x08,
     270,   14,   14,   14, 0x08,
     288,   14,   14,   14, 0x0a,
     312,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SessionWidget[] = {
    "SessionWidget\0\0nameChanged(QString)\0"
    ",\0directRDP(bool,bool)\0,,\0"
    "settingsChanged(QString,QString,QString)\0"
    "slot_getIcon()\0slot_getKey()\0var\0"
    "slot_changeCmd(int)\0slot_rdpOptions()\0"
    "slot_proxyOptions()\0slot_proxyType()\0"
    "slot_proxySameLogin()\0slot_proxyGetKey()\0"
    "slot_krbChecked()\0slot_openFolder()\0"
    "slot_rdpDirectClicked()\0slot_emitSettings()\0"
};

void SessionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SessionWidget *_t = static_cast<SessionWidget *>(_o);
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->directRDP((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->settingsChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->slot_getIcon(); break;
        case 4: _t->slot_getKey(); break;
        case 5: _t->slot_changeCmd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slot_rdpOptions(); break;
        case 7: _t->slot_proxyOptions(); break;
        case 8: _t->slot_proxyType(); break;
        case 9: _t->slot_proxySameLogin(); break;
        case 10: _t->slot_proxyGetKey(); break;
        case 11: _t->slot_krbChecked(); break;
        case 12: _t->slot_openFolder(); break;
        case 13: _t->slot_rdpDirectClicked(); break;
        case 14: _t->slot_emitSettings(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SessionWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SessionWidget::staticMetaObject = {
    { &ConfigWidget::staticMetaObject, qt_meta_stringdata_SessionWidget,
      qt_meta_data_SessionWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SessionWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SessionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SessionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SessionWidget))
        return static_cast<void*>(const_cast< SessionWidget*>(this));
    return ConfigWidget::qt_metacast(_clname);
}

int SessionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void SessionWidget::nameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SessionWidget::directRDP(bool _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SessionWidget::settingsChanged(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
