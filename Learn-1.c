#define _CRT_SECURE_NO_WARNINGS 1

【5-3】 打印从输入数开始到比该数大于10的所有整数
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

【5-2】 将分钟转化为小时和分钟
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
		scanf("%d", &min);
	}
	return 0;
}

【程序5-1】 打印1-20的平方
#include<stdio.h>
#include<string.h>
#include<float.h>

int main(void)
{
  int num = 1;

	while (num < 21)
	{
		printf("%d	%d\n", num, num * num);
		num = num + 1;
	}
return 0;
}
	
//	////【程序5-8】 汽车行驶里程的计算
//	//float s = 0;
//	//float l = 0;
//	//float fuel = 0;
//	//const float jia_l = 3.785;
//	//const float yingli_km = 1.609;
//
//	//printf("请输入您本次的行驶里程（英里）：");
//	//scanf("%f", &s);
//	//printf("请输入您本次的耗油量（加仑）：");
//	//scanf("%f", &l);
//	//fuel = s / l;
//	//printf("您本次平均每加仑汽油行驶的里程为：%.2f英里\n", fuel);
//	//fuel = (s * yingli_km) / (l * jia_l);
//	//printf("您本次平均每升汽油行驶的里程为：%.2f公里\n", fuel);
//	//return 0;
//
//	////【程序5-7】 单精度和双精度浮点数的格式显示	
//	//float ot_f = 1.0 / 3.0;
//	//double ot_d = 1.0 / 3.0;
//
//	//printf(" float values: ");
//	//printf("%.4f %.12f %.16f\n", ot_f, ot_f, ot_f);
//	//printf("double values: ");
//	//printf("%.4f %.12f %.16f\n", ot_d, ot_d, ot_d);
//	//printf("FLT_DIG: %d\n", FLT_DIG);
//	//printf("DBL_DIG: %d\n", DBL_DIG);
//	//return 0;
//	
//	////【程序5-6】 按固定格式输入输出姓名和字符长度
//	//char fname[40];
//	//char lname[40];
//
//	//printf("请输入您的姓：");
//	//scanf("%s", fname);
//	//printf("请输入您的名：");
//	//scanf("%s", lname);
//	//printf("%6s	%8s\n", fname, lname);
//	//printf("%6d	%8d\n", strlen(fname), strlen(lname));
//	//printf("%s	%s\n", fname, lname);
//	//printf("%-d	%-d\n", strlen(fname), strlen(lname));
//	//return 0;
//
//
//	////【程序4-5】 计算文件的下载速度
//	//float v = 0;
//	//float f = 0;
//	//float t = 0;
//
//	//printf("*计算文件的下载时间*");
//	//printf("请输入您当前的下载速度：");
//	//scanf("%f", &v);
//	//printf("请输入您当期下载的文件大小：");
//	//scanf("%f", &f);
//	//t = f / (v / 8);
//	//printf("您的预计下载时间为：%.2f\n", t);
//	//return 0;
//
//	////【程序4-4】 输入并输出用户的姓名和对应的身高
//	//char name[5];
//	//float height = 0;
//
//	//printf("请输入您的姓名：");
//	//scanf("%s", name);
//	//printf("请输入您的身高（cm）：");
//	//scanf("%f", &height);
//	//printf("%s, you are %.2f cm feet tall\n", name, height);
//	//return 0;
//
//	////【程序4-3】 浮点数的输入输出
//	//float a = 0;
//	//
//	//printf("请输入一个浮点数：");
//	//scanf("%f", &a);
//	//printf("a = %f or a = %e\n", a, a);
//	//return 0;
//	
//	////【程序4-2】 输出固定格式的姓名
//	//char name[40];
//
//	//printf("请输入您的姓名：");
//	//scanf("%s", name);
//	//printf("您的姓名为：“%s”\n", name);
//	//printf("您的姓名为：“%20s”\n", name);
//	//printf("您的姓名为：“%-20s”\n", name);
//	//printf("您的姓名为：“%7s”\n", name);
//	//return 0;
//
//	////【程序4-1】 姓名的输入输出
//	//char firstname[40];
//	//char lastname[40];
//
//	//printf("请输入您的姓：");
//	//scanf("%s", firstname);
//	//printf("请输入您的名：");
//	//scanf("%s", lastname);
//	//printf("您的姓名为：%s%s\n", firstname, lastname);
//	//return 0;
//	
//	////【程序3-5】 输出浮点数的小数形式、指数形式和P计数法形式
//	//float point = 0;
//	//printf("请输入一个浮点数：");
//	//scanf("%f", &point);
//	//printf("小数形式：%f\n", point);
//	//printf("指数形式：%e\n", point);
//	//printf("P计数法形式：%.2a\n", point);
//	//return 0;
//	
//	////【程序3-4】 美国体积测量单位互相转换
//	//int cup = 0;
//	//int pint = 0;
//	//int ounce = 0;
//	//int large_spoonful = 0;
//	//int teaspoon = 0;
//
//	//printf("请输入杯数：");
//	//scanf("%d", &cup);
//	//pint = cup / 2;
//	//ounce = 8 * cup;
//	//large_spoonful = 2 * ounce;
//	//teaspoon = 3 * large_spoonful;
//	//printf("%dcup = %dpint = %dounce = %dlarge_spoonful = %dteaspoon\n", cup, pint, ounce, large_spoonful, teaspoon);
//	//return 0;
//
//	////【程序3-3】 十进制、八进制、十六进制的输出格式
//	//int a = 44;				//十进制
//	//int b = 044;				//八进制
//	//int c = 0x44;				//十六进制
//	//
//	//printf("%d\t%d\t%#o\t%d\t%#x\n", a, b, b, c, c);
//	//return 0;
//	
//	////【程序3-2】 计算机中数据类型的字节大小计算
//	//printf("char数据类型的字节大小=%d\n", sizeof(char));
//	//printf("short数据类型的字节大小=%d\n", sizeof(short));
//	//printf("int数据类型的字节大小=%d\n", sizeof(int));
//	//printf("long数据类型的字节大小=%d\n", sizeof(long));
//	//printf("long long数据类型的字节大小=%d\n", sizeof(long long));
//	//printf("float数据类型的字节大小=%d\n", sizeof(float));
//	//printf("double数据类型的字节大小=%d\n", sizeof(double));
//	//printf("long float数据类型的字节大小=%d\n", sizeof(long float));
//	//printf("long double数据类型的字节大小=%d\n", sizeof(long double));
//	//return 0;
//	
//	////【程序3-1】 字符与ASCII码值的互相转换
//	//int i = 0;			//选择模式变量
//	//char z_m = 0;		//存放输入的字符
//	//int m_z = 0;		//存放输入的ASCII值
//
//	//printf("请选择转换模式\n");
//	//printf("字符转换为ASCII码请输入1\n");
//	//printf("ASCII码转换为字符请输入2\n");
//	//printf("请选择转换模式：");
//	//scanf("%d", &i);
//	//if (i == 1)
//	//{
//	//	printf("请输入需要转换的字符：");
//	//	getchar();
//	//	scanf("%c", &z_m);
//	//	printf("字符%c的ASCII码值为：%d", z_m, z_m);
//	//}
//	//else
//	//	printf("请输入需要转换的ASCII码值：");
//	//scanf("%d", &m_z);
//	//printf("ASCII值%d对应的字符为：%c", m_z, m_z);
//	//return 0;
//
//	//【程序1-1】	将英寸转换为厘米
//	//double inch_l = 0;
//	//double centimeter_l = 0;
//
//	//printf("请输入以英寸为单位的长度数值：");
//	//scanf("%lf", &inch_l);
//	//centimeter_l = 2.54 * inch_l;
//	//printf("%.2lf英寸 = %.2lf厘米\n",inch_l,centimeter_l);
//	//return 0;
//}
