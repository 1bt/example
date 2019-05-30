// 例 1.7 //
/*求两个整数的和*/
//#include <stdio.h>  /*文件包含命令*/
/*
void main()
{
	int a, b, sum;
	a = 3;
	b = 4;
	sum = a + b;
	printf("sum=%d\n", sum);
}*/

// 例1.8 //
/*使用函数求两数的和*/
/*
#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
int add(int x, int  y)
{
	//x,y变量是形参//
	int t;
	t = x + y;
	return(t);
}
void main()
{
	int a, b, sum;
	scanf_s("%d%d", &a, &b);//C6031
	sum = add(a, b);
	printf("sum=%d", sum);
}*/

