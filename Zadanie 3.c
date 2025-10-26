#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    printf("�������� ������� �� Lab6. ������� 3. ������� 6\n");
    printf("���� ����� N (N<1000). �������� ���������,\n������� ��������� ������ �� � ���� ����� 5.\n");
    int N;
    printf("\n������� ����� �������� N:\n");
    scanf("%d", &N);

    if (N >= 1000) {
        printf("������! �������� �������� ������ ���� ������ 1000.\n");
        return 1;
    }

    int N1 = N / 100;
    int N2 = (N / 10) % 10;
    int N3 = N % 10;

    printf("\n���������:\n");
    if (N1 == 5 || N2 == 5 || N3 == 5) {
        printf("����� 5 ������ � �������� %d\n", N);
    }
    else {
        printf("����� 5 �� ������ � �������� %d\n", N);
    }

    return 0;
}