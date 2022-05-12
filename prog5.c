#include <stdio.h>
#include <time.h>

#define size 4

typedef struct{
    int cod;
    char* nombre;
    float nota;
}alumno;

void imprimirC(alumno*);
double calcProm(alumno*);

void imprimirC(alumno* claseM){
    int i;
    for (i=0;i<size;i++){
        printf("%d %s %f\n",claseM[i].cod,claseM[i].nombre,claseM[i].nota);
    }
}

double calcProm(alumno* claseM){
    double s,prom;
    s=0.0;
    int i;
    for (i=0;i<size;i++){
        s=s+claseM[i].nota;
    }
    prom=s/size;
    return prom;
}

int main(void){
    alumno salonC[size];
    char* nombres[]={"ana","diana","jose","paul","raul"};
    char* nomb;
    srand(time(NULL));
    int i,cod;
    float nota;
    for (i=0;i<size;i++){
        nota=rand()%21;
        cod=rand()%100+1;
        nomb=nombres[rand()%5];
        salonC[i].cod=cod;
        salonC[i].nombre=nomb;
        salonC[i].nota=nota;
    }
    imprimirC(salonC);
    printf("promedio es %f\n",calcProm(salonC));
    return 0;
}
