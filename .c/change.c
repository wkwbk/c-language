#include <stdio.h>
int main()
{
	//初始化
	int bill=0;
	int price=0;
	//读入金额和票面
	printf("请输入金额（元）：");
	scanf("%d",&price);
	printf("请输入票面（元）：");
	scanf("%d",&bill);
	//计算找零
	if(bill>=price){
		printf("找您%d元\n",bill-price);//TODO
	} else{
		printf("您还需要付%d\n",price-bill);
	}	
}
