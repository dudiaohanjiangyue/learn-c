#define _CRT_SECURE_NO_WARNINGS 1

//��6-1�������û�������������
#include<stdio.h>
int main(void)
{
	double num_1 = 0;
	double num_2 = 0;
	double sum = 0;
	printf("Please enter the first number and second number:\n");
	while (scanf("%lf%lf", &num_1, &num_2) == 2)
	{
		sum = num_1 + num_2;
		printf("%.2lf\n", sum);
		printf("Enter a non-numeric to end the program or "
			"enter the first number and second number to continue:\n");
	}
	return 0;
}

//��6-2�� For���Ƕ��ѭ��
#include<stdio.h>
int main(void)
{
	int x, y;
	int row;
	char ch;
	printf("Please enter the rows:\n");
	scanf("%d", &row);
	printf("Please enter the number of chars:\n");
	scanf("%d", &y);
	for (x = 0; x <= row; x++)
	{
		for (ch = 'A'; ch < 'A' + y; ch++)
			printf("%c", ch);
		printf("\n");
	}
	return 0;
}

//��6-3�������ⲿѭ����For���Ƕ��ѭ��
#include<stdio.h>
int main(void)
{
	int x, y;
	int row;
	char ch;
	printf("Please enter the rows:\n");
	scanf("%d", &row);
	printf("Please enter the number of chars:\n");
	scanf("%d", &y);
	for (x = 0; x <= row; x++)
	{
		for (ch = ('A' + x ); ch < ('A' + y); ch++)
			printf("%c", ch);
		printf("\n");
	}
	return 0;
}

//��5-4��ʹ��Forѭ����������
#include<stdio.h>
#define SIZE 10
int main(void)
{
	int index;
	double num[SIZE];
	double average = 0;
	double sum = 0;
	printf("Please enter %d numbers:\n", SIZE);
	for (index = 0; index < SIZE; index++)
		scanf("%lf", &num[index]);						//��ȡ����Ԫ��
	printf("The numbers read in are as follows:\n");
	for (index = 0; index < SIZE; index++)
		printf("%6.2lf", num[index]);					//��֤���������Ԫ��
	printf("\n");
	for (index = 0; index < SIZE; index++)
		sum += num[index];
	average = (double)sum / SIZE;
	printf("The numbers of average = %.2lf;\tsum = %.2lf\n", average, sum);
	return 0;
}