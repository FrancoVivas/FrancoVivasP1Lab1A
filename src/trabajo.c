#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trabajo.h"

int listarTrabajos(eTrabajo trabajos[], int tam){
int todoOk = 0;

    if(trabajos != NULL && tam > 0){
        system("cls");
        printf("   *** Lista de Sectores  ***\n");
        printf("  Id    Descripcion\n");
        printf("-----------------------\n");
        for(int i=0; i < tam; i++){
            printf("   %4d    %10s\n", trabajos[i].id, trabajos[i].descripcion);
        }
        printf("\n\n");
        todoOk = 1;
    }
 return todoOk;
}

int cargarDescripcionSector(eTrabajo trabajos[], int tam, int id, char descripcion[]){
int todoOk = 0;

    if(trabajos != NULL && tam > 0 && id >= 5000 && id <= 5004 && descripcion != NULL){
     for(int i=0; i < tam; i++){

        if(trabajos[i].id == id){
            strcpy(descripcion, trabajos[i].descripcion);
            break;
        }
     }
     todoOk = 1;
    }
  return todoOk;
}
