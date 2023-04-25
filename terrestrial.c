#include <stddef.h>
#include "terrestrial.h"

static
int get_number_of_wheels(terrestrial *this)
{
        return this->class->number_of_wheels;
}

struct terrestrial class_terrestrial(int number_of_wheels)
{
        struct terrestrial class;
        class.base = class_vehicle();
        class.number_of_wheels = number_of_wheels;
        class.get_number_of_wheels = get_number_of_wheels;
        return class;
};
