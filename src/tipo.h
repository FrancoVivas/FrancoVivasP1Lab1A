#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED

typedef struct
{
    int idTipo;
    char descripcion[20];
} eTipo;

#endif // TIPO_H_INCLUDED

int cargarTipo (char *nombreTipo, eTipo *tipo, int tamTipo, int idTipo);
int listarTipos(eTipo *tipo, int tamTipo);
