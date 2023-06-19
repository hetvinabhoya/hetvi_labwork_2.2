#include<stdio.h>
#include<conio.h>

void main (){
int width,height,area;
clrscr();
printf("enter the value of width: ");
scanf("%d",&width);
printf("enter the value of height: ");
scanf("%d",& height);
area=width*height;
printf("total of %d",area);
getch();
}