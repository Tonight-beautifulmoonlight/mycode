#include <stdio.h>
#include <stdlib.h>

int main()
{
	int price = 0;
	int change = 0;
	printf("请输入金额：");
	scanf("%d", &price);

	change = 100 - price;
	printf("找零：%d\n", change);
	//getchar();
	return 0;
}
