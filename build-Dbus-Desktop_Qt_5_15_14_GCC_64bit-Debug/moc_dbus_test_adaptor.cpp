/****************************************************************************
** Meta object code from reading C++ file 'dbus_test_adaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "dbus_test_adaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbus_test_adaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CanDataAdaptor_t {
    QByteArrayData data[9];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CanDataAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CanDataAdaptor_t qt_meta_stringdata_CanDataAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CanDataAdaptor"
QT_MOC_LITERAL(1, 15, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 31, 19), // "com.example.CanData"
QT_MOC_LITERAL(3, 51, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 71, 218), // "  <interface name=\"com.examp..."
QT_MOC_LITERAL(5, 268, 7), // "setData"
QT_MOC_LITERAL(6, 276, 0), // ""
QT_MOC_LITERAL(7, 277, 3), // "rpm"
QT_MOC_LITERAL(8, 281, 5) // "speed"

    },
    "CanDataAdaptor\0D-Bus Interface\0"
    "com.example.CanData\0D-Bus Introspection\0"
    "  <interface name=\"com.example.CanData\">\n    <method name=\"setData"
    "\">\n      <arg direction=\"in\" type=\"d\" name=\"rpm\"/>\n      <arg"
    " direction=\"in\" type=\"d\" name=\"speed\"/>\n    </method>\n  </inte"
    "rface>\n\0"
    "setData\0\0rpm\0speed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CanDataAdaptor[] = {

 // content:
       8,       // revision
       0,       // classname
       2,   14, // classinfo
       1,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // slots: name, argc, parameters, tag, flags
       5,    2,   23,    6, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    7,    8,

       0        // eod
};

void CanDataAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CanDataAdaptor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setData((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CanDataAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_meta_stringdata_CanDataAdaptor.data,
    qt_meta_data_CanDataAdaptor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CanDataAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CanDataAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CanDataAdaptor.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int CanDataAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
