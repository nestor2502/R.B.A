/****************************************************************************
** Meta object code from reading C++ file 'gui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../InterfazGrafica/gui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GUI_t {
    QByteArrayData data[11];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GUI_t qt_meta_stringdata_GUI = {
    {
QT_MOC_LITERAL(0, 0, 3), // "GUI"
QT_MOC_LITERAL(1, 4, 30), // "on_actionNuev_Imagen_triggered"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 35), // "on_actionGruardad_Archivo_tri..."
QT_MOC_LITERAL(4, 72, 29), // "on_actionFiltroRojo_triggered"
QT_MOC_LITERAL(5, 102, 31), // "on_actionFiltro_Verde_triggered"
QT_MOC_LITERAL(6, 134, 30), // "on_actionFiltro_Azul_triggered"
QT_MOC_LITERAL(7, 165, 32), // "on_actionFiltroMosaico_triggered"
QT_MOC_LITERAL(8, 198, 15), // "setImageFiltred"
QT_MOC_LITERAL(9, 214, 6), // "string"
QT_MOC_LITERAL(10, 221, 3) // "key"

    },
    "GUI\0on_actionNuev_Imagen_triggered\0\0"
    "on_actionGruardad_Archivo_triggered\0"
    "on_actionFiltroRojo_triggered\0"
    "on_actionFiltro_Verde_triggered\0"
    "on_actionFiltro_Azul_triggered\0"
    "on_actionFiltroMosaico_triggered\0"
    "setImageFiltred\0string\0key"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GUI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void GUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionNuev_Imagen_triggered(); break;
        case 1: _t->on_actionGruardad_Archivo_triggered(); break;
        case 2: _t->on_actionFiltroRojo_triggered(); break;
        case 3: _t->on_actionFiltro_Verde_triggered(); break;
        case 4: _t->on_actionFiltro_Azul_triggered(); break;
        case 5: _t->on_actionFiltroMosaico_triggered(); break;
        case 6: _t->setImageFiltred((*reinterpret_cast< string(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GUI::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_GUI.data,
    qt_meta_data_GUI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GUI.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int GUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
