#ifndef SYSTEMINFO_H
#define SYSTEMINFO_H

#include "Utils/file_util.h"
#include "Utils/format_util.h"
#include "Utils/command_util.h"
#include "Info/cpu_info.h"

#define LSCPU_COMMAND_MHZ "'LANGUAGE=en_US.UTF-8 lscpu -e=MHZ'"
#define LSCPU_COMMAND_MAXMHZ "'LANGUAGE=en_US.UTF-8 lscpu -e=MAXMHZ'"
#define PROC_CPUINFO "/proc/cpuinfo"

#include "stacer-core_global.h"

class STACERCORESHARED_EXPORT SystemInfo
{
public:
    SystemInfo();

    QString getHostname() const;
    QString getPlatform() const;
    QString getDistribution() const;
    QString getKernel() const;
    QString getCpuModel() const;
    QString getCpuSpeed() const;
    QString getCpuCore() const;
    QString getUsername() const;

    QFileInfoList getCrashReports() const;
    QFileInfoList getAppLogs() const;
    QFileInfoList getAppCaches() const;

    QStringList getUserList() const;
    QStringList getGroupList() const;

private slots:
private:
    QString cpuCore;
    QString cpuModel;
    QString cpuSpeed;
    QString username;
};

#endif // SYSTEMINFO_H
