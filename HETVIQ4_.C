#include<stdio.h>
#include<conio.h>

void main (){
int P,R,N,Total;
clrscr();
printf("enter the value of P: ");
scanf("%d",&P);
printf("enter the value of R: ");
scanf("%d",&R);
printf("enter the value of N: ");
scanf("%d",&N);
Total=P*R*N/100;
printf("total of %d",Total);
getch();
}