// �� 1.7 //
/*�����������ĺ�*/
//#include <stdio.h>  /*�ļ���������*/
/*
void main()
{
	int a, b, sum;
	a = 3;
	b = 4;
	sum = a + b;
	printf("sum=%d\n", sum);
}*/

// ��1.8 //
/*ʹ�ú����������ĺ�*/
/*
#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
int add(int x, int  y)
{
	//x,y�������β�//
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

