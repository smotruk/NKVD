/****************************************************************************
** Meta object code from reading C++ file 'zekmainmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../zekmainmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zekmainmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ZekMainMenu_t {
    QByteArrayData data[12];
    char stringdata[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ZekMainMenu_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ZekMainMenu_t qt_meta_stringdata_ZekMainMenu = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 17),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 15),
QT_MOC_LITERAL(4, 47, 15),
QT_MOC_LITERAL(5, 63, 13),
QT_MOC_LITERAL(6, 77, 10),
QT_MOC_LITERAL(7, 88, 12),
QT_MOC_LITERAL(8, 101, 10),
QT_MOC_LITERAL(9, 112, 10),
QT_MOC_LITERAL(10, 123, 1),
QT_MOC_LITERAL(11, 125, 10)
    },
    "ZekMainMenu\0slotUpdateZekList\0\0"
    "slotShowZekInfo\0slotSaveRedackt\0"
    "slotDeleteZek\0slotRedack\0slotUnRedack\0"
    "slotAddZek\0slotNewZek\0s\0slotStatia\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZekMainMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a,
       3,    1,   60,    2, 0x0a,
       4,    0,   63,    2, 0x0a,
       5,    0,   64,    2, 0x0a,
       6,    0,   65,    2, 0x0a,
       7,    0,   66,    2, 0x0a,
       8,    0,   67,    2, 0x0a,
       9,    1,   68,    2, 0x0a,
      11,    0,   71,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,

       0        // eod
};

void ZekMainMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZekMainMenu *_t = static_cast<ZekMainMenu *>(_o);
        switch (_id) {
        case 0: _t->slotUpdateZekList(); break;
        case 1: _t->slotShowZekInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotSaveRedackt(); break;
        case 3: _t->slotDeleteZek(); break;
        case 4: _t->slotRedack(); break;
        case 5: _t->slotUnRedack(); break;
        case 6: _t->slotAddZek(); break;
        case 7: _t->slotNewZek((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->slotStatia(); break;
        default: ;
        }
    }
}

const QMetaObject ZekMainMenu::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ZekMainMenu.data,
      qt_meta_data_ZekMainMenu,  qt_static_metacall, 0, 0}
};


const QMetaObject *ZekMainMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZekMainMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ZekMainMenu.stringdata))
        return static_cast<void*>(const_cast< ZekMainMenu*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ZekMainMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
