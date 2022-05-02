#include <stdio.h>
int main()
{
	int a=10;
	
	printf("a++=%d\n",a++); //后缀++的值是+1之前的值，先输出再+1
	printf("a=%d\n",a);
	
	int b=10;
	
	printf("++b=%d\n",++b); //前缀++的值是+1之后的值，先+1再输出
	printf("b=%d",b);
}
