#include <stdio.h>
#include <math.h>

//Practice_2

int main() {
    int a;
    printf ("\nВведите номер варианта (4 или 9): ");
    scanf ("%d", &a);
    switch(a)
    {
        case 4: { //№1 из практики 2
            double x, y;
            printf("Введите координату x -> ");
            scanf("%lf", &x);
            printf("Введите координату y -> ");
            scanf("%lf", &y);
            printf("x = %6.3lf; y = %6.3lf\n", x, y);
            if ((x >= -1 && y <= 1 && x <= 0 && y >= 0) || (x >= 0 && y <= 0 && pow(x, 2) + pow(y, 2) <= 1)) {
                printf("Точка попадает в область\n");
            } else {
                printf("Точка не попадает в область\n");
            }
            break;
        }

        case 9: { //№2 из практики 2
            double z, y, b, a, pi = 3.14;
            printf("Введите значение z -> ");
            scanf("%lf", &z);
            printf("Введите значение y -> ");
            scanf("%lf", &y);
            printf("z = %6.3lf; y = %6.3lf\n", z, y);

            if (z <= y)
            {
                b = (z + pow(y, 2) * (1 / tan(z * pi / 180)));
            }
            else if (z > y)
            {
                if (z + y <= 0 || z - y <= 0)
                {
                    printf ("Error!\n");
                    break;
                }
                b = log(z + y) / log10(z - y);
            }

            if (b == z)
            {
                a = (b + y) / (b - y / (b - 1));
            }
            else if (b < z)
            {
                if (b - z * pow(y, 2) < 0)
                {
                    printf ("Error!\n");
                    break;
                }
                a = sqrt(b - z * pow(y, 2));
            }
            else if (b > z)
            {
                a = cos(z * pi / 180) - sin(pow(b, 2) * y * pi / 180);
            }

            printf ("\nРезультаты: \na = %6.3lf; b = %6.3lf\n", a, b);
            break;
        }

        default:
        {
            printf ("Error!");
            break;
        }
    }
    return 0;
}
