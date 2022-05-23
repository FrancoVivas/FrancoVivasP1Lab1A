#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED

typedef struct
{
    int idServicio;
    char descripcion[25];
    float precio;
} eServicio;

#endif // SERVICIO_H_INCLUDED

int listarServicios(eServicio *servicio, int tamSer);
int cargarServicio(char *nombreServicio, eServicio *servicio, int tamSer, int idServicio);
