#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4,5,7};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for(j=0; j<sz; j++)
//		{
//			if(arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if(count == 1)
//		{
//			printf("%d\n", arr[i]);
//		}
//	}
//
//	return 0;
//}

#include<stdio.h>
#include<time.h>
#include<windows.h>
//数字雨
typedef struct
{
	int x, y;
	char ch;
}STU;
STU st[5000];
//出现位置
void gotoxy(int x, int y)
{
	HANDLE hout;
	COORD pos;
	pos.X = x;
	pos.Y = y;
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hout, pos);
}


/*隐藏光标*/
void show_cursor(int hide)
{
	CONSOLE_CURSOR_INFO cciCursor;
	HANDLE hout;
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
	if (GetConsoleCursorInfo(hout, &cciCursor))
	{
		cciCursor.bVisible = hide;
		SetConsoleCursorInfo(hout, &cciCursor);
	}
}
/*设置颜色*/
void set_color(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main()
{
	int i, j;
	show_cursor(0);
	srand(time(NULL));
	//初始化结构体
	for (i = 0; i < 100; i++)
	{
		st[i].x = rand() % 80;
		st[i].y = rand() % 20;
		st[i].ch = rand() % (49 - 47) + 48;
	}
	while (1)
	{
		for (i = 0; i < 100; i++)
		{
			gotoxy(st[i].x, st[i].y);
			set_color(0x2);
			putchar(st[i].ch);
			gotoxy(st[i].x, st[i].y - 5);
			putchar(' ');
			st[i].y++;
			st[i].ch = rand() % (49 - 29) + 48;
			if (st[i].y - 5 >= 18)
			{
				gotoxy(st[i].x, st[i].y - 1);
				putchar(' ');
				gotoxy(st[i].x, st[i].y - 2);
				putchar(' ');
				gotoxy(st[i].x, st[i].y - 3);
				putchar(' ');
				gotoxy(st[i].x, st[i].y - 4);
				putchar(' ');
				gotoxy(st[i].x, st[i].y - 4);
				putchar(' ');
			}
			if (st[i].y > 23)
			{
				st[i].x = rand() % 80;
				st[i].y = rand() % 20;
			}
			gotoxy(st[i].x, st[i].y);
			set_color(0xA);
			putchar(st[i].ch);
		}
		Sleep(20);
	}
}




//
//int main()
//{
//	int num1 = 2147483646;//2147483646
//	int num2 = 2147483646;
//
//	//int avg = (num1+num2)/2;
//	//int avg = num1/2+num2/2;
//	int avg = num1 + (num2-num1)/2;
//
//	//3/2=1
//	//5/2=2
//	//4
//
//	printf("avg = %d\n", avg);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=1000; i++)
//	{
//		int sum = 0;
//		//判断i是否为完数
//		//1. 找出i的所有因子，然后加起来
//		int j = 0;
//		for(j=1; j<=i/2; j++)
//		{
//			if(i%j == 0)
//			{
//				sum += j;
//				//printf("%d + ", j);
//			}
//		}
//		//2. 判断因子和是否等i
//		if(sum == i)
//			printf(" = %d\n", sum);
//	}
//
//	return 0;
//}
//
//int main()
//{
//	double d = 3.2;
//	int x,y;
//	x = 1.2;
//	y = (x+3.8)/5.0;
//	printf("%d\n", d*y);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//             0 1 2 3 4 5 6 7 8 9
//	for(i=0; i<=12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//gcc - <=11



