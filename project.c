#include<stdio.h>
int main(){
    int randomGuess1,randomGuess2,actualNumber=23,i1,i2;
    printf("Welcome to the game of guessing the number\n You have 5 chances to guess a number ");
//********Player 1

printf("\n First turn is of player 1\n");

for ( i1 = 4; i1>=0 ; i1--)
{
    printf("Guess the number:\n");
    scanf("%d",&randomGuess1);
    if(randomGuess1==actualNumber){printf("Congrats Player1 !,You guess it right..\nNumber of attempts left are %d\n",i1);break;}
    if(randomGuess1>actualNumber){printf("Try a smaller number.\tNumber of attempts left are %d\n",i1);}
    if(randomGuess1<actualNumber){printf("Try a greater number.\tNumber of attempts left are %d\n",i1);}
    
}


//******Player 2

printf("\n Now the turn is of player 2 ");

for ( i2 = 4; i2>=0 ; i2--)
{
    printf("Guess the number:\n");
    scanf("%d",&randomGuess2);
    if(randomGuess2==actualNumber){printf("Congrats Player2 !,You guess it right..\nNumber of attempts left are %d\n",i2);break;}
    if(randomGuess2>actualNumber){printf("Try a smaller number.\tNumber of attempts left are %d\n",i2);}
    if(randomGuess2<actualNumber){printf("Try a greater number.\tNumber of attempts left are %d\n",i2);}
    
}
int win1=i1-i2;
int win2=i2-i1;
int tie=11-12;

if(i1==i2){
    printf("Match tie!! Both played nice... Have a rematch?");
}
if(i1>i2){
    printf("Player1 wins over Player2 as he lefts with %d attempts more than Player2",i1-i2);
}
if(i1<i2){
    printf("Player2 wins over Player1 as he lefts with %d attempts more than Player1",i2-i1);    
}


    return 0;
}