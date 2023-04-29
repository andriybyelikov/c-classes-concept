#include "vehicle.h"

static
char *get_particular_name(vehicle *this)
{
        return this->particular_name;
}

const struct vehicle class_vehicle = {
        .get_common_name = nullptr,
        .get_particular_name = get_particular_name,
};
