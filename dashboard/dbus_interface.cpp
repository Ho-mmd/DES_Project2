/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -p dbus_interface dbus_test.xml
 *
 * qdbusxml2cpp is Copyright (C) 2023 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "dbus_interface.h"

/*
 * Implementation of interface class ComExampleCanDataInterface
 */

ComExampleCanDataInterface::ComExampleCanDataInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

ComExampleCanDataInterface::~ComExampleCanDataInterface()
{
}

/*
 * Implementation of interface class LocalCanDataReceiverInterface
 */

LocalCanDataReceiverInterface::LocalCanDataReceiverInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

LocalCanDataReceiverInterface::~LocalCanDataReceiverInterface()
{
}

