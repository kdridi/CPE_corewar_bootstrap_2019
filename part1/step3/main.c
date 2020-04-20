#include <assert.h>
#include <fcntl.h>
#include <unistd.h>

#define FILENAME "number-as-int.yolo"

static int fd = 0;

void write_buffer(const void* buf, unsigned int size)
{
    ssize_t wsize;

    wsize = write(fd, buf, size);
    assert(wsize == size);
}

void write_char(char ch)
{
    write_buffer(&ch, 1);
}

void write_string(const char* str)
{
    unsigned int size;

    size = 0;
    while(str[size] != '\0')
        size += 1;

    write_buffer(str, size);
}

void write_int(int number)
{
    write_buffer(&number, sizeof(number));
}

void step(void);

int main()
{
    fd = open(FILENAME, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
        return (84);

    step();

    fd = close(fd);
    assert(fd != -1);

    return (0);
}

void step()
{
    write_int(12345678);    
}
