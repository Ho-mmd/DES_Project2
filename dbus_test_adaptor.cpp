/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -i dbus_test_adaptor.h -a :dbus_test_adaptor.cpp dashboard/dbus_test.xml
 *
 * qdbusxml2cpp is Copyright (C) 2023 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "dbus_test_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class CanDataReceiverAdaptor
 */

CanDataReceiverAdaptor::CanDataReceiverAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

CanDataReceiverAdaptor::~CanDataReceiverAdaptor()
{
    // destructor
}

double CanDataReceiverAdaptor::rpm() const
{
    // get the value of property rpm
    return qvariant_cast< double >(parent()->property("rpm"));
}

double CanDataReceiverAdaptor::speed() const
{
    // get the value of property speed
    return qvariant_cast< double >(parent()->property("speed"));
}

