#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int gameboard[6][6];
int score[3];                   // 0:empty 1:white 2: black

void print_otello()       // ��¥�� �� ��
{
	int i, j;   
	
	printf("   0  1  2  3  4  5 \n");
	for(i=0;i<6;i++)
	{
		printf(" -------------------\n");
		printf("%d��", i);
		for(j=0;j<6;j++)
		{
			if(score[1]) printf("0��");
			else if(score[2]) printf("X��");
			else printf(" ��");
		}
		putchar ('\n');
	 } 
	printf(" -------------------\n\n");
 	printf(" STATUS - WhITE : %d, BLACK : %d\n", score[1], score[2]);
}	


int init_othello()                      //���� �ʱ�ȭ 
{
	int i, j;
	 //0���� �ʱ�ȭ
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			gameboard[i][j]=score[0];
		}
	}
	// ó�� ���� ���·� ��ġ
	gameboard[2][2]=gameboard[3][3]= score[1];
	gameboard[2][3]=gameboard[3][2]= score[2];
}

void main(int argc, char *argv[]) { 

	// �ʿ��� ������ ����
	
	init_othello(); // ���� �ʱ�ȭ
	
	while(isGameEnd()==0){  // game ���� ���� Ȯ��
		print_otello(); //��ġ ���� ��� ��
		if()  //��ġ�� ������ ĭ�� �ִ��� Ȯ��
			continue;   //�� ������ ��� ��ġ�� �Ұ����ϸ� �ݺ����� ������������
		//��ġ�� ��ǥ �Է� �ޱ�;
		if()//�Է� ��ǥ�� �������� üũ
			if(){         // ������ �õ� 
					//� ���������� ���
					//�� �ٲ�				
				} 
			else
				//�������� �Է����� ��� 
	}
	check_result();    //��� ���
	 
}
