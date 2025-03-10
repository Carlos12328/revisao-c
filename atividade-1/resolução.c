#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4, e = 5;

    printf("a*b/c = %.3f\n", (float)a * b / c);
    printf("a*b%%c+1 = %d\n", a * b % c + 1);
    printf("++a*b-c-- = %d\n", ++a * b - c--);
    printf("7--b * ++d = %d\n", 7 - -b * ++d);
    printf("a/b/c = %.3f\n", (float)a / b / c);
    printf("7+c*--d/e = %.3f\n", 7 + c * --d / (float)e);
    printf("2*a%%-b+c+1 = %d\n", 2 * a % -b + c + 1);
    printf("39/-++e-+29%%c = %.3f\n", 39.0 / -++e - +29 % c);
    printf("7-+++a%%(3+b) = %d\n", 7 - ++a % (3 + b));

    return 0;
}


/*A saída do programa será:

    a*b/c = 0.667
    a*b%c+1 = 3
    ++a*b-c-- = 1
    7--b * ++d = 17
    a/b/c = 0.500
    7+c*--d/e = 8.600
    2*a%-b+c+1 = 3
    39/-++e-+29%c = -7.500
    7-+++a%(3+b) = 4

Mas os valores das variaveis em cada linha será:

    printf("a*b/c = %.3f\n", (float)a * b / c);
        a = 1; b = 2; c = 3;

    printf("a*b%%c+1 = %d\n", a * b % c + 1);
        a = 1; b = 2; c = 3;

    printf("++a*b-c-- = %d\n", ++a * b - c--);
        a = 2; b = 2; c = 2;

    printf("7--b * ++d = %d\n", 7 - -b * ++d);
        b = 2; d = 5;

    printf("a/b/c = %.3f\n", (float)a / b / c);
        a = 1; b = 2; c = 3;

    printf("7+c*--d/e = %.3f\n", 7 + c * --d / (float)e);
        c = 3; d = 3; e = 5;

    printf("2*a%%-b+c+1 = %d\n", 2 * a % -b + c + 1);
        a = 1; b = 2; c = 3;

    printf("39/-++e-+29%%c = %.3f\n", 39.0 / -++e - +29 % c);
        e = 6; c = 3;

    printf("7-+++a%%(3+b) = %d\n", 7 - ++a % (3 + b));
        a = 2; b = 2;


*/ 

