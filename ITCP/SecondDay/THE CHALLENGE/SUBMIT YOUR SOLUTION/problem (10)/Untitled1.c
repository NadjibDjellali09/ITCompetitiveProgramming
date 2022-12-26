#include<stdio.h>
void main(){
int v,i,n;
int a[50];
    printf("enter la taille de  victeur = ");
    scanf("%d",&n);
for(i=0;i<n;i++){
    printf("enter un entier = ");
    scanf("%d",&a[i]);
}
v=0; i=0;
while((v==0)&&(i<n-1)){
    if(a[i]>a[i+1]){
        v=1;
    } i++;
}
if(v==0){
    printf("the array in monotone");
}
else{
      v=0; i=0;
   while((v==0)&&(i<n-1)){
    if(a[i]<a[i+1]){
        v=1;
    }
     i=i+1;
}

}

}
