//#void������ 
//1.�Ժ������ص��޶� 
//2.�Ժ����������޶� 
//����������Ҫ����ֵֵʱ������ʹ��void�޶��������������˵�ĵ�һ����� 
//���磺void fun(int a,b) ���践�� 
//��������������ܲ���ʱ������ʹ��void�޶��������������˵�ĵڶ������ 
//���磺int func(void) ������ 

#include<stdio.h>
int add(int x,int y)
{
	return x+y;
}

void hello(void)  // �����Σ����践��; 
{
	printf("hello world!\n");
}

int main()
{
	int x=1;int y=2;
	hello();
	printf("add=%d",add(x,y));
	return 0;
}
