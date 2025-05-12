/*
    Universidad Amerike
    Ingeniería en ciberseguridad
    René Iván Huerta Tovar
    1er semestre
    Programación I
    Tarea: Área y perímetro
    Dr. Alcides Arbona García
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura;
    float perimetro, area;
    char regresar = ' ';
  do {

    printf("Vamos a calcular los valores del perimetro y del area de un rectangulo en metros.\n");

    printf("Ingresa el valor de la base de un rectangulo en metros: \n");
    scanf(" %f", &base);

    printf("Ingresa el valor de la altura de un rectangulo en metros: \n");
    scanf(" %f", &altura);

    perimetro = 2 *(base + altura);
    area = base * altura;


    printf("El valor del perimetro del rectangulo es: %.2f metros\n", perimetro);
    printf("El valor del area del rectangulo es: %.2f metros\n", area);

    printf("Si quieres calcular de nuevo con otros valores presiona la letra R o presiona cualquier otra tecla para terminar\n");
    scanf(" %c", &regresar);

  }while (regresar== 'r' || regresar=='R');
    return 0;
}
