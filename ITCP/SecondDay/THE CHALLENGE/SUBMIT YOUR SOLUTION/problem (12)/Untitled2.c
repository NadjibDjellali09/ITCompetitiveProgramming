#include<stdio.h>
#include<string.h>
void main(){
    char s[50],e[50];
printf("entrer un chaine de caractere");
scanf("%s",s);
strcpy(e,strrev(s));
printf("%s",e);
}
