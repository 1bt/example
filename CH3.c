/* ��3-1 */
/*c���Ծ���*/
/*#include <stdio.h>
#include <math.h>
void main()
{
	float x, y;
	scanf_s("%f", &x);
	if (x < 0)
	{
		x = -x;
		y = sqrt(x + 6);		
	}
	else
	{
		y = 1;
	}
	printf("y=%f", y);
}*/

/* ��3-2 */
/*����x�����*/
/*#include <stdio.h>
#include <math.h>
void main()
{
	float x, y;
	x = 1, 5;
	y = sin(x);
	printf("%f\n", y);
}*/

/* ��3-3 */
/*��ʽ���η�˳�����*/
/*#include <stdio.h>
void main()
{
	double x = 123.456;
	long int a = -1, b = 123;
	printf("%#15lo\n", a);
	printf("%08ld\n", b);
	printf("%-8.2lf\n", x);
}*/

/* ��3-4 */
/*��ʽ���뺯����Ӧ��*/
/*#include <stdio.h>
void main()
{
	int a, b, m, n;
	long c;
	float x, y;
	double z;
	char ch1, ch2;
	scanf_s("%d,%d,%ld", &a, &b, &c);
	printf("a=%d,b=%d,c=%ld\n", a, b, c);
	fflush(stdin);
	scanf_s("%2d%*2d%3d", &m, &n);
	printf("m=%d,n=%d\n", m, n);
	fflush(stdin);
	scanf("%f,%e,%lf"�� & x, &y, &z);
	printf("x=%f,y=%f,z=%lf\n", x, y, z);
	fflush(stdin);
	scanf("%c%c", ch1, ch2);
	printf("%c%c", ch1, ch2);
}*/

/* ��3-5 */
/*��֪Բ����ĵ���뾶�͸ߣ���Բ��������*/
/*#include <stdio.h>
#define PI 3.1415926
void main()
{
	float r, h, v;
	printf("input r h:\n");
	scanf_s("%f%f", &r, &h);
	v = PI * r * r * h;
	printf("v=%.3f\n", v);
}*/

/* ��3-6 */
/*������*/
/*#include <stdio.h>
void main()
{
	int a, b, t;
	printf("����������������\n");
	scanf_s("%d%d", &a, &b);
	printf("����ǰa=%d,b=%d\n", a, b);
	t = a; a = b; b = t;
	printf("������a=%d,b=%d\n", a, b);
}*/

/* ��3-7 */
/*��֪�����ε����߳����������ε����*/
#include <stdio.h>
#include <math.h>
void main()
{
	float a, b, c;
	float t, s;
	scanf_s("%f%f%f", &a, &b, &c);
	t = (a + b + c) / 2;
	s = sqrt(t * (t - a) * (t - b) * (t - c));
	printf("s=%.3f", s);
}