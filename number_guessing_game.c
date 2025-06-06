#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int ANSWER,num=0,continue_game=1,level,i;
    
	srand(time(NULL));
	
    printf("\n◆◆ 数当てゲーム ◆◆");
    printf("\n１：初級 サイコロ数当て");
    printf("\n２：中級 トランプ数当て");
    printf("\n３：上級 100までの数当て");
    printf("\nレベルを選んでね♠：");
    scanf("%d",&level);
    
    switch(level){
		case 1:
			while(continue_game)
			{
				printf("\n\n♢♢初級　サイコロ数当て　♢♢\n");
				printf("数を当ててね♥　チャンスは 3回 まで♠\n");

				srand(time(NULL));
				ANSWER=rand() % 6 + 1;
				i=1;
				
				while(1)
				{
					printf("\n==　%d回目のチャレンジ　==\n",i);
					printf("1 ～ 6 のどれでしょう？：");
					scanf("%d",&num);
					
					if(num==ANSWER){
						printf("あたり♥　%d回目で正解♣\n",i);
						break;
					}
					
					else if(num<ANSWER){
						printf("はずれ♦　それより大きいよ♠\n");
						i++;
						if(i>=4){
							printf("\n残念♠　3回で当てられなかったのでゲームオーバー♣\n");
							printf("答えは%dでした♦\n",ANSWER);
							break;
						}
						else continue;
					}
					else{
						printf("はずれ♦　それより小さいよ♣\n");
						i++;
						if(i>=4){
							printf("\n残念♠　3回で当てられなかったのでゲームオーバー♣\n");
							printf("答えは%dでした♦\n",ANSWER);
							break;
						}
						else continue;
					}
				}
			printf("\nゲームを続ける？（つづける:1　終了:0）：");
			scanf("%d",&continue_game);
			}
			break;
			
		case 2:
			while(continue_game)
			{
				printf("\n\n♢♢中級　トランプ数当て　♢♢\n");
				printf("数を当ててね♥　チャンスは 5回 まで♠\n");

				srand(time(NULL));
				ANSWER=rand() % 13 + 1;
				i=1;
				
				while(1)
				{
					printf("\n==　%d回目のチャレンジ　==\n",i);
					printf("1 ～ 13 のどれでしょう？：");
					scanf("%d",&num);
					
					if(num==ANSWER){
						printf("あたり♥　%d回目で正解♣\n",i);
						break;
					}
					
					else if(num<ANSWER){
						printf("はずれ♦　それより大きいよ♠\n");
						i++;
						if(i>=6){
							printf("\n残念♠　5回で当てられなかったのでゲームオーバー♣\n");
							printf("答えは%dでした♦\n",ANSWER);
							break;
						}
						else continue;
					}
					else{
						printf("はずれ♦　それより小さいよ♣\n");
						i++;
						if(i>=6){
							printf("\n残念♠　5回で当てられなかったのでゲームオーバー♣\n");
							printf("答えは%dでした♦\n",ANSWER);
							break;
						}
						else continue;
					}
				}
			printf("\nゲームを続ける？（つづける:1　終了:0）：");
			scanf("%d",&continue_game);
			}
            break;
			
        case 3:
			while(continue_game)
			{
				printf("\n\n♢♢上級　100までの数当て　♢♢\n");
				printf("数を当ててね♥　チャンスは 7回 まで♠\n");

				srand(time(NULL));
				ANSWER=rand() % 100 + 1;
				i=1;
				
				while(1)
				{
					printf("\n==　%d回目のチャレンジ　==\n",i);
					printf("1 ～ 100 のどれでしょう？：");
					scanf("%d",&num);
					
					if(num==ANSWER){
						printf("あたり♥　%d回目で正解♣\n",i);
						break;
					}
					
					else if(num<ANSWER){
						printf("はずれ♦　それより大きいよ♠\n");
						i++;
						if(i>=8){
							printf("\n残念♠　7回で当てられなかったのでゲームオーバー♣\n");
							printf("答えは%dでした♦\n",ANSWER);
							break;
						}
						else continue;
					}
					else{
						printf("はずれ♦　それより小さいよ♣\n");
						i++;
						if(i>=8){
							printf("\n残念♠　7回で当てられなかったのでゲームオーバー♣\n");
							printf("答えは%dでした♦\n",ANSWER);
							break;
						}
						else continue;
					}
				}
			printf("\nゲームを続ける？（つづける:1　終了:0）：");
			scanf("%d",&continue_game);
			}
            break;
			
        default:
			break;
    }
	
	printf("\nゲーム終了♣\n");
	return 0;
}
