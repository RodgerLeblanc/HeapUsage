/*
 * HeapUsage.h
 *
 *  Created on: 2014-12-04
 *      Author: Roger
 */

#ifndef HEAPUSAGE_H_
#define HEAPUSAGE_H_

#include <QObject>

#include <sys/procfs.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <stdint.h>

class HeapUsage : public QObject
{
    Q_OBJECT
public:
    HeapUsage() {}
    virtual ~HeapUsage() {}

    Q_INVOKABLE int measureMem(); // Can be invoked from QML as well
};

#endif /* HEAPUSAGE_H_ */
