#define _CRT_SECURE_NO_WARNINGS 1

//������Ϸ�������߼���
#include "game.h"

void menu()
{
	printf("******************************\n");
	printf("******     1. play      ******\n");
	printf("******     0. exit      ******\n");
	printf("******************************\n");
}


void game()
{
	char board[ROW][COL] = {0};
	char ret = 0;
	//��ʼ������
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while(1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
			break;
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
			break;
	}
	if(ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if(ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if(ret == 'P')
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����, ������ѡ��!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}
