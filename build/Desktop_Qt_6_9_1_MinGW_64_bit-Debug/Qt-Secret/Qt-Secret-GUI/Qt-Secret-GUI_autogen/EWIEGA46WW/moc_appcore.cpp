/****************************************************************************
** Meta object code from reading C++ file 'appcore.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../Qt-Secret/Qt-Secret-GUI/appcore.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appcore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
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
struct qt_meta_tag_ZN7AppCoreE_t {};
} // unnamed namespace

template <> constexpr inline auto AppCore::qt_create_metaobjectdata<qt_meta_tag_ZN7AppCoreE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AppCore",
        "qmlOpenPopup",
        "",
        "qmlClosePopup",
        "wrkGenerateKeys",
        "rsa",
        "qmlShowKeys",
        "pubKey",
        "privKey",
        "wrkEncryptMessage",
        "message",
        "wrkDecryptMessage",
        "qmlShowEncDecResult",
        "wrkSignMessage",
        "wrkCheckSign",
        "qmlShowSignResult",
        "copyToClipboard",
        "text",
        "generateKeys",
        "printKeys",
        "getEncryptDecrypt",
        "actionType",
        "key",
        "printEncDecResult",
        "getSignCheck",
        "printSignResult"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'qmlOpenPopup'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'qmlClosePopup'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'wrkGenerateKeys'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Signal 'qmlShowKeys'
        QtMocHelpers::SignalData<void(QByteArray, QByteArray)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 7 }, { QMetaType::QByteArray, 8 },
        }}),
        // Signal 'wrkEncryptMessage'
        QtMocHelpers::SignalData<void(QString, QString)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { QMetaType::QString, 10 },
        }}),
        // Signal 'wrkDecryptMessage'
        QtMocHelpers::SignalData<void(QString, QString)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 }, { QMetaType::QString, 10 },
        }}),
        // Signal 'qmlShowEncDecResult'
        QtMocHelpers::SignalData<void(QString)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Signal 'wrkSignMessage'
        QtMocHelpers::SignalData<void(QString, QString)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 }, { QMetaType::QString, 10 },
        }}),
        // Signal 'wrkCheckSign'
        QtMocHelpers::SignalData<void(QString, QString)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 }, { QMetaType::QString, 10 },
        }}),
        // Signal 'qmlShowSignResult'
        QtMocHelpers::SignalData<void(QString)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'copyToClipboard'
        QtMocHelpers::SlotData<void(QString)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'generateKeys'
        QtMocHelpers::SlotData<void(int)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'printKeys'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getEncryptDecrypt'
        QtMocHelpers::SlotData<void(bool, QString, QString)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 21 }, { QMetaType::QString, 22 }, { QMetaType::QString, 10 },
        }}),
        // Slot 'printEncDecResult'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'getSignCheck'
        QtMocHelpers::SlotData<void(bool, QString, QString)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 21 }, { QMetaType::QString, 22 }, { QMetaType::QString, 10 },
        }}),
        // Slot 'printSignResult'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AppCore, qt_meta_tag_ZN7AppCoreE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AppCore::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7AppCoreE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7AppCoreE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7AppCoreE_t>.metaTypes,
    nullptr
} };

void AppCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AppCore *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->qmlOpenPopup(); break;
        case 1: _t->qmlClosePopup(); break;
        case 2: _t->wrkGenerateKeys((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->qmlShowKeys((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 4: _t->wrkEncryptMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->wrkDecryptMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->qmlShowEncDecResult((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->wrkSignMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->wrkCheckSign((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->qmlShowSignResult((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->copyToClipboard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->generateKeys((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->printKeys(); break;
        case 13: _t->getEncryptDecrypt((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 14: _t->printEncDecResult(); break;
        case 15: _t->getSignCheck((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 16: _t->printSignResult(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AppCore::*)()>(_a, &AppCore::qmlOpenPopup, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppCore::*)()>(_a, &AppCore::qmlClosePopup, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppCore::*)(int )>(_a, &AppCore::wrkGenerateKeys, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppCore::*)(QByteArray , QByteArray )>(_a, &AppCore::qmlShowKeys, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppCore::*)(QString , QString )>(_a, &AppCore::wrkEncryptMessage, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppCore::*)(QString , QString )>(_a, &AppCore::wrkDecryptMessage, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppCore::*)(QString )>(_a, &AppCore::qmlShowEncDecResult, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppCore::*)(QString , QString )>(_a, &AppCore::wrkSignMessage, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppCore::*)(QString , QString )>(_a, &AppCore::wrkCheckSign, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppCore::*)(QString )>(_a, &AppCore::qmlShowSignResult, 9))
            return;
    }
}

const QMetaObject *AppCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppCore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7AppCoreE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AppCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void AppCore::qmlOpenPopup()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AppCore::qmlClosePopup()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AppCore::wrkGenerateKeys(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void AppCore::qmlShowKeys(QByteArray _t1, QByteArray _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void AppCore::wrkEncryptMessage(QString _t1, QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void AppCore::wrkDecryptMessage(QString _t1, QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void AppCore::qmlShowEncDecResult(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void AppCore::wrkSignMessage(QString _t1, QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2);
}

// SIGNAL 8
void AppCore::wrkCheckSign(QString _t1, QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1, _t2);
}

// SIGNAL 9
void AppCore::qmlShowSignResult(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}
QT_WARNING_POP
