#define _CRT_SECURE_NO_WARNINGS 1

//【6-1】根据用户输入的数字求和
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

//【6-2】 For语句嵌套循环
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

//【6-3】依赖外部循环的For语句嵌套循环
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

//【6-4】使用For循环处理数组
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
		scanf("%lf", &num[index]);						//读取数组元素
	printf("The numbers read in are as follows:\n");
	for (index = 0; index < SIZE; index++)
		printf("%6.2lf", num[index]);					//验证输入的数组元素
	printf("\n");
	for (index = 0; index < SIZE; index++)
		sum += num[index];
	average = (double)sum / SIZE;
	printf("The numbers of average = %.2lf;\tsum = %.2lf\n", average, sum);
	return 0;
}

//【6-5】计算数的整数幂
#include<stdio.h>
double power(double n, int p);
int main(void)
{
	double x, xpow;
	int exp;

	printf("Enter a number and the positive integer power ");
	printf("to which\nthe number will be raised.Enter q");
	printf("to quit.\n");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("% .3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");
	return 0;
}

double power(double n, int p)
{
	double pow = 1;
	int i;

	for (i = 1; i <= p; i++)
		pow *= n;
	return pow;
}

//【6-6】用数组存储并打印26个字母
#include<stdio.h>
int main(void)
{
	int i, n;
	char ch[26];
	for (i = 0, n = 'a'; i < 26, n < 'a' + 26; i++)
	{
		ch[i] = n;
		n++;
	}
	for (i = 0; i < 26; i++)
		printf("%c", ch[i]);
	return 0;
}

//【6-7】使用嵌套循环打印字符
#include<stdio.h>
int main(void)
{
	int i;
	int n;
	for (i = 1; i < 6; i++)
	{
		for (n = 0; n < i; n++)
			printf("$");
		printf("\n");
	}
	return 0;
}

//该程序打印格式如下：
//$
//$$
//$$$
//$$$$
//$$$$$


//【6-8】使用嵌套循环打印字母
#include<stdio.h>
int main(void)
{
	int i;
	char ch;
	for (i = 0; i < 6; i++)
	{
		for (ch = 'F'; ch >= ('F' - i); ch--)
			printf("%c", ch);
	printf("\n");
	}
	return 0;
}

//该程序打印格式如下：
//F
//FE
//FED
//FEDC
//FEDCB
//FEDCBA

//【6-9】使用嵌套循环打印指定格式的字符
方法一：
 #include<stdio.h>
int main(void)
{
	int i, n;
	int sum = 0;
	char ch;

	for (i = 1; i <= 6; i++)
	{
		for (n = 0; n < i; n++)
		{
			for (ch = ('A' + sum); ch <= ('A' + sum); ch++)
				printf("%c", ch);
			sum++;
		}
	printf("\n");
	}
	return 0;
}

//方法二：
#include<stdio.h>
int main(void)
{
	int i, j;
	char ch = 'A';

	for (i = 1; i <= 6; i++)
	{
		for (j = 0; j < i; j++, ch++)
			printf("%c", ch);
	printf("\n");
	}
	return 0;
}

//该程序打印格式如下：
//A
//BC
//DEF
//GHIJ
//KLMNO
//PQRSTU

//【6-10】使用嵌套循环打印指定格式的字符
#include<stdio.h>
int main(void)
{
	int i, j, num;
	char c;
	char ch = 'A';

	printf("Please enter the core char you want to print(A...Z):");
	scanf("%c", &c);
	num = c - 'A' + 1;
	for (i = 1; i <= num; i++)
	{
		for (j = 0; j < num - i; j++)
			printf(" ");
		for (ch = 'A'; j < num; j++)
			printf("%c", ch++);
		for (j = 1, ch -= 2; j < i; j++, ch--)
			printf("%c", ch);
		printf("\n");
	}
	return 0;
}
