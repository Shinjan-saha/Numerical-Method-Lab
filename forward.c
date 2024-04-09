#include <stdio.h>
#include <conio.h>

int main() {
    float x[20], y[20], f, s, h, p;
    int i, j, n;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    printf("Enter the elements of x: ");
    for (i = 0; i <= n; i++) {
        scanf("%f", &x[i]);
    }

    printf("Enter the elements of y: ");
    for (i = 0; i <= n; i++) {
        scanf("%f", &y[i]);
    }

    printf("Enter the value of x for interpolation: ");
    scanf("%f", &p);

    h = x[1] - x[0];
    s = (p - x[0]) / h;
    f = y[0];

    for (i = 1; i <= n; i++) {
        float term = 1;
        for (j = 0; j < i; j++) {
            term *= (s - j) / (j + 1);
        }
        f += term * y[i];
    }

    printf("Interpolated value at x = %f is %f\n", p, f);
    getch();
    return 0;
}
