#include <stdio.h>

const float g = 9.81;

int main() {

    float t;

    do{

        printf("Insert the elapsed time (seconds): ");
        scanf("%f", &t);

    }while(t <= 0);

    float v = g * t;
    float s = (g / 2) * (t * t);

    printf("The object speed is: %f m/s \n", v);
    printf("The travelled distance is: %f m", s);

    return 0;

}
