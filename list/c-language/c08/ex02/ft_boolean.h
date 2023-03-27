#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

typedef enum {
    FALSE = 0,
    TRUE = 1
} t_bool;

#define EVEN(x) ((x) % 2 == 0)
#define SUCCESS 0
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"

#endif