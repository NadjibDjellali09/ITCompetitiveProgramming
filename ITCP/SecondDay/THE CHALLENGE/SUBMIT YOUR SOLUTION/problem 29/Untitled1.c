#include<stdio.h>
#include<stdlib.h>
int addition(int a,int b){
int s;
s=a+b;
return s ;
}
int main(){
int a,b,s;
printf("entrer un entier");
scanf("%d",&a);
printf("entrer un entier");
scanf("%d",&b);
 printf("%d",addition(a,b));
}
