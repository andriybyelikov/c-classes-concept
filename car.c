#include "car.h"

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

car construct_car(char *particular_name)
{
        car c;

        // probably can't optimize this further
        // until C adopts constexpr functions
        c.class = &(static struct car){};
        *(c.class) = class_car();

        c.particular_name = particular_name;
        return c;
}
