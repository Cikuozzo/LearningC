#include <stdio.h>

int main(){

    float x1, x2, y1, y2;

    do{

        printf("Insert x1: ");
        scanf("%f", &x1);

        printf("Insert x2: ");
        scanf("%f", &x2);

    }while(x1 == x2);

    printf("Insert y1: ");
    scanf("%f", &y1);

    printf("Insert y2: ");
    scanf("%f", &y2);

    float m = (y2 - y1) / (x2 - x1);
    float q = y1 - (m * x1);

    printf("The angular coefficient is: %f", m);
    printf("The intercept is equal to: %f", q);

    return 0;

}
