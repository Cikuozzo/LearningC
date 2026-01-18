#include <stdio.h>

int main() {

    int x, y;

    print("Insert the first number: ");
    scanf("%d", &x);

    printf("Insert the second number: ");
    scanf("%d", &y);

    float avg = (x + y)/2;

    printf("The average is: ", avg);

    return 0;

}
