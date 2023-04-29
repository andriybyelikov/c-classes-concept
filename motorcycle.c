#include "motorcycle.h"

static
char *get_common_name(motorcycle *this)
{
        return "Motorcycle";
}

struct motorcycle class_motorcycle(void)
{
        struct motorcycle class;
        class.base = class_terrestrial(2);
        class.get_common_name = get_common_name;
        return class;
}

motorcycle construct_motorcycle(char *particular_name)
{
        motorcycle c;

        // probably can't optimize this further
        // until C adopts constexpr functions
        c.class = &(static struct motorcycle){};
        *(c.class) = class_motorcycle();

        c.particular_name = particular_name;
        return c;
}
