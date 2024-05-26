#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){


  int num1,num2;
  char operator;

   printf("\nEnter operator (+,-,*,/,%%,^): \n");
   scanf("%c",&operator);


  printf("Enter first number: \n");
  scanf("%d",&num1);

  printf("Enter second number or (power): \n");
  scanf("%d",&num2);


  switch(operator){

    case '+':
             printf("%d + %d = %d",num1,num2,num1+num2);
             break;
    case '-':
              printf("%d - %d = %d",num1,num2,num1-num2);
              break;
     case '/':
              printf("%d / %d = %d",num1,num2,num1/num2);
              break;
      case '%':
              printf("%d %% %d = %d",num1,num2,num1%num2);
              break;
      case '*':
              printf("%d * %d = %d",num1,num2,num1*num2);
              break;
      case '^':
              printf("%d ^ %d = %lf",num1,num2,pow(num1,num2));
              break;     
      default:
              printf("Sorry! but this operator is not valid.");
              break;                                
  }

    printf("\nThanks for use.");
  
  printf("\n\nDeveloped By Abubakar Sarwar.");
  getch();

  return 0;
}
