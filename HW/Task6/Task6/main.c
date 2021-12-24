#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

typedef double (*WriteX) (double, double);

double getX(double chislo, double x) {
    chislo = x;
    return chislo;
}

long double factorial(long double n)
{
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

long double pi(double x) {
    if (x > M_PI) {
        while (x > M_PI) {
            x -= M_PI;
        }
    }
    else {
        while (x < M_PI) {
            x += M_PI;
        }
    }
    return x;
}

long double sinT(double x, double etalon, double eps, int N, int* count) {
    int i;
    long double result = 0;
    for (i = 1; i < N; i++) {
        result += (pow(-1, i + 1) * pow(x, 2 * i - 1)) / (long double)factorial(2 * i - 1);
        //printf("%lf\n", result);
       //printf("%lf\n", fabs(etalon - result));
        if (fabs(etalon - result) < eps)
            break;
    }
    *count = i;
    return result;
}

long double cosT(double x, double etalon, double eps, int N, int* count) {
    int i;
    long double result = 0;
    for (i = 0; i < N; i++) {
        result += (pow(-1, i) * pow(x, 2 * i)) / (float)factorial(2 * i);
        if (fabs(etalon - result) < eps)
            break;
    }
    *count = i;
    return result;
}

long double expT(double x, double etalon, double eps, int N, int* count) {
    int i;
    long double result = 1;
    for (i = 1; i < N; i++) {
        result += pow(x, i) / (float)factorial(i);
        if (fabs(etalon - result) < eps)
            break;
    }
    *count = i;
    return result;
}

long double gcosT(double x, double etalon, double eps, int N, int* count) {
    int i;
    long double result = 1;
    for (i = 0; i < N; i++) {
        result += pow(x, 2 * i) / (float)factorial(2 * i);
        if (fabs(etalon - result) < eps)
            break;
    }
    *count = i;
    return result;
}

void funcMENU(int menu, double x, long double* result, double* etalon, long double* difference, double eps, int* count, int N) {

    switch (menu) {

    case 1:
        *etalon = sin(x);
        *result = sinT(x, *etalon, eps, N, count);// double x, double etalon, double eps, int N, int* count
        *difference = fabs(*etalon - *result);
        break;
    case 2:
        *etalon = cos(x);
        *result = cosT(x, *etalon, eps, N, count);
        *difference = fabs(*etalon - *result);
        break;
    case 3:
        *etalon = exp(x);
        *result = expT(x, *etalon, eps, N, count);
        *difference = fabs(*etalon - *result);
        break;
    case 4:
        *etalon = cosh(x);
        *result = gcosT(x, *etalon, eps, N, count);
        *difference = fabs(*etalon - *result);
        break;
    default:
        break;
    }
}

int main() {
    int mode, N, NMax, menu,
        count = 0;
    double x,
        chislo = 0,
        etalon = 0,
        difference = 0,
        eps = 0.000001;
    long double result = 0;

    printf("Welcome! Enter x:\n");
    scanf_s("%lf", &x);
    
    WriteX func;
    func = getX;

    printf("Select programm mode: \n");
    scanf_s("%d", &mode);
    printf("Select variant of function: \n");
    scanf_s("%d", &menu);

    switch (mode) {
    case 1:
        printf("Enter 'N' (1 - 1000)\n");
        scanf_s("%d", &N);

        funcMENU(menu, pi(x), &result, &etalon, &difference, eps, &count, N);
        printf("etalon - % .10f\nresult - % .10lf\ndifference - % .10f\nsummand - % d\nX - %.2lf\n", etalon, result, difference, count, func(chislo, x));
        break;
    case 2:
        printf("Enter NMax: \n");
        scanf_s("%d", &NMax);

        srand(time(0));

        for (int i = 0; i < NMax; i++) {
            N = rand() % 999 + 1;

            funcMENU(menu, x, &result, &etalon, &difference, eps, &count, N);
            printf("etalon - % .10f\tresult - % .10lf\tdifference - % .10f\tsummand - % d\nX - %.2lf\n", etalon, result, difference, count, func(chislo, x));
        }
        break;
    default:
        break;
    }
}
