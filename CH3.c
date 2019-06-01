/* 例3-1 */
/*c语言举例*/
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

/* 例3-2 */
/*计算x的面积*/
/*#include <stdio.h>
#include <math.h>
void main()
{
	float x, y;
	x = 1, 5;
	y = sin(x);
	printf("%f\n", y);
}*/

/* 例3-3 */
/*格式修饰符顺序举例*/
/*#include <stdio.h>
void main()
{
	double x = 123.456;
	long int a = -1, b = 123;
	printf("%#15lo\n", a);
	printf("%08ld\n", b);
	printf("%-8.2lf\n", x);
}*/

/* 例3-4 */
/*格式输入函数的应用*/
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
	scanf("%f,%e,%lf"， & x, &y, &z);
	printf("x=%f,y=%f,z=%lf\n", x, y, z);
	fflush(stdin);
	scanf("%c%c", ch1, ch2);
	printf("%c%c", ch1, ch2);
}*/

/* 例3-5 */
/*已知圆柱体的底面半径和高，求圆柱体的体积*/
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

/* 例3-6 */
/*交换器*/
/*#include <stdio.h>
void main()
{
	int a, b, t;
	printf("请输入两个整数：\n");
	scanf_s("%d%d", &a, &b);
	printf("交换前a=%d,b=%d\n", a, b);
	t = a; a = b; b = t;
	printf("交换后a=%d,b=%d\n", a, b);
}*/

/* 例3-7 */
/*已知三角形的三边长，求三角形的面积*/
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