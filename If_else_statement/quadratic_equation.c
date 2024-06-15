#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, r1, r2;

    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0)
    {
        printf("Invalid input. a cannot be zero.\n");
        return 0;
    }

    double d = b * b - 4 * a * c;
    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots are %.2lf and %.2lf\n", r1, r2);
    }
    else if (d == 0)
    {
        r1 = r2 = -b / (2 * a);
        printf("The root is %.2lf\n", r1);
    }
    else 
    {
        double real = -b / (2 * a); 
        double imag = sqrt(-d) / (2 * a); 
        printf("The roots are %.2lf + %.2lfi and %.2lf - %.2lfi\n", real, imag, real, imag);
    }
  return 0;
}
