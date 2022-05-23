#ifndef NOTEBOOK_H_INCLUDED
#define NOTEBOOK_H_INCLUDED
#include "tipo.h"
#include "marca.h"

typedef struct
{
    int idNotebook;
    char modelo [20];
    int idMarca; //Validar
    int idTipo; //Validar
    float precio;
    int libre;
} eNotebook;

#endif // NOTEBOOK_H_INCLUDED

int inicializarNotebooks(eNotebook *notebook, int tam);
void hardcodearNotebooks(eNotebook *notebook);
void listarNotebook(eNotebook notebook, eTipo *tipo, int tamTipo, eMarca *marca, int tamMarca);
int listarNotebooks(eNotebook *notebook, int tam, eTipo *tipo, int tamTipo, eMarca *marca, int tamMarca);
int listarNotebooksOrdenado(eNotebook *notebook, int tam, eTipo *tipo, int tamTipo, eMarca *marca, int tamMarca);
int bajaNotebook(eNotebook *notebook, int tam, eMarca *marca, int tamMarca, eTipo *tipo, int tamTipo);
int menuModificar();
int modificarNotebook(eNotebook *notebook, int tam, eMarca *marca, int tamMarca, eTipo *tipo, int tamTipo);
int buscarIndiceLibre(eNotebook *notebook, int tam);
int altaNotebook(eNotebook *notebook, int tam, eTipo *tipo, int tamTipo, eMarca *marca, int tamMarca);
