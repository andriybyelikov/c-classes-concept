#ifndef CAR_H
#define CAR_H

#include "terrestrial.h"


struct car;

typedef struct {
        struct car *class;
        char *particular_name;
} car;

struct car {
        union {
                struct terrestrial base;
                struct {
                        char *(*get_common_name)(car *this);
                        char *(*get_particular_name)(car *this);
                        int number_of_wheels;
                        int (*get_number_of_wheels)(car *this);
                };
        };
};

struct car class_car(void);
car construct_car(struct car *class, char *particular_name);

#endif
