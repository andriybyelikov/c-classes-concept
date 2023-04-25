#ifndef TERRESTRIAL_H
#define TERRESTRIAL_H

#include "vehicle.h"


struct terrestrial;

typedef struct {
        struct terrestrial *class;
        char *particular_name;
} terrestrial;

struct terrestrial {
        union {
                struct vehicle base;
                struct {
                        char *(*get_common_name)(terrestrial *this);
                        char *(*get_particular_name)(terrestrial *this);
                };
        };
        int number_of_wheels;
        int (*get_number_of_wheels)(terrestrial *this);
};

struct terrestrial class_terrestrial(int number_of_wheels);

#endif
