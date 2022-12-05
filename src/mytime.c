#include "../header/mytime.h"
#include <time.h>

/**
 * 格式化当前时间
 *
 * :param:
 * :return: 当前时间
 */
char *formatNowTime()
{
    time_t t1 = time(NULL);
    static char p[50];
    strftime(p, sizeof(p), "%Y-%m-%d %H:%M:%S", localtime(&t1));
    return p;
}