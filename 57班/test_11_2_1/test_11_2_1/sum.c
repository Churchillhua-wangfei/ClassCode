#define _CRT_SECURE_NO_WARNINGS 1

//static改变了全局变量的作用域
static int g_val = 2019;

static int Add(int x, int y)
{
	return x+y;
}
