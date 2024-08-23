#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float findArea (float, float, int, int, int);
int myFunction (int, int, int);
float sum (int, int , int ,int, float);

int main()
{

    float a, b;
    int c, d, n;

    printf("Enter value of a:\n");
    scanf("%f", &a);

    printf("Enter value of b:\n");
    scanf("%f", &b);

    printf("Enter value of n:\n");
    scanf("%d", &n);

    printf("Enter value of c:\n");
    scanf("%d", &c);

    printf("Enter value of d:\n");
    scanf("%d", &d);

    printf("T: %.2f", findArea(a, b, n, c, d));

    return 0;
}

float findArea (float a, float b, int n, int c, int d) {
    float h = (b - a) / n;
    return (h/2)*( myFunction(a, c, d) + myFunction(b, c, d) + 2 * sum (n, a, c, d, h) );
}

int myFunction (int num, int c, int d) {
    return pow(num,c) + 2 * d;
}

float sum (int n, int a, int c, int d, float h) {
    float count = 0;
    int i;
    for (i = 1; i < n; i++) {
        count += myFunction(a + h * i, c, d);
    }
    return count;
}
