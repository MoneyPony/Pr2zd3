#include <stdio.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "RUS");
    int n = 3;
    int L = 333;
    int k = 2;
    int m = 4;
    // Вычисляем результат деления
    double result = (double)n / L;

    // Вывод данных и результатов
    printf("Дано:\n");
    printf("\t %d\n", n);
    printf("\t %d\n", L);
    printf("\t%s\n", "__________");
    printf("Ответ:\n");
    printf("\t%0+*.*lf", k + 6, m, result);
}
