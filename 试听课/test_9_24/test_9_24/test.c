#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=12; i++)
//	{
//		arr[i] = 0;
//		printf("hello\n");
//	}
//	//<C陷阱和缺陷>
//
//	return 0;
//}
//
//int main()
//{
//	int money = 0;
//	int total = 0;//总
//	int empty = 0;
//	scanf("%d", &money);//20
//	total = money*2-1;
//
//	/*total = money;
//	empty = money;
//	while(empty>=2)
//	{
//	total += empty/2;
//	empty = empty/2+empty%2;
//	}*/
//	printf("total = %d\n", total);
//	return 0;
//}
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if(strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}