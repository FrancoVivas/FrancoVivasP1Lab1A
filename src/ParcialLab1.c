#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "fecha.h"
#include "notebook.h"
#include "trabajo.h"


#define TAM 10
#define TAMS 4


int menu();

int main()
	{
    	char salir = 'n';
    	int proximoId = 1000;
    	eTrabajo lista[TAM];
    	eNotebook notebooks[TAMS] =
    	{
    	        {5000, 5001, 5002, 5003},
				{"Gamer", "Disenio", "Ultrabook", "Normalita"}


    	};


    };




    inicializarTrabajos(lista, TAM);


    hardcodearTrabajos(lista, TAM, 10, &proximoLegajo);

    do
    {
        switch(menu())
        {

        case 1:
            if( altaNotebook(lista, TAM, &proximoLegajo))
            {
                printf("Empleado agregado con exito!!!\n");
            }
            else
            {
                printf("Problema al hacer el alta de trabajo\n");
            }

            break;
        case 2:
            if( bajaNotebook(lista, TAM, trabajos, TAMS) == 0)
            {
                printf("Problema al hacer la baja de empleado\n");
            }
            break;
        case 3:
            if( modificarNotebook(lista, TAM, trabajos, TAMS) == 0)
            {
                printf("Problema al hacer la modificacion de la notebook\n");
            }
            break;

        case 4:
            printf("Ordenar Notebooks\n");
            break;
        case 5:
            listarNotebooks(lista, TAM, trabajos, TAMS);
            break;

        case 6:
            listarMarcas(lista, TAM, trabajos, TAMS);
            break;
         case 7:
            listarTipos(lista, TAM, trabajos, TAMS);
            break;
         case 8:
            listarServicios(lista, TAM, trabajos, TAMS);
            break;
         case 9:
            altaTrabajo(lista, TAM);
            break;
         case 10:
            listarTrabajos(sectores, TAMS);
            break;

        case 20:
            salir = 's';
            break;
        }
        system("pause");

    }
    while(salir != 's');

    return 0;
}

int menu()
{

    int opcion;
    system("cls");
    printf("     *** ABM Notebooks ***\n");
    printf("1- Alta Notebook\n");
    printf("2- Baja Notebook\n");
    printf("3- Modificar Notebook\n");
    printf("4- Ordenar Notebooks\n");
    printf("5- Listar Notebooks\n");
    printf("6- Listar Marcas\n");
    printf("7- Listar Tipos\n");
    printf("8- Listar Servicios\n");
    printf("9- Informe promedio sueldos\n");
    printf("10- Alta Trabajo\n");
    printf("11- Listar Trabajos\n");
    printf("20- Salir\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);
    return opcion;

}
