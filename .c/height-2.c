#include <stdio.h>
int main()
{
	printf("请分别输入身高的英尺和英寸，如输入\"5 7\"表示5英尺7英寸：");
	
	double foot;
	double inch;
	
	scanf("%lf %lf",&foot,&inch); //变量类型为double，所以输入格式字符为%lf
	
	printf("身高是%lf米。\n",((foot+inch/12)*0.3048));
}
