#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int a = 5%2;
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	int a = -1;
//	int b = a<<2;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//
//	//00000000000000000000000000000101
//	
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//
//int main()
//{
//	int a = -1;
//	int b = a>>2;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a&b;//按（2进制）位与
//	//00000000000000000000000000000011
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011
//	//00000000000000000000000000000011
//	//00000000000000000000000000000011
//	printf("c = %d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a|b;//按（2进制）位或
//	//00000000000000000000000000000011
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011
//	//00000000000000000000000000000011
//	//11111111111111111111111111111011
//	//11111111111111111111111111111010
//	//10000000000000000000000000000101
//	printf("c = %d\n", c);
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a^b;//按（2进制）位异或
//	//00000000000000000000000000000011
//	//10000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111011
//	//00000000000000000000000000000011
//	//11111111111111111111111111111000
//	//11111111111111111111111111110111
//	//10000000000000000000000000001000
//	//
//	printf("c = %d\n", c);
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	printf("a = %d b = %d\n", a, b);//3 5
//	//1
//// 	c = a;
//// 	a = b;
//// 	b = c;
//	//2
//// 	a = a+b;
//// 	b = a-b;
//// 	a = a-b;
//	//3-异或
//	//011-b
//	//101-a
//	//110
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("a = %d b = %d\n", a, b);//5 3
//
//	return 0;
//}

//
//1 2 3 4 5 1 2 3 4
//1 2 3 4 5 1 2 3 4 6
//
//1 2 1
//

//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	while(n)
//	{
//		if(n%2 == 1)
//			count++;
//		n=n/2;
//	}
//	return count;
//}
//
//int count_one_bit(int n)
//{
//	int count = 0;
//	int i = 0;
//	for(i=0; i<32; i++)
//	{
//		if(((n>>i)&1)==1)
//			count++;
//	}
//	return count;
//}

//
//int count_one_bit(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		count++;
//		n=n&(n-1);
//	}
//	return count;
//}
//
//int main()
//{
//	int a = -1;
//	int ret = count_one_bit(a);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int x = 0;
//	int y = 20;
//	a = x = y+1;
//
//	x = y+1;
//	a = x;
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	a = a+3;
//	a += 3;
//	
//	a = a >> 3;
//	a >>= 3;
//
//	a = a+1;
//	a += 1;
//	a++;
//
//	return 0;
//}
//
//int main()
//{
//	int flag = 5;
//	/*if(flag)
//	{
//
//	}*/
//	if(!flag)
//	{
//		printf("hehe\n");
//	}
//	//布尔类型
//
//	return 0;
//}
//
//
//int main()
//{
//	int a = -3;
//	a = -a;
//	a = +a;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%#p\n", &a);
//	printf("%p\n", &a);
//	printf("%x\n", &a);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	short s = 3;
//	printf("%d\n", sizeof(s=a+4));//2
//	printf("%d\n", a);//10
//	printf("%d\n", s);//3
//
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof a);//4
//
//	return 0;
//}
// 
// int main()
// {
// 	int a = 0;
// 	//00000000000000000000000000000000
// 	//11111111111111111111111111111111
// 	//
// 	printf("%d\n", ~a);
// 	//-1
// 	return 0;
// }
//
//
//int main()
//{
//	int a = 15;
//	a &= (~(1<<(3-1)));
//	printf("%d\n", a);
//	//00000000000000000000000000001111
//	//11111111111111111111111111111011
//	//00000000000000000000000000000100
//	//1<<2
//	//00000000000000000000000000001011
//	//00000000000000000000000000000100
//	//
//	return 0;
//}
//




