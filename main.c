#include <stdio.h>
#include "car.h"
#include "motorcycle.h"

int main(void)
{
        struct car class_car_instance = class_car();
        struct motorcycle class_motorcycle_instance = class_motorcycle();

        car polito = construct_car(&class_car_instance,
                "Polito");
        motorcycle verde = construct_motorcycle(&class_motorcycle_instance,
                "Verde");
        motorcycle rojo = construct_motorcycle(&class_motorcycle_instance,
                "Rojo");

        terrestrial *vehicles[] = {
                (terrestrial *)&polito,
                (terrestrial *)&verde,
                (terrestrial *)&rojo
        };

        for (int i = 0; i < sizeof(vehicles) / sizeof(struct vehicle *); i++) {
                terrestrial *v = vehicles[i];
                printf(
                        "Common name: %s\n"
                        "Particular name: %s\n"
                        "Number of wheels: %d\n"
                        "\n",
                        (v)->class->get_common_name(v),
                        (v)->class->get_particular_name(v),
                        (v)->class->get_number_of_wheels(v)
                );
        }
}
