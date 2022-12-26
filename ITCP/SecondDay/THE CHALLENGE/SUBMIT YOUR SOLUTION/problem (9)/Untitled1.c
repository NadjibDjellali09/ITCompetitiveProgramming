#include<stdio.h>
int main(){
int k,i,j,n,m;
int a[50],b[50],c[50];
    printf("enter la taille de victeur (1) = ");
    scanf("%d",&n);
        printf("enter la taille de victeur (2) = ");
    scanf("%d",&m);
for(i=0;i<n;i++){
    printf("enter un entier puor le victeur (1) = ");
    scanf("%d",&a[i]);
}
for(j=0;j<m;j++){
    printf("enter un entier puor le victeur (2) = ");
    scanf("%d",&b[j]);
}
k=0;

for(i=0;i<n;i++){
  for(j=0;j<m;j++){
   if(a[i]==b[j]){
    c[k]=a[i];
    k++;
   }
}

}
for(j=0;j<k;j++){
    printf("c[%d]=%d\n",j,c[j]);
}
return 0;
}
