#define _CRT_SECURE_NO_WARNINGS 1

//【5-9】 华氏温度、摄氏温度和开氏温度的转换
#include<stdio.h>
void Temperatures(double h_temp);
void Temperatures(double h_temp)
{
	const double htos = 5.0 / 9.0;
	const double htok = 273.16;
	double s_temp = 0;
	double k_temp = 0;
	s_temp = htos * (h_temp - 32.0);
	k_temp = h_temp + htok;
	printf("fahrenheit temperature:%lf\tcelsius temperature:%lf\tkelvin temperature:%lf\n", h_temp, s_temp, k_temp);
	return 0;
}
int main(void)
{
	double h_temp = 0;

	printf("Please enter the fahrenheit temperature:");
	while (scanf("%lf", &h_temp) == 1)
	{
		Temperatures(h_temp);
		printf("Please enter a fahrenheit temperature or enter non-numeric to end the program:");
	}
	printf("bye!\n");
	return 0;
}

//【5-8】 取模运算
#include<stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	printf("This program computes moduli.\n");
	printf("Please enter an integer to serve as the second operand:");
	scanf("%d", &b);
	printf("Enter the first operand:");
	scanf("%d", &a);
	while (a != 0)
	{
		c = a % b;
		printf("%d %% %d is %d\n", a, b, c);
		printf("Please enter a first operand or enter 0 to end the program:");
		scanf("%d", &a);
	}
	return 0;
}

//【5-7】 计算一个数的立方
#include<stdio.h>
double cub(double);
int main(void)
{
	double a = 0;
	double cube = 0;
	printf("Please enter a number:");
	scanf("%lf", &a);
	printf("The cube of %lf = %lf\n", a, cub(a));
	return 0;
}
double cub(double n)
{
	double cub;
	cub = n * n * n;
	return cub;
}

//【5-6】 计算从1至输入数字平方的和
#include<stdio.h>

int main(void)
{
	int a = 0;
	int i = 1;
	int sum = 1;
	
	printf("Please enter a number:");
	scanf("%d", &a);
	while (i++ < a)
	{
		sum = sum + i*i;
	}
	printf("%d\n", sum);
	return 0;
}

//【5-5】 计算从1至输入数字的整数和
#include<stdio.h>

int main(void)
{
	int a = 0;
	int i = 1;
	int sum = 1;
	
	printf("Please enter a number:");
	scanf("%d", &a);
	while (i++ < a)
	{
		sum = sum + i;
	}
	printf("%d\n", sum);
	return 0;
}

//【5-4】 将用户以厘米为单位的身高转化为英尺和英寸显示
#include<stdio.h>
#define m_to_i 0.39370
#define m_to_f 0.03280
int main(void)
{
	float m_height = 0;
	float f_height = 0;
	float i_height = 0;
	printf("Please enter the number of your height(centimeter:000.00):");
	scanf("%f", &m_height);
	while (m_height > 0)
	{
		printf("Your height is:\n");
		f_height = m_height * m_to_f;
		i_height = m_height * m_to_i;
		printf("%.2f cm = %.2f feet = %.2f inches\n",m_height, i_height, f_height);
		printf("centimeter height:%.2f\tfeet height:%.2f\tinch height:%.2f\n", m_height, f_height, i_height);
		printf("Please enter a new number of height(centimeter:000.00) or enter 0 to end the program:");
		scanf("%f", &m_height);
	}
	printf("bye!");
	return 0;
}

//【5-3】 将天数转化为周数加天数
#include<stdio.h>
#define d_to_w 7

int main(void)
{
	int days = 0;
	int weeks = 0;

	printf("This program converts days to weeks and days\n");
	printf("Please enter the number of days:");
	scanf("%d", &days);
	while (days > 0)
	{
		printf("%d days is ", days);
		weeks = days / d_to_w;
		days = days % d_to_w;
		printf("%d weeks, %d days.\n", weeks, days);
		printf("Please enter a new number of days or enter 0 to end the program:");
		scanf("%d", &days);
	}
	return 0;
}

//【5-2】 打印从输入数开始到比该数大于10的所有整数
#include<stdio.h>

int main(void)
{
	int num = 0;
	int i = 0;

	printf("Please enter a number:");
	scanf("%d", &num);
	while (i++ <= 10)
	{
		printf("%d\n", num);
		num++;
	}
	return 0;
}

//【5-1】 将分钟转化为小时和分钟
#include<stdio.h>
#define m_to_h 60
int main(void)
{
	int min = 0;
	int hour = 0;
	
	printf("This program converts minutes to hours and minutes\n");
	printf("Just enter the number of seconds:");
	scanf("%d", &min);
	while (min > 0)
	{
		printf("%d min is", min);
		hour = min / m_to_h;
		min = min % m_to_h;
		printf(" %d hour, %dmin.\n", hour, min);
		printf("Just enter the number of seconds or enter 0 to end the program:");
		scanf（“%d”， &min）;
	}
	return 0;
}
