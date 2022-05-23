#ifndef MARCA_H_INCLUDED
#define MARCA_H_INCLUDED

typedef struct
{
    int idMarca;
    char descripcion[20];
} eMarca;


#endif // MARCA_H_INCLUDED

int cargarMarca(char *nombreMarca, eMarca *marca, int tamMarca, int idMarca);
int listarMarcas(eMarca *marca, int tamMarca);
