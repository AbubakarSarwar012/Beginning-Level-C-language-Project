#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

  int b,a,c;

  printf("Enter 'b' value:");
  scanf("%d",&b);
  printf("\nEnter 'a' value:");
  scanf("%d",&a);
  printf("\nEnter 'c' value:");
  scanf("%d",&c);

  int Disc;
  Disc = pow(b,2)-4*a*c;

  printf("\nDiscriminant is:%d\n",Disc);

  int r =sqrt(Disc);

  if(Disc>0 && Disc==r*r){
    printf("Roots will be rational and unequal.\n");

  }
  else if (Disc>0 && Disc!= r*r){
    printf("Roots will be irrational and unequal.\n");
  }
  else if(Disc<0){
    printf("Roots will be imaginary.\n");
  }
  else if(Disc==0){
    printf("Roots will be rational and equal.\n");
  }
  getch();

  return 0;
}
