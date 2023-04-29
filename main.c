#include <stdio.h>
#include "car.h"
#include "motorcycle.h"

int main(void)
{
        auto polito = construct_car("Polito");
        auto verde = construct_motorcycle("Verde");
        auto rojo = construct_motorcycle("Rojo");

        terrestrial *vehicles[] = {
                (terrestrial *)&polito,
                (terrestrial *)&verde,
                (terrestrial *)&rojo,
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
