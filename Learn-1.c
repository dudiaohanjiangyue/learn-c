#define _CRT_SECURE_NO_WARNINGS 1

////��5-2�� ��ӡ����������ʼ���ȸ�������10����������
//#include<stdio.h>
//
//int main(void)
//{
//	int num = 0;
//	int i = 0;
//
//	printf("Please enter a number:");
//	scanf("%d", &num);
//	while (i++ <= 10)
//	{
//		printf("%d\n", num);
//		num++;
//	}
//	return 0;
//}

//#include<stdio.h>
//#define m_to_h 60
////��5-1�� ������ת��ΪСʱ�ͷ���
//int main(void)
//{
//	int min = 0;
//	int hour = 0;
//	
//	printf("This program converts minutes to hours and minutes\n");
//	printf("Just enter the number of seconds:");
//	scanf("%d", &min);
//	while (min > 0)
//	{
//		printf("%d min is", min);
//		hour = min / m_to_h;
//		min = min % m_to_h;
//		printf(" %d hour, %dmin.\n", hour, min);
//		printf("Just enter the number of seconds or enter 0 to end the program:");
//		scanf("%d", &min);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<float.h>
//
//int main(void)
//{
//	////������5-1�� ��ӡ1-20��ƽ��
//	//int num = 1;
//
//	//while (num < 21)
//	//{
//	//	printf("%d	%d\n", num, num * num);
//	//	num = num + 1;
//	//}
//	//return 0;
//	
//	////������5-8�� ������ʻ��̵ļ���
//	//float s = 0;
//	//float l = 0;
//	//float fuel = 0;
//	//const float jia_l = 3.785;
//	//const float yingli_km = 1.609;
//
//	//printf("�����������ε���ʻ��̣�Ӣ���");
//	//scanf("%f", &s);
//	//printf("�����������εĺ����������أ���");
//	//scanf("%f", &l);
//	//fuel = s / l;
//	//printf("������ƽ��ÿ����������ʻ�����Ϊ��%.2fӢ��\n", fuel);
//	//fuel = (s * yingli_km) / (l * jia_l);
//	//printf("������ƽ��ÿ��������ʻ�����Ϊ��%.2f����\n", fuel);
//	//return 0;
//
//	////������5-7�� �����Ⱥ�˫���ȸ������ĸ�ʽ��ʾ	
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
//	////������5-6�� ���̶���ʽ��������������ַ�����
//	//char fname[40];
//	//char lname[40];
//
//	//printf("�����������գ�");
//	//scanf("%s", fname);
//	//printf("��������������");
//	//scanf("%s", lname);
//	//printf("%6s	%8s\n", fname, lname);
//	//printf("%6d	%8d\n", strlen(fname), strlen(lname));
//	//printf("%s	%s\n", fname, lname);
//	//printf("%-d	%-d\n", strlen(fname), strlen(lname));
//	//return 0;
//
//
//	////������4-5�� �����ļ��������ٶ�
//	//float v = 0;
//	//float f = 0;
//	//float t = 0;
//
//	//printf("*�����ļ�������ʱ��*");
//	//printf("����������ǰ�������ٶȣ�");
//	//scanf("%f", &v);
//	//printf("���������������ص��ļ���С��");
//	//scanf("%f", &f);
//	//t = f / (v / 8);
//	//printf("����Ԥ������ʱ��Ϊ��%.2f\n", t);
//	//return 0;
//
//	////������4-4�� ���벢����û��������Ͷ�Ӧ�����
//	//char name[5];
//	//float height = 0;
//
//	//printf("����������������");
//	//scanf("%s", name);
//	//printf("������������ߣ�cm����");
//	//scanf("%f", &height);
//	//printf("%s, you are %.2f cm feet tall\n", name, height);
//	//return 0;
//
//	////������4-3�� ���������������
//	//float a = 0;
//	//
//	//printf("������һ����������");
//	//scanf("%f", &a);
//	//printf("a = %f or a = %e\n", a, a);
//	//return 0;
//	
//	////������4-2�� ����̶���ʽ������
//	//char name[40];
//
//	//printf("����������������");
//	//scanf("%s", name);
//	//printf("��������Ϊ����%s��\n", name);
//	//printf("��������Ϊ����%20s��\n", name);
//	//printf("��������Ϊ����%-20s��\n", name);
//	//printf("��������Ϊ����%7s��\n", name);
//	//return 0;
//
//	////������4-1�� �������������
//	//char firstname[40];
//	//char lastname[40];
//
//	//printf("�����������գ�");
//	//scanf("%s", firstname);
//	//printf("��������������");
//	//scanf("%s", lastname);
//	//printf("��������Ϊ��%s%s\n", firstname, lastname);
//	//return 0;
//	
//	////������3-5�� �����������С����ʽ��ָ����ʽ��P��������ʽ
//	//float point = 0;
//	//printf("������һ����������");
//	//scanf("%f", &point);
//	//printf("С����ʽ��%f\n", point);
//	//printf("ָ����ʽ��%e\n", point);
//	//printf("P��������ʽ��%.2a\n", point);
//	//return 0;
//	
//	////������3-4�� �������������λ����ת��
//	//int cup = 0;
//	//int pint = 0;
//	//int ounce = 0;
//	//int large_spoonful = 0;
//	//int teaspoon = 0;
//
//	//printf("�����뱭����");
//	//scanf("%d", &cup);
//	//pint = cup / 2;
//	//ounce = 8 * cup;
//	//large_spoonful = 2 * ounce;
//	//teaspoon = 3 * large_spoonful;
//	//printf("%dcup = %dpint = %dounce = %dlarge_spoonful = %dteaspoon\n", cup, pint, ounce, large_spoonful, teaspoon);
//	//return 0;
//
//	////������3-3�� ʮ���ơ��˽��ơ�ʮ�����Ƶ������ʽ
//	//int a = 44;				//ʮ����
//	//int b = 044;				//�˽���
//	//int c = 0x44;				//ʮ������
//	//
//	//printf("%d\t%d\t%#o\t%d\t%#x\n", a, b, b, c, c);
//	//return 0;
//	
//	////������3-2�� ��������������͵��ֽڴ�С����
//	//printf("char�������͵��ֽڴ�С=%d\n", sizeof(char));
//	//printf("short�������͵��ֽڴ�С=%d\n", sizeof(short));
//	//printf("int�������͵��ֽڴ�С=%d\n", sizeof(int));
//	//printf("long�������͵��ֽڴ�С=%d\n", sizeof(long));
//	//printf("long long�������͵��ֽڴ�С=%d\n", sizeof(long long));
//	//printf("float�������͵��ֽڴ�С=%d\n", sizeof(float));
//	//printf("double�������͵��ֽڴ�С=%d\n", sizeof(double));
//	//printf("long float�������͵��ֽڴ�С=%d\n", sizeof(long float));
//	//printf("long double�������͵��ֽڴ�С=%d\n", sizeof(long double));
//	//return 0;
//	
//	////������3-1�� �ַ���ASCII��ֵ�Ļ���ת��
//	//int i = 0;			//ѡ��ģʽ����
//	//char z_m = 0;		//���������ַ�
//	//int m_z = 0;		//��������ASCIIֵ
//
//	//printf("��ѡ��ת��ģʽ\n");
//	//printf("�ַ�ת��ΪASCII��������1\n");
//	//printf("ASCII��ת��Ϊ�ַ�������2\n");
//	//printf("��ѡ��ת��ģʽ��");
//	//scanf("%d", &i);
//	//if (i == 1)
//	//{
//	//	printf("��������Ҫת�����ַ���");
//	//	getchar();
//	//	scanf("%c", &z_m);
//	//	printf("�ַ�%c��ASCII��ֵΪ��%d", z_m, z_m);
//	//}
//	//else
//	//	printf("��������Ҫת����ASCII��ֵ��");
//	//scanf("%d", &m_z);
//	//printf("ASCIIֵ%d��Ӧ���ַ�Ϊ��%c", m_z, m_z);
//	//return 0;
//
//	//������1-1��	��Ӣ��ת��Ϊ����
//	//double inch_l = 0;
//	//double centimeter_l = 0;
//
//	//printf("��������Ӣ��Ϊ��λ�ĳ�����ֵ��");
//	//scanf("%lf", &inch_l);
//	//centimeter_l = 2.54 * inch_l;
//	//printf("%.2lfӢ�� = %.2lf����\n",inch_l,centimeter_l);
//	//return 0;
//}