#ifndef VEHICLE_H
#define VEHICLE_H

struct vehicle;

typedef struct {
        struct vehicle *class;
        char *particular_name;
} vehicle;

struct vehicle {
        char *(*get_common_name)(vehicle *this);
        char *(*get_particular_name)(vehicle *this);
};

struct vehicle class_vehicle(void);

#endif
