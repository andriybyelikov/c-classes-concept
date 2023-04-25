#include <stddef.h>
#include "vehicle.h"

static
char *get_particular_name(vehicle *this)
{
        return this->particular_name;
}

struct vehicle class_vehicle(void)
{
        struct vehicle class;
        class.get_common_name = nullptr;
        class.get_particular_name = get_particular_name;
        return class;
}
