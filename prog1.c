#include <stdio.h>

#define longi 4

void imprimir(int*);
void func(int[]);

void imprimir(int* w){
    int i;
    for (i=0;i<longi;i++){
        printf("%d\n",w[i]);
    }
}

void func(int a[]){
    int i;
    for (i=0;i<longi;i++){
        a[i]=a[i]*10;
    }
}

int main(void){
    //generar un arreglo
    int v[4]={1,2,3,4};
    imprimir(v);
    printf("\n");
    func(v);
    imprimir(v);
    return 0;
}
