#include <stdio.h>
int main()
{
	int hour1,miunte1;
	int hour2,miunte2;
	
	scanf("%d %d",&hour1,&miunte1);
	scanf("%d %d",&hour2,&miunte2);
	
	int ih = hour2 - hour1;
	int im = miunte2 - miunte1;
	//如果im小于0成立则运行{}里面的语句，不成立则直接跳过
	if(im<0){
		im = 60 + im;
		ih --;//TODO
	}
	
	printf("时间差是%d小时%d分",ih,im);
}
