/* ��2-1 */
/*����Բ�����*/
/*#define  PI  3.1415926
#include <stdio.h>
void main()
{
	float area, r;
	r = 5;
	area = PI * r * r;
	printf("area=%f\n", area);
}*/

/* ��2-2  */
/*��������������ֵ*/
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

/* ��2-3 */
/*ǰ��׺����*/
/*#include <stdio.h>
void main()
{
	int i = 2, j = 3;
	int k;
	k = (i++) + (++j) + 4;
	printf("result:k=%d,i=%d,j=%d", k, i, j);
}*/

/* ��2-6 */
/*���ű��ʽ*/
/*#include <stdio.h>
void main()
{
	int a = 2, b = 4, c = 6, x, y;
	y = ((x = a + b), (b + c));
	printf("x=%d,y=%d", x, y);
}*/

/* ��2-7 */
/*��ֵ�����Զ�ת��*/
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

/* ��2-8 */
/*����ǿ��ת��*/
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