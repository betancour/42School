#include "../includes/ft_lib.h"
#include <errno.h>


const char      *ft_get_strerr(int errnum)
{
    extern const char *const    sys_errlist[];
    extern int                  sys_nerr;

    if (errnum < 0)
        errnum = -errnum;
    if (errnum < sys_nerr)
        return (sys_errlist[errnum]);

    return ((const char *)"Uknown Error!");
}
