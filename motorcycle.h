#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "terrestrial.h"

struct motorcycle;

typedef struct {
        struct motorcycle *class;
        char *particular_name;
} motorcycle;

struct motorcycle {
        union {
                struct terrestrial base;
                struct {
                        char *(*get_common_name)(motorcycle *this);
                        char *(*get_particular_name)(motorcycle *this);
                        int number_of_wheels;
                        int (*get_number_of_wheels)(motorcycle *this);
                };
        };
};

struct motorcycle class_motorcycle(void);
motorcycle construct_motorcycle(char *particular_name);

#endif
