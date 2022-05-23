/*
 * cliente.h
 *
 *  Created on: 23 may. 2022
 *      Author: N3630024213
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_

typedef struct
{
    int id;
    char nombre[20];
    char sexo;
} eCliente;

int listarDuenio(int *id, eCliente *nombre, char sexo);
#endif /* CLIENTE_H_ */
