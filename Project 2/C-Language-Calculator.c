#include<stdio.h>
#include<conio.h>

int main(){

  int num1,num2;
  char operator;
  

  printf("Enter operator: \n");
  scanf("%c",&operator);


  printf("Enter first number: \n");
  scanf("%d",&num1);


  printf("Enter second number: \n");
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
              printf("%d mod %d = %d",num1,num2,num1%num2);
              break;
      default:
              printf("Sorry! but this operator is not valid.");
              break;                                
  }

  getch();

  return 0;
}