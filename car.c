#include "car.h"
#include <stddef.h>

static
char *get_common_name(car *this)
{
        return "Car";
}

struct car class_car(void)
{
        struct car class;
        class.base = class_terrestrial(4);
        class.get_common_name = get_common_name;
        return class;
}

car construct_car(struct car *class, char *particular_name)
{
        car c;
        c.class = class;
        c.particular_name = particular_name;
        return c;
}
