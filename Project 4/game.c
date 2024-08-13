
                                /*   Rock, Paper, & Scissor Game   */


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(){

  int random, shape, quit, user_wining_points, computer_wining_points;
  computer_wining_points =  0;
  user_wining_points  = 0;

  printf("\t\t\tRock, Paper and Scissor.\n\n");

  do{

    srand(time(NULL));
    random  = rand() %  100 + 1;  
    printf("\nSelect Your Shape '1' for Rock '2' for Paper and '3' for Scissor.\n");
    scanf("%d",&shape);

    if(shape >= 1 &&  shape <= 3){
      if(random >= 0  &&  random  <= 33){

        printf("\n => Computer chose Rock.\n");
        if(shape == 1){
          printf(" => User chose Rock.\n");
          printf(" => Result: Tie!\n");
        }
        if(shape == 2){
          printf(" => User chose Paper.\n");
          printf(" => Result: You won!\n");
          user_wining_points++;
        }
        if(shape == 3){
          printf(" => User chose Scissor.\n");
          printf(" => Result: You Lose!\n");
          computer_wining_points++;
        }
      }

        if(random >= 34  &&  random  <= 64){

        printf("\n => Computer chose Paper.\n");
        if(shape == 1){
          printf(" => User chose Rock.\n");
          printf(" => Result: You Lose!\n");
          computer_wining_points++;
        }
        if(shape == 2){
          printf(" => User chose Paper.\n");
          printf(" => Result: Tie!\n");
        }
        if(shape == 3){
          printf(" => User chose Scissor.\n");
          printf(" => Result: You Won!\n");
          user_wining_points++;
        }
      }

        if(random >= 65  &&  random  <= 100){

        printf("\n => Computer chose Scissor.\n");
        if(shape == 1){
          printf(" => User chose Rock.\n");
          printf(" => Result: You won!\n");
          user_wining_points++;
        }
        if(shape == 2){
          printf(" => User chose Paper.\n");
          printf(" => Result: You Lose!\n");
          computer_wining_points++;
        }
        if(shape == 3){
          printf(" => User chose Scissor.\n");
          printf(" => Result: Tie!\n");
        }
      }
   

  printf("\n\n\nEnter '1' for continue playing and '0' for quiting.\n");
    scanf("%d",&quit);

    if(quit > 1){
      printf("\nInvalid!\n");
      printf("\n\n\nEnter '1' for continue playing  and '0' for quiting.\n");
      scanf("%d",&quit);
    }

  }

    else{
    printf("\n\n\nInvalid Shape!\n");
  }

  }while(quit != 0);

  printf("\n\n\n\t\t\t Final Result:\n\nUser scores: %d\n\nComputer scores: %d\n",user_wining_points,computer_wining_points);

  printf("\n\n\n\n\n\t\t Developed by Abubakar Sarwar.\n\n");

  getch();

  return 0;

}


                              /* Developed by Abubakar Sarwar. */

                              