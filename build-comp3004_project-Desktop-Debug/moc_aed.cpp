/****************************************************************************
** Meta object code from reading C++ file 'aed.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../comp3004_project/aed.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aed.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AED_t {
    QByteArrayData data[13];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AED_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AED_t qt_meta_stringdata_AED = {
    {
QT_MOC_LITERAL(0, 0, 3), // "AED"
QT_MOC_LITERAL(1, 4, 11), // "voicePrompt"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 6), // "string"
QT_MOC_LITERAL(4, 24, 4), // "text"
QT_MOC_LITERAL(5, 29, 18), // "lightNumberChanged"
QT_MOC_LITERAL(6, 48, 11), // "lightNumber"
QT_MOC_LITERAL(7, 60, 14), // "selfTestPassed"
QT_MOC_LITERAL(8, 75, 6), // "passed"
QT_MOC_LITERAL(9, 82, 19), // "shockCountIncreased"
QT_MOC_LITERAL(10, 102, 10), // "shockCount"
QT_MOC_LITERAL(11, 113, 12), // "cprDelivered"
QT_MOC_LITERAL(12, 126, 13) // "analyzeRhythm"

    },
    "AED\0voicePrompt\0\0string\0text\0"
    "lightNumberChanged\0lightNumber\0"
    "selfTestPassed\0passed\0shockCountIncreased\0"
    "shockCount\0cprDelivered\0analyzeRhythm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AED[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,
       9,    1,   53,    2, 0x06 /* Public */,
      11,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AED::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AED *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->voicePrompt((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 1: _t->lightNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->selfTestPassed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->shockCountIncreased((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->cprDelivered(); break;
        case 5: _t->analyzeRhythm(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AED::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AED::voicePrompt)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AED::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AED::lightNumberChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AED::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AED::selfTestPassed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AED::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AED::shockCountIncreased)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AED::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AED::cprDelivered)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AED::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AED.data,
    qt_meta_data_AED,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AED::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AED::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AED.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AED::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AED::voicePrompt(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AED::lightNumberChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AED::selfTestPassed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AED::shockCountIncreased(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AED::cprDelivered()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
