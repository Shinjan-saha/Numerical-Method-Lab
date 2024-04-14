#include <stdio.h>
#include <conio.h>

int main() {
    float x[20], y[20], f, s, h, p,d;
    int i, j,k, n;

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

 h = x[2] - x[1];

    printf("Enter the value of x for interpolation: ");
    scanf("%f", &f);

   
    s = (f - x[n]) / h;
    p=1;
    d = y[n];

    for (k = 1; k <=n; k++) {
        
        for (j = n; j >= 1; j--) {
            y[j]=  y[j]- y[j - 1] ;
        }
       p=p*(s+k-1)/k;
        d = d + p * y[n];
    }

    printf("Interpolated value at x = %f is %f\n", f, d);
    getch();
    return 0;
}
