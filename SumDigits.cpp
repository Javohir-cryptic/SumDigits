#include <stdio.h>
#include <iostream>
#include <locale.h>
#pragma warning(disable : 4996)

int SumDigits(int N)  // заголовок функции
{
    int d, sum = 0;
    while (N != 0)
    {
        d = N % 10;            // тело функции    
        sum = sum + d;
        N = N / 10;
    }
    return sum;              // функция возвращает значение sum  
}                        // конец функции
int main()
{
    setlocale(LC_ALL, "Rus");
    int N, s;
    printf("\nВведите целое число ");
    scanf("%d", &N);
    s = SumDigits(N);       // вызов функции 
    printf("Сумма цифр числа %d равна %d\n", N, s);
    getchar();
}