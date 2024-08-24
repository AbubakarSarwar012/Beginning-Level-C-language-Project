#include<stdio.h>
#include<conio.h>

int main(){

  float initial_number, final_number, sum_from_one;
  int quit;
  quit = 1;
                                            //! Sum Calculator.
  do{                                

    float sum;
    
    printf("\nEnter Initial Number (initial number also added in sum): ");
    scanf("%f",&initial_number);
    printf("\nEnter Final Number: ");
    scanf("%f",&final_number);
    
    if(initial_number != 1){
       sum = ((final_number + 1) / 2) * final_number;
       sum_from_one = ((initial_number - 1) / 2) *  initial_number;
       sum -= sum_from_one;
       printf("\n%f",sum);
    }
   else{
    sum = ((final_number + 1) / 2) * final_number;
    printf("\n%f",sum);
   }
  
   printf("\n\nEnter '0' for exit and '1' for keep it continue!: ");
   scanf("\n%d",&quit);
   if(quit > 1){
    home:
    printf("\nInvalid input!");
    printf("\n\nEnter '0' for exit and '1' for keep it continue!: ");
   scanf("\n%d",&quit);
    if(quit != 1 && quit != 0){
      goto home;
    }
   }
}while(quit);
  
  printf("\n\n\t\t\tDeveloped By Abubakar Sarwar.");

  getch();

  return 0;

}