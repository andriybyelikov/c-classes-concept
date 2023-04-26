#include "motorcycle.h"
#include <stddef.h>

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

motorcycle construct_motorcycle(struct motorcycle *class, char *particular_name)
{
        motorcycle c;
        c.class = class;
        c.particular_name = particular_name;
        return c;
}
