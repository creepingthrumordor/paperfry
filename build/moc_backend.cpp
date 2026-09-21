/****************************************************************************
** Meta object code from reading C++ file 'backend.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/backend.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN7BackendE_t {};
} // unnamed namespace

template <> constexpr inline auto Backend::qt_create_metaobjectdata<qt_meta_tag_ZN7BackendE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Backend",
        "fileUrlChanged",
        "",
        "modifiedChanged",
        "statusChanged",
        "wordCountChanged",
        "darkModeChanged",
        "textScaleChanged",
        "themeColorsChanged",
        "closeAfterSave",
        "openDialogRequested",
        "saveDialogRequested",
        "QUrl",
        "suggestedUrl",
        "saveSucceeded",
        "externalChangeDetected",
        "deleted",
        "locallyModified",
        "attachDocument",
        "textDocument",
        "openDialog",
        "open",
        "url",
        "save",
        "saveForClose",
        "saveAsDialog",
        "saveAs",
        "fileDialogCanceled",
        "discardRecovery",
        "reloadFromDisk",
        "keepExternalVersion",
        "printDocument",
        "newWindow",
        "clipboardUrl",
        "clipboardText",
        "editorTextChanged",
        "hiddenRangesAt",
        "QVariantList",
        "position",
        "setSearchHighlight",
        "query",
        "currentMatchStart",
        "openExternalUrl",
        "windowGeometry",
        "QVariantMap",
        "saveWindowGeometry",
        "x",
        "y",
        "width",
        "height",
        "maximized",
        "fileUrl",
        "fileName",
        "modified",
        "status",
        "wordCount",
        "darkMode",
        "textScale",
        "themeBackground",
        "themeForeground",
        "themeAccent",
        "themeSelection"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'fileUrlChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'modifiedChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'statusChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'wordCountChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'darkModeChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'textScaleChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'themeColorsChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'closeAfterSave'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openDialogRequested'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'saveDialogRequested'
        QtMocHelpers::SignalData<void(const QUrl &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Signal 'saveSucceeded'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'externalChangeDetected'
        QtMocHelpers::SignalData<void(bool, bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 16 }, { QMetaType::Bool, 17 },
        }}),
        // Method 'attachDocument'
        QtMocHelpers::MethodData<void(QObject *)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QObjectStar, 19 },
        }}),
        // Method 'openDialog'
        QtMocHelpers::MethodData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'open'
        QtMocHelpers::MethodData<void(const QUrl &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 22 },
        }}),
        // Method 'save'
        QtMocHelpers::MethodData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'saveForClose'
        QtMocHelpers::MethodData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'saveAsDialog'
        QtMocHelpers::MethodData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'saveAs'
        QtMocHelpers::MethodData<void(const QUrl &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 22 },
        }}),
        // Method 'fileDialogCanceled'
        QtMocHelpers::MethodData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'discardRecovery'
        QtMocHelpers::MethodData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'reloadFromDisk'
        QtMocHelpers::MethodData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'keepExternalVersion'
        QtMocHelpers::MethodData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'printDocument'
        QtMocHelpers::MethodData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'newWindow'
        QtMocHelpers::MethodData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'clipboardUrl'
        QtMocHelpers::MethodData<QString() const>(33, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'clipboardText'
        QtMocHelpers::MethodData<QString() const>(34, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'editorTextChanged'
        QtMocHelpers::MethodData<bool()>(35, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'hiddenRangesAt'
        QtMocHelpers::MethodData<QVariantList(int) const>(36, 2, QMC::AccessPublic, 0x80000000 | 37, {{
            { QMetaType::Int, 38 },
        }}),
        // Method 'setSearchHighlight'
        QtMocHelpers::MethodData<void(const QString &, int)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 40 }, { QMetaType::Int, 41 },
        }}),
        // Method 'openExternalUrl'
        QtMocHelpers::MethodData<void(const QUrl &)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 12, 22 },
        }}),
        // Method 'windowGeometry'
        QtMocHelpers::MethodData<QVariantMap() const>(43, 2, QMC::AccessPublic, 0x80000000 | 44),
        // Method 'saveWindowGeometry'
        QtMocHelpers::MethodData<void(int, int, int, int, bool)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 46 }, { QMetaType::Int, 47 }, { QMetaType::Int, 48 }, { QMetaType::Int, 49 },
            { QMetaType::Bool, 50 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'fileUrl'
        QtMocHelpers::PropertyData<QUrl>(51, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'fileName'
        QtMocHelpers::PropertyData<QString>(52, QMetaType::QString, QMC::DefaultPropertyFlags, 0),
        // property 'modified'
        QtMocHelpers::PropertyData<bool>(53, QMetaType::Bool, QMC::DefaultPropertyFlags, 1),
        // property 'status'
        QtMocHelpers::PropertyData<QString>(54, QMetaType::QString, QMC::DefaultPropertyFlags, 2),
        // property 'wordCount'
        QtMocHelpers::PropertyData<int>(55, QMetaType::Int, QMC::DefaultPropertyFlags, 3),
        // property 'darkMode'
        QtMocHelpers::PropertyData<bool>(56, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'textScale'
        QtMocHelpers::PropertyData<qreal>(57, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 5),
        // property 'themeBackground'
        QtMocHelpers::PropertyData<QString>(58, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
        // property 'themeForeground'
        QtMocHelpers::PropertyData<QString>(59, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
        // property 'themeAccent'
        QtMocHelpers::PropertyData<QString>(60, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
        // property 'themeSelection'
        QtMocHelpers::PropertyData<QString>(61, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Backend, qt_meta_tag_ZN7BackendE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Backend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7BackendE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7BackendE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7BackendE_t>.metaTypes,
    nullptr
} };

void Backend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Backend *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fileUrlChanged(); break;
        case 1: _t->modifiedChanged(); break;
        case 2: _t->statusChanged(); break;
        case 3: _t->wordCountChanged(); break;
        case 4: _t->darkModeChanged(); break;
        case 5: _t->textScaleChanged(); break;
        case 6: _t->themeColorsChanged(); break;
        case 7: _t->closeAfterSave(); break;
        case 8: _t->openDialogRequested(); break;
        case 9: _t->saveDialogRequested((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 10: _t->saveSucceeded(); break;
        case 11: _t->externalChangeDetected((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 12: _t->attachDocument((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 13: _t->openDialog(); break;
        case 14: _t->open((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 15: _t->save(); break;
        case 16: _t->saveForClose(); break;
        case 17: _t->saveAsDialog(); break;
        case 18: _t->saveAs((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 19: _t->fileDialogCanceled(); break;
        case 20: _t->discardRecovery(); break;
        case 21: _t->reloadFromDisk(); break;
        case 22: _t->keepExternalVersion(); break;
        case 23: _t->printDocument(); break;
        case 24: _t->newWindow(); break;
        case 25: { QString _r = _t->clipboardUrl();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 26: { QString _r = _t->clipboardText();
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->editorTextChanged();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { QVariantList _r = _t->hiddenRangesAt((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->setSearchHighlight((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 30: _t->openExternalUrl((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 31: { QVariantMap _r = _t->windowGeometry();
            if (_a[0]) *reinterpret_cast<QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 32: _t->saveWindowGeometry((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[5]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::fileUrlChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::modifiedChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::statusChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::wordCountChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::darkModeChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::textScaleChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::themeColorsChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::closeAfterSave, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::openDialogRequested, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)(const QUrl & )>(_a, &Backend::saveDialogRequested, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)()>(_a, &Backend::saveSucceeded, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Backend::*)(bool , bool )>(_a, &Backend::externalChangeDetected, 11))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QUrl*>(_v) = _t->fileUrl(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->fileName(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->modified(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->status(); break;
        case 4: *reinterpret_cast<int*>(_v) = _t->wordCount(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->darkMode(); break;
        case 6: *reinterpret_cast<qreal*>(_v) = _t->textScale(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->themeBackground(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->themeForeground(); break;
        case 9: *reinterpret_cast<QString*>(_v) = _t->themeAccent(); break;
        case 10: *reinterpret_cast<QString*>(_v) = _t->themeSelection(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setDarkMode(*reinterpret_cast<bool*>(_v)); break;
        case 6: _t->setTextScale(*reinterpret_cast<qreal*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Backend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Backend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7BackendE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Backend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 33;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Backend::fileUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Backend::modifiedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Backend::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Backend::wordCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Backend::darkModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Backend::textScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Backend::themeColorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Backend::closeAfterSave()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Backend::openDialogRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Backend::saveDialogRequested(const QUrl & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void Backend::saveSucceeded()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Backend::externalChangeDetected(bool _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1, _t2);
}
QT_WARNING_POP
