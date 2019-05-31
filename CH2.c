/* 例2-1 */
/*计算圆的面积*/
/*#define  PI  3.1415926
#include <stdio.h>
void main()
{
	float area, r;
	r = 5;
	area = PI * r * r;
	printf("area=%f\n", area);
}*/

/* 例2-2  */
/*交换两个变量的值*/
/*#include <stdio.h>
void main()
{
	int a, b;
	a = 3, b = 4;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d,b=%d", a, b);
}*/

/* 例2-3 */
/*前后缀运算*/
/*#include <stdio.h>
void main()
{
	int i = 2, j = 3;
	int k;
	k = (i++) + (++j) + 4;
	printf("result:k=%d,i=%d,j=%d", k, i, j);
}*/

/* 例2-6 */
/*逗号表达式*/
/*#include <stdio.h>
void main()
{
	int a = 2, b = 4, c = 6, x, y;
	y = ((x = a + b), (b + c));
	printf("x=%d,y=%d", x, y);
}*/

/* 例2-7 */
/*赋值类型自动转换*/
/*#include <stdio.h>
void main()
{
	int a;
	unsigned int b;
	long int c;
	unsigned long int d;
	a = 1, b = a, c = a, d = a;
	printf("a=%d,b=%u,c=%ld,d=%lu\n", a, b, c, d);
	a = -1, b = a, c = a, d = a;
	printf("a=%d,b=%u,c=%ld,d=%lu", a, b, c, d);
}*/

/* 例2-8 */
/*类型强制转换*/
/*#include <stdio.h>
void main()
{
	float x;
	int a, b;
	x = 20.7;
	a = 3;
	b = (int)x % a;
	printf("x=%f,a=%d,b=%d", x, a, b);
}*/