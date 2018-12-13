#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "");
	int ft;
	ft = 453;
	for (int i = ft; i <= ?; i++)
	{
		printf("Таблица соответствия: %d\n", i*ft);
	}



	/*float a = 20.4;
	for (int i = 2; i <= 20; i++)
	{
		printf("Таблица стоимости: %f\n", i*a);
	}*/



	/*setlocale(LC_ALL, "");
	int a, b;
	printf("Введите число а= ");
	scanf_s("%d", &a);
	printf("Введите число b= ");
	scanf_s("%d", &b);

	for (a; a<= b; a++)
	{
		printf("От a до b= %d\n",a);
	}*/

	/*int a;
	printf("Введите число а= ");
	scanf_s("%d", &a);
	
	for (int i = a; i <= 50; i++)
	{
		printf("Число без степени: %d, в степени: %d\n",i,i*i*i);
	}*/



	/*int b;
	printf("Введите число b: ");
	scanf_s("%d", &b);

	for (int i =10; i <= b; i++)
	{
		printf("Квадрат числа %d равен= %d\n", i,i*i);
	}*/

	
	/*for (int i = 20; i <= 35; i++)
	{
		printf("%d\n",i);
	}*/


	/*int a;
	printf("Введите любое число: ");
	scanf_s("%d", &a);

	for (int i = 0; i <= a; i++)
	{
		printf("%d\n",a);
	}*/

	/*int a = 20;
	for (int i = 0; i <= a; i++)
	{
		printf("20");
	}*/



	/*int N, sum;
	sum = 0;
	do {
		printf("\nВведите натуральное число:");
		scanf_s("%d", &N);
	} while (N <= 0);
	while (N > 0) {
		sum += N % 10;
		N /= 10;
	}
	printf("Сумма цифр этого числа равна %d\n", sum);*/

	/*int number2 = 0;
	do
	{
		printf("Введите натуральное число: ");
		scanf_s("%d", &number2);
	} while (number2 <= 0);


	int number=0, count = 0;
	printf("Введите number: ");
	scanf_s("%d", &number);

	while (number>0)
	{
		number = number / 10;
		count++;
	}

	printf("Это число: %d count = %d", number, count);*/


	/*int N;
	int count = 0;
	printf("\nВведите число N: ");
	scanf_s("%d", &N);

	while (N > 0)
	{
		N /= 10;
		count++;
	}
	printf("В этом числе %d цифр\n", count);*/
	
	system("pause");
	getchar();
}



//void main()
//{
//	int a=0;
//	printf("Vvedite chislo: \n");
//	scanf_s("%d", &a);
//
//	for (int i = 0;i < a;i++)
//	{
//		printf("Kvadrat chisla %d raven %d\n",i,i*i);
//	}
//
//	system("pause");
//}