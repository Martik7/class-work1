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
		printf("������� ������������: %d\n", i*ft);
	}



	/*float a = 20.4;
	for (int i = 2; i <= 20; i++)
	{
		printf("������� ���������: %f\n", i*a);
	}*/



	/*setlocale(LC_ALL, "");
	int a, b;
	printf("������� ����� �= ");
	scanf_s("%d", &a);
	printf("������� ����� b= ");
	scanf_s("%d", &b);

	for (a; a<= b; a++)
	{
		printf("�� a �� b= %d\n",a);
	}*/

	/*int a;
	printf("������� ����� �= ");
	scanf_s("%d", &a);
	
	for (int i = a; i <= 50; i++)
	{
		printf("����� ��� �������: %d, � �������: %d\n",i,i*i*i);
	}*/



	/*int b;
	printf("������� ����� b: ");
	scanf_s("%d", &b);

	for (int i =10; i <= b; i++)
	{
		printf("������� ����� %d �����= %d\n", i,i*i);
	}*/

	
	/*for (int i = 20; i <= 35; i++)
	{
		printf("%d\n",i);
	}*/


	/*int a;
	printf("������� ����� �����: ");
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
		printf("\n������� ����������� �����:");
		scanf_s("%d", &N);
	} while (N <= 0);
	while (N > 0) {
		sum += N % 10;
		N /= 10;
	}
	printf("����� ���� ����� ����� ����� %d\n", sum);*/

	/*int number2 = 0;
	do
	{
		printf("������� ����������� �����: ");
		scanf_s("%d", &number2);
	} while (number2 <= 0);


	int number=0, count = 0;
	printf("������� number: ");
	scanf_s("%d", &number);

	while (number>0)
	{
		number = number / 10;
		count++;
	}

	printf("��� �����: %d count = %d", number, count);*/


	/*int N;
	int count = 0;
	printf("\n������� ����� N: ");
	scanf_s("%d", &N);

	while (N > 0)
	{
		N /= 10;
		count++;
	}
	printf("� ���� ����� %d ����\n", count);*/
	
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