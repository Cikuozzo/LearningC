#include <stdio.h>

const double pi = 3.14;

int main() {

    double radius;

    printf("Insert the radius: ");
    scanf("%lf", &radius);

    double circumference = 2 * pi * radius;
    double area = pi * (radius * radius);

    printf("The circumference is equal to: &lf", circumference);
    printf("The area is equal to: &lf", area);

    return 0;
}
