#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int gameboard[6][6];
int score[3];                   // 0:empty 1:white 2: black

void print_otello()       // 판짜기 함 수
{
	int i, j;   
	
	printf("   0  1  2  3  4  5 \n");
	for(i=0;i<6;i++)
	{
		printf(" -------------------\n");
		printf("%dㅣ", i);
		for(j=0;j<6;j++)
		{
			if(score[1]) printf("0ㅣ");
			else if(score[2]) printf("Xㅣ");
			else printf(" ㅣ");
		}
		putchar ('\n');
	 } 
	printf(" -------------------\n\n");
 	printf(" STATUS - WhITE : %d, BLACK : %d\n", score[1], score[2]);
}	


int init_othello()                      //게임 초기화 
{
	int i, j;
	 //0으로 초기화
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			gameboard[i][j]=score[0];
		}
	}
	// 처음 게임 상태로 배치
	gameboard[2][2]=gameboard[3][3]= score[1];
	gameboard[2][3]=gameboard[3][2]= score[2];
}

void main(int argc, char *argv[]) { 

	// 필요한 변수들 정의
	
	init_othello(); // 게임 초기화
	
	while(isGameEnd()==0){  // game 종료 조건 확인
		print_otello(); //배치 상태 출력 등
		if()  //배치가 가능한 칸이 있는지 확인
			continue;   //두 선수가 모두 배치가 불가능하면 반복문을 빠져나가야함
		//배치할 좌표 입력 받기;
		if()//입력 좌표가 적절한지 체크
			if(){         // 뒤집기 시도 
					//몇개 뒤집었는지 출력
					//턴 바꿈				
				} 
			else
				//부적절한 입력임을 출력 
	}
	check_result();    //결과 출력
	 
}
