//#void的作用 
//1.对函数返回的限定 
//2.对函数参数的限定 
//当函数不需要返回值值时，必须使用void限定，这就是我们所说的第一种情况 
//例如：void fun(int a,b) 不需返回 
//当函数不允许接受参数时，必须使用void限定，这就是我们所说的第二种情况 
//例如：int func(void) 不许传参 

#include<stdio.h>
int add(int x,int y)
{
	return x+y;
}

void hello(void)  // 不许传参，不需返回; 
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
