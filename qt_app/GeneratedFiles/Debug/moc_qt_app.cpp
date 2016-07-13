/****************************************************************************
** Meta object code from reading C++ file 'qt_app.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qt_app.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_app.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qt_app_t {
    QByteArrayData data[6];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qt_app_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qt_app_t qt_meta_stringdata_qt_app = {
    {
QT_MOC_LITERAL(0, 0, 6), // "qt_app"
QT_MOC_LITERAL(1, 7, 7), // "getData"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 8), // "resetLCD"
QT_MOC_LITERAL(4, 25, 6), // "addLCD"
QT_MOC_LITERAL(5, 32, 7) // "mutiLCD"

    },
    "qt_app\0getData\0\0resetLCD\0addLCD\0mutiLCD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qt_app[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       1,    2,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   47,    2, 0x0a /* Public */,
       4,    0,   48,    2, 0x0a /* Public */,
       5,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qt_app::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        qt_app *_t = static_cast<qt_app *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->getData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->resetLCD(); break;
        case 3: _t->addLCD(); break;
        case 4: _t->mutiLCD(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (qt_app::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&qt_app::getData)) {
                *result = 0;
            }
        }
        {
            typedef void (qt_app::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&qt_app::getData)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject qt_app::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_qt_app.data,
      qt_meta_data_qt_app,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *qt_app::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qt_app::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_qt_app.stringdata0))
        return static_cast<void*>(const_cast< qt_app*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int qt_app::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void qt_app::getData(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qt_app::getData(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
