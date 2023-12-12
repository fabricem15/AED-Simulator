/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../comp3004_project/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "updateTime"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16), // "updateShockCount"
QT_MOC_LITERAL(4, 40, 10), // "shockCount"
QT_MOC_LITERAL(5, 51, 14), // "setVoicePrompt"
QT_MOC_LITERAL(6, 66, 6), // "string"
QT_MOC_LITERAL(7, 73, 4), // "text"
QT_MOC_LITERAL(8, 78, 10), // "setBattery"
QT_MOC_LITERAL(9, 89, 6), // "charge"
QT_MOC_LITERAL(10, 96, 20), // "turnOffPreviousLight"
QT_MOC_LITERAL(11, 117, 5), // "index"
QT_MOC_LITERAL(12, 123, 19), // "showStatusIndicator"
QT_MOC_LITERAL(13, 143, 10), // "passedTest"
QT_MOC_LITERAL(14, 154, 14), // "switchPowerBtn"
QT_MOC_LITERAL(15, 169, 8), // "setGraph"
QT_MOC_LITERAL(16, 178, 3), // "url"
QT_MOC_LITERAL(17, 182, 11), // "runScenario"
QT_MOC_LITERAL(18, 194, 11) // "scenarioNum"

    },
    "MainWindow\0updateTime\0\0updateShockCount\0"
    "shockCount\0setVoicePrompt\0string\0text\0"
    "setBattery\0charge\0turnOffPreviousLight\0"
    "index\0showStatusIndicator\0passedTest\0"
    "switchPowerBtn\0setGraph\0url\0runScenario\0"
    "scenarioNum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    1,   60,    2, 0x0a /* Public */,
       5,    1,   63,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
      10,    1,   69,    2, 0x0a /* Public */,
      12,    1,   72,    2, 0x0a /* Public */,
      14,    0,   75,    2, 0x0a /* Public */,
      15,    1,   76,    2, 0x0a /* Public */,
      17,    1,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,   16,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateTime(); break;
        case 1: _t->updateShockCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setVoicePrompt((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 3: _t->setBattery((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->turnOffPreviousLight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->showStatusIndicator((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->switchPowerBtn(); break;
        case 7: _t->setGraph((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 8: _t->runScenario((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
