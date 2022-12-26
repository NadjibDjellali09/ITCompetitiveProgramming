#include<stdio.h>
#include<math.h>
void main(){
    int n;
do{
printf("enter the year");
scanf("%d",&n);
}while(n<0);
if((n%4==0)&&((n%100!=0)||(n%400==0))){
    printf("the entered year is a leap");
}
else
    printf("the entered year is not a leap");
}
