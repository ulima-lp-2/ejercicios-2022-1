#include <stdio.h>

typedef struct{
    char* nombre;
    char* apellido;
}datosPers;

typedef struct{
    int cod;
    datosPers datos;
    float nota;
}alumno;

void imprimir(alumno*);

void imprimir(alumno* claseM){
    int i;
    for(i=0;i<3;i++){
        printf("%s %s %f\n",claseM[i].datos.apellido,claseM[i].datos.nombre,claseM[i].nota);
    }
}

int main(void){
    /*alumno est1;
    est1.cod=100;
    est1.nota=15.5;
    est1.datos.nombre="Ana";
    est1.datos.apellido="Diaz";
    printf("%s %f\n",est1.datos.nombre,est1.nota);*/
    int cod=100;
    alumno clase[3];
    int i=0;
    int tamC=15;
    for (i=0;i<3;i++){
        clase[i].datos.nombre=malloc(sizeof(char)*tamC);
        clase[i].datos.apellido=malloc(sizeof(char)*tamC);
    }
    for (i=0;i<3;i++){
        scanf("%s",clase[i].datos.nombre);
        scanf("%s",clase[i].datos.apellido);
        clase[i].cod=cod;
        cod=cod+10;
        scanf("%f",&clase[i].nota);
    }
    imprimir(clase);
    return 0;
}
