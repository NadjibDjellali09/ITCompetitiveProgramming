#include<stdio.h>
int test(int a,int b){
if(a+b<100)
    return 1;
    else
        return 0;
}
int main(){
 int a,b;
 printf("donner un entier");
 scanf("%d",&a);
  printf("donner un entier");
 scanf("%d",&b);
 printf("%d",test(a,b));

}
