#include <stdio.h>
int main()
{
	int hour1,miunte1;
	int hour2,miunte2;
	
	scanf("%d %d",&hour1,&miunte1);
	scanf("%d %d",&hour2,&miunte2);
	
	int t1=hour1*60+miunte1;
	int t2=hour2*60+miunte2;
	
	int t=t2-t1;
	
	printf("时间差是%d小时%d分",t/60,t%60);
}
