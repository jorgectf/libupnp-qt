/*
 * Copyright (C) 2019 Daniel Nicoletti <dantti12@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
#ifndef UPNPQT_DISCOVER_H
#define UPNPQT_DISCOVER_H

#include <QObject>

#include <UpnpQt/global.h>

class QNetworkAccessManager;

namespace UpnpQt {

class Device;
class DiscoverPrivate;
class UPNPQT_LIBRARY Discover : public QObject
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(Discover)
public:
    explicit Discover(QObject *parent = nullptr);
    virtual ~Discover();

    QNetworkAccessManager *nam() const;

public Q_SLOTS:
    void discover();

Q_SIGNALS:
    void discovered(Device *device);

private:
    DiscoverPrivate *d_ptr;
};

}

#endif // UPNPQT_DISCOVER_H
