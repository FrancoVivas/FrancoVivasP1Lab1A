/*
 * trabajo.h
 *
 *  Created on: 11 may. 2022
 *      Author: N3630024213
 */

#ifndef TRABAJO_H_
#define TRABAJO_H_

typedef struct
{
    int id;
    eFecha fechaDeIngreso;
} eTrabajo;

#endif /* TRABAJO_H_ */

int listarTrabajos (eTrabajo trabajos[], int tam);
int cargarDescripcionTrabajo (eTrabajo trabajos[], int tam, int id,
			     char descripcion[]);
