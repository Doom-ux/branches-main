

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
    double P;
    double S;
    double x, a, b, c;
    char e;

    printf("Triangle(");
    scanf("%d %d,%d %d,%d %d,%d %d%c",
          &x1,
          &y1,
          &x2,
          &y2,
          &x3,
          &y3,
          &x4,
          &y4,
          &e);
    printf("\n");

    a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    if (a < b + c && b < a + c && c < a + b) {
        P = a + b + c;
        x = P / 2 * (P / 2 - a) * (P / 2 - b) * (P / 2 - c);
        S = sqrt(x);
        printf("%.3f", P);
        printf("\n%.3f\n", S);
    } else
        printf("Wrong Triangle");

    return 0;
}

