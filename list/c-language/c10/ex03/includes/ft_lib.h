#ifndef FT_LIB_H
# define FT_LIB_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <libgen.h>

char        *g_progname;
void        ft_stdin(void);
void		ft_putchar(char c);
void		ft_putstr(char *str);
int         ft_atoi(char *str);

const char	*ft_get_strerr(int errnum);
void		ft_display_custom_error(int eno, char *argv);

int 		ft_size_file(char *argv);
void    	ft_print_name(int i, int argc, char *argv);
void	    ft_display_file(int i, int fd, int argc, char **argv);
void        ft_tail(int argc, char **argv);

#endif
