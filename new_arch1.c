#include <stdio.h>

int main(void)
{
  FILE *pF; //Creamos un apuntador de tipo FILE

  pF = fopen("newfile.txt","w"); //Abrimos el archivo en modo escritura

  if(pF == NULL) //Verificamos si no fue posible abrir el archivo
  {
    puts("Error no se pudo crear el archivo");
    return(1); // Si no fue posible se termina el probrama con la senal 1
  }

  fprintf(pF, "Hola Mundo de los Archivos\n"); //Se escribe en el archivo la cadena
                                              // usando el apuntador pF
  fclose(pF); // Cerramos el archivo

  return(0); // terminamos el programa con la senal 0 (exito)
}
