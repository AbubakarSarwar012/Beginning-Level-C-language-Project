#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
                      //Guessing Number Game.
int main(){

    int guess,random;
    int no_of_attempts = 0;

    srand(time(NULL));

    printf("Welcome to the world of guessing!\n\n");

      random = rand() % 100 + 1;    // To Generating random numbers.

    do {

      printf("Guess a Number between 1 to 100 :");
      scanf("%d",&guess);

      if(guess<random){
        printf("\nGuess a Greater number!\n");
      }
      else if(guess>random){
        printf("\nGuess smaller number!\n");
        
      }

      no_of_attempts++;


    } while(guess!=random);

    printf("\n\nCongratulation!! You have successfully guessed the number in %d attempts!\n\n",no_of_attempts);

    printf("Thanks For Playing.\n\n");

    printf("Developed by Abubakar Sarwar.");



  getch();

  return 0;
}