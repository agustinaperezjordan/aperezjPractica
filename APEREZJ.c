/* AGUSTINA PEREZ JORDAN - PRACTICA */

#include <stdio.h>
#include <math.h>
#define PI = 3.141592

//Modulo de interaccion con el usuario

int main () {

    int menu = 0; // menu: tipos de calculos a realizar (area, perimetro, dist. figuras, colision, dist. puntos)

    do {
        printf("\n Calculadora de formas Geometricas y Colisiones\n");
        printf("Por favor seleccione una opcion: \n");
        printf("1. Calcular el area: \n");
        printf("2. Calcular el perimetro: \n");
        printf("3. Calcular la distancia entre figuras: \n");
        printf("4. Comprobar la colision entre figuras: \n");
        printf("5. Calcular la distancia entre los puntos: \n");
        printf("6. Salir\n");
        
        scanf("%d", &menu);


    } while (menu != 6);





}