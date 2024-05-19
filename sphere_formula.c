//
// Created by Mairon on 18/05/2024.
//

#include <stdio.h>
#define INCLUDE_PI 3.14159265359f   // Pi constant

int sphere_formula() {

    // finding the volume of a sphere with a radius of 10meters.

    float fraction = 4.0f/3.0f;
    float radius = 10 * 10 * 10;
    float sphere_volume;

    sphere_volume = (fraction * radius * INCLUDE_PI);

    printf("sphere_volume is: %.2f", sphere_volume);

    return 0;
}
