#include    <unistd.h>
#include    <fcntl.h>

void        disp_file(int fd)
{
    char    buffer;

    while(read(fd, &buffer, 1) !=0)
        write(1, &buffer, 1);
}

int     main(int argc, char **argv)
{
    int     fd;

    if(argc != 2)
    {
        if(argc > 2)
            write(2, "Too many arguments \n", 20);
        if(argc > 2)
            write(2, "File name missing \n", 20);
        return(1);
    }

    fd = open(argv[1], O_RDONLY);
    disp_file(fd);
    close(fd);
    return(0);
}
