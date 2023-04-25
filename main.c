#include <stdio.h>
#include "car.h"

int main(void)
{
        struct car class_car_instance = class_car();
        car polito = construct_car(&class_car_instance, "Polito");

        printf(
                "Common name: %s\n"
                "Particular name: %s\n"
                "Number of wheels: %d\n",
                (&polito)->class->get_common_name(&polito),
                (&polito)->class->get_particular_name(&polito),
                (&polito)->class->get_number_of_wheels(&polito)
        );
}
