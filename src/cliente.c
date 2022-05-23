int listarDuenio(int *id, eCliente *nombre, char sexo);
{
    int retorno = 1;
    printf("****************************************************\n");
    printf("                  LISTADO DE DUENIOS                  \n");
    printf("****************************************************\n\n");
    printf("   ID   DESCRIPCION\n\n");

    for (int i=0; i < tamTipo; i++)
    {
        printf(" %4d    %10s\n", id[i].idCliente, id[i].sexo);
        retorno = 0;
    }
    printf("\n\n");

    return retorno;
}
