#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED
#include "fecha.h"
#include "servicio.h"
#include "notebook.h"
#include "marca.h"
#include "tipo.h"

typedef struct
{
    int idTrabajo;
    int idNotebook;
    int idServicio;
    eFecha fecha;
    int libre;
} eTrabajo;


#endif // TRABAJO_H_INCLUDED

int inicializarTrabajos(eTrabajo *trabajos, int tamTrab);
void hardcodearTrabajos(eTrabajo *trabajos);
int listarTrabajos(eTrabajo *trabajo, int tamTrab, eServicio *servicio, int tamSer);
int listarTrabajo(eTrabajo trabajo, eServicio *servicio, int tamSer);
int altaTrabajo(eTrabajo *trabajos, int tamTrab, eNotebook *notebook, int tam, eMarca *marca, int tamMarca, eTipo *tipo, int tamTipo, eServicio *servicio, int tamSer);
int buscarTrabajoLibre (eTrabajo *trabajo, int tamTrab);
