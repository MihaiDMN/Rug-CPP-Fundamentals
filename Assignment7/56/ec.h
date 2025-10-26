#ifndef EC_H_
#define EC_H_

#include <string>
#include <cstdint>

using namespace std;

struct acct_v3
{
    char ac_flag;
    char ac_version;
    uint16_t ac_tty;
    uint32_t ac_exitcode;
    uint32_t ac_uid;
    uint32_t ac_gid;
    uint32_t ac_pid;
    uint32_t ac_ppid;
    uint32_t ac_btime;
    float ac_etime;
    uint16_t ac_utime;
    uint16_t ac_stime;
    uint16_t ac_mem;
    uint16_t ac_io;
    uint16_t ac_rw;
    uint16_t ac_minflt;
    uint16_t ac_majflt;
    uint16_t ac_swaps;
    char ac_comm[16];
};

string signalName(uint32_t code);
void processFile(cont string &filename, bool showAll);

#endif
