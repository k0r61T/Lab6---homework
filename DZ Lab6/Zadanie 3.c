#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    printf("Домашнее задание по Lab6. Задание 3. Вариант 6\n");
    printf("Дано число N (N<1000). Написать программу,\nкоторая проверяет входит ли в него цифра 5.\n");
    int N;
    printf("\nВведите целое значение N:\n");
    scanf("%d", &N);

    if (N >= 1000) {
        printf("Ошибка! Числовое значение должно быть меньше 1000.\n");
        return 1;
    }

    int N1 = N / 100;
    int N2 = (N / 10) % 10;
    int N3 = N % 10;

    printf("\nРезультат:\n");
    if (N1 == 5 || N2 == 5 || N3 == 5) {
        printf("Число 5 входит в значение %d\n", N);
    }
    else {
        printf("Число 5 не входит в значение %d\n", N);
    }

    return 0;
}