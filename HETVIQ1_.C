#include<stdio.h>
#include<conio.h>

void main (){
float pi;
int radius,total;
clrscr();
printf("Enter the value of pi: ");
scanf("%f",&pi);
printf("Enter the value of radius: ");
scanf("%d",&radius);
total=pi*radius*radius;
printf("total of %d",total);
getch();
}