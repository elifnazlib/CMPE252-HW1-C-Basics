#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void myFormula(int, int, float, float, float);

int main()
{
    float a, b, c;
    int min, max;

    printf("Enter value of a:\n");
    scanf("%f", &a);

    printf("Enter value of b:\n");
    scanf("%f", &b);

    printf("Enter value of c:\n");
    scanf("%f", &c);

    printf("Enter minimum value of x_n:\n");
    scanf("%d", &min);

    printf("Enter maximum value of x_n:\n");
    scanf("%d", &max);

    myFormula(min, max, a, b, c);

}

void myFormula(int min, int max, float a, float b, float c) {
    float delta = ((sqrt(b*b - 4*a*c)-b))/(2*a);
    float first = 10;

    for (int i = 0; i < min-1; i++) {
        first = first * b + delta;
    }

    for (int i = min - 1; i < max; i++) {
        first = first * b + delta;
        printf("x_%d: %.2f\n", i+1, first);
    }
}
