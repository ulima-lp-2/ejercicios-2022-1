#include <stdio.h>

typedef struct{
    int cod;
    char* nombre;
    double nota;
}alumno;

void imprimir(alumno alu){
    printf("%d %s %lf\n",alu.cod,alu.nombre,alu.nota);
}

int main(void){
    alumno est1,est2;
    est1.cod=100;
    est1.nombre="raul";
    est1.nota=15.5;
    est2.cod=110;
    est2.nombre="ana";
    est2.nota=16.4;
    //printf("%d %s %lf\n",est1.cod,est1.nombre,est1.nota);
    imprimir(est1);
    imprimir(est2);
    return 0;
}
