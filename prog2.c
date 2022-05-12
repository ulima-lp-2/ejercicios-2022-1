#include <stdio.h>
#include <string.h>

#define max 10

int main(void){
    char s[max];
    char* t="hola";
    char r[]="auto";
    char w[max];
    int longi;
    s[0]='c';
    s[1]='a';
    s[2]='s';
    s[3]='a';
    s[4]=0;
    longi=strlen(s);
    printf("cad %s longitud %d\n",s,longi);
    printf("cad %s\n",t);
    printf("cad %s\n",r);
    printf("cadena?\n");
    scanf("%s",w);
    printf("cadena %s\n",w);
    return 0;
}
