#include <sys/types.h>

int smbc_close(int fd)
{
    (void) fd;
    return -1;
}

int smbc_init(void* fn, int debug)
{
    (void) fn;
    (void) debug;
    return -1;
}

off_t smbc_lseek(int fd, off_t offset, int whence)
{
    (void) fd;
    (void) offset;
    (void) whence;
    return -1;
}

int smbc_open(const char *furl, int flags, mode_t mode)
{
    (void) furl;
    (void) flags;
    (void) mode;
    return -1;
}

ssize_t smbc_read(int fd, void *buf, size_t bufsize)
{
    (void) fd;
    (void) buf;
    (void) bufsize;
    return -1;
}

ssize_t smbc_write(int fd, const void *buf, size_t bufsize)
{
    (void) fd;
    (void) buf;
    (void) bufsize;
    return -1;
}
