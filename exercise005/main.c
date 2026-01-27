#include <stdio.h>
#include <math.h>

float calc_delta(float a, float b, float c){

    float delta = pow(b, 2) - (4 * a * c);

    return delta;

}

int main(){

    float a, b, c, x1, x2, re, im;

    printf("Insert a: ");
    scanf("%f", &a);

    printf("Insert b: ");
    scanf("%f", &b);

    printf("Insert c: ");
    scanf("%f", &c);

    if(a == 0){

        x1 = (-c / b);
        printf("There is one solution since it is a first grade equations: %f", x1);

    }else{

        float delta = calc_delta(a, b, c);

        if(delta > 0){

            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);

            printf("The equation has two solutions: \n")
            printf("X1 = %f\n", x1);
            printf("X2 = %f", x2);

        }else if(delta == 0){

            x1 = -b / (2 * a);

            printf("The equation has one solution: %f", x1);

        }else{

            re = -b / (2 * a);
            im = sqrt(-delta);

            printf("The equation ha two solutions in C: ");
            printf("%f + %fi\n", re, im);
            printf("%f - %fi", re, im);

        }

    }


    return 0;

}
