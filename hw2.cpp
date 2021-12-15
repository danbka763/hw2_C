// Код написан на C++

#include <iostream>
#include <math.h>


using namespace std;
int main()
{
    system("chcp 1251");
    system("cls");

    printf("Работу выполнил Жигалин Данил Вадимович, гр. 421-1, вариант 8\n\n\n");

    double res = 1, 
           t, eps;
    int noerr1, noerr2;

    printf("Введите значение переменной t: ");
    noerr1 = scanf_s("%lf", &t);
    printf("\nВведите значение точности: ");
    noerr2 = scanf_s("%lf", &eps);

    if (noerr1 && noerr2)
    {
        int count = 2;
        res -= t;
        double iteration = t * t / 2.;

        while (iteration > eps)
        {
            if (count % 2 == 0)
            {
                res += iteration;
            }
            else
            {
                res -= iteration;
            }

            count++;
            iteration *= t / count;
        }

        printf("\nРезультат вычисления по итерационной формуле: %.50lf", res);
        printf("\nРезультат вычисления через exp(): %.50lf\n", exp(-t));
    }
    else
    {
        printf("\nВведены некорректные значения!");
    }
}