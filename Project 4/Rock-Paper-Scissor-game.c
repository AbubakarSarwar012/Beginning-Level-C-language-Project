#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
 
        // Rock-Paper-and-Scissor-Game.
    


printf("\t\tWelcome in Rock-Paper-and-Scissor Game\n\n\n");


int random,shape;
int restart;




printf("Enter your shape (1 for Rock | 2 for Paper | 3 for Scissor): ");
scanf("%d",&shape);


  srand(time(NULL));
  random = rand() % 100 + 1;
 



  if(random >=0 && random <=33){  // 0 to 33 consider as Rock.
   
   printf("\n\n1-Computer choosed Rock.");


    if(shape == 1){
      printf("\n2-You choosed Rock.");
      printf("\n\nTie!");
    }
    else if(shape == 2){
      printf("\n2-You choosed Paper.");
      printf("\n\nCongratulation! You have won!");

    }
    else if(shape == 3){
       printf("\n2-You choosed Scissor.");
      printf("\n\nYou lose, Better luck next time!");
    }
    else{
      printf("\n\nNot valid shape!");
    }


  }
  if(random >=34 && random <=69){  // 34 to 69 consider as paper.
    printf("\n\n1-Computer choosed Paper.");
    if(shape == 1){
      printf("\n2-You choosed Rock.");
      printf("\n\nYou lose, Better Luck next time!");
    }
    else if(shape == 2){
      printf("\n2-You choosed Paper.");
      printf("\n\nTie!");

    }
    else if(shape == 3){
      printf("\n2-You choosed Scissor.");
      printf("\n\nCongratulation! You have won!");
    }
    else{
      printf("\n\nNot valid shape!");
    }


  }
   if(random >=70 && random <=100){  // 70 to 100 consider as scissor.
    printf("\n\n1-Computer choosed Scissor.");
    if(shape == 1){
      printf("\n2-You choosed Rock.");
      printf("\n\nCongratulation! You hve won!");
    }
    else if(shape == 2){
      printf("\n2-You choosed Paper.");
      printf("\n\nYou lose, Better Luck next time!");

    }
    else if(shape == 3){
      printf("\n2-You choosed Scissor.");
      printf("\n\nTie!");
      
    }
    else{
      printf("\n\nNot valid shape!");
    }
   }



getch();   
  
  return 0;
}

