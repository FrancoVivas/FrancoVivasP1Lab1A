#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED



typedef struct
{
    int id;
    char modelo[20];
    int idMarca;
    int idTipo;
    float precio;
    int isEmpty;
} eNotebook;

int mostrarNotebook(eNotebook e, eTrabajo trabajos[], int tam);
int listarNotebooks(eNotebook vec[], int tam, eTrabajo trabajos[], int tamSec);
int cargarNotebooks(eNotebook vec[], int tam);
int ordenarNotebooksIdAsc(eNotebook vec[], int tam);
int ordenarNotebooksMarcaAsc(eNotebook vec[], int tam);
int ordenarNotebooksPrecioAsc(eNotebook vec[], int tam);

int inicializarNotebooks(eNotebook vec[], int tam);

int buscarNotebookLibre(eNotebook vec[], int tam, int* pIndex);
int buscarNotebook(eNotebook vec[], int tam,int legajo, int* pIndex);
int altaNotebook(eNotebook vec[], int tam, int* pLegajo);
int bajaNotebook(eNotebook vec[], int tam,eTrabajo trabajos[], int tamSec);
int modificarNotebook(eNotebook vec[], int tam,eTrabajo trabajos[], int tamSec);
int hardcodearNotebook(eNotebook vec[], int tam, int cant, int* pLegajo);
int menuModificarNotebook();

#endif // EMPLEADO_H_INCLUDED
