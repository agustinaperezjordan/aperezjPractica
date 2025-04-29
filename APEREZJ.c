/* AGUSTINA PEREZ JORDAN - PRACTICA (Menu)*/

#include <stdio.h>
#include <math.h>
#include "funciones.h"

int main () {

    int menu = 0; // menu: tipos de calculos a realizar (area, perimetro, dist. figuras, colision, dist. puntos)

    do {
        printf("\n Calculadora de formas Geometricas y Colisiones\n");
        printf("Por favor seleccione una opcion: \n");
        printf("1. Calcular el area: \n");
        printf("2. Calcular el perimetro: \n");
        printf("3. Calcular la distancia entre figuras: \n"); // Son necesarias las coordenadas x e y de ambas
        printf("4. Comprobar la colision entre figuras: \n");
        printf("5. Calcular la distancia entre los puntos: \n");
        printf("6. Salir\n");
        
        scanf("%d", &menu);

        switch(menu) { // Dentro de cada calculo a realizar, se puede escoger un circulo o un rectangulo como forma geometrica

            case 1:{
                int figura;
                printf("Seleccionar forma geometrica (1: Circulo, 2: Rectangulo): \n");
                scanf("%d", &figura);

                if (figura == 1) { // Se ha elegido el circulo
                    float radio;
                    printf("Ingresar valor del radio: \n");
                    scanf("%f", &radio); 
                    printf("El area del circulo es: %.3f\n", area_circulo(radio) ); // Llamado a la funcion area_circulo

                } else if (figura == 2) { // Se ha elegido el rectangulo
                    float largo, ancho;
                    printf("Ingresar valor del largo y ancho (separados por un espacio): \n");
                    scanf("%f %f", &largo, &ancho); 
                    printf("El area del rectangulo es: %.3f\n", area_rectangulo(largo, ancho) ); // Llamado a la funcion area_rectangulo
                }
                break;
            }

            case 2: {
                int figura;
                printf("Seleccionar forma geometrica (1: Circulo, 2: Rectangulo): \n");
                scanf("%d", &figura);

                if (figura == 1) {
                    float radio;
                    printf("Ingresar valor del radio: \n");
                    scanf("%f", &radio); 
                    printf("El perimetro del circulo es: %.3f\n", perimetro_circulo(radio) ); // Llamado a la funcion perimetro_circulo

                } else if (figura == 2) { 
                    float largo, ancho;
                    printf("Ingresar valor del largo y ancho (separados por un espacio): \n");
                    scanf("%f %f", &largo, &ancho); 
                    printf("El perimetro del rectangulo es: %.3f\n", perimetro_rectangulo(largo, ancho) ); // Llamado a la funcion perimetro_rectangulo
                }
                break;
            }
            
            case 3: { 
                int figura;
                printf("Seleccionar forma geometrica (1: Circulo, 2: Circulo y Rectangulo): \n");
                scanf("%d", &figura);

                if (figura == 1){
                    float x1, y1, radio1, x2, y2, radio2;
                    printf("Ingresar coordenadas de los centros y los radios de cada circulo: \n");
                    scanf("%f %f %f %f %f %f", &x1, &y1, &radio1, &x2, &y2, &radio2);
                    printf("La distancia entre los circulos es: \n", distancia_circulos);
                     
                } else if (figura == 2) {
                    float rectangulo_x, rectangulo_y, largo, ancho, circulo_x, circulo_y, radio;
                    printf("Ingresar coordenadas del centro y radio del circulo, ademas de las coordenadas, el largo y ancho del rectangulo: \n");
                    scanf("%f %f %f %f %f %f %f", &rectangulo_x, &rectangulo_y, &largo, &ancho, &circulo_x, &circulo_y, &radio);
                    printf("La distancia entre el circulo y el rectangulo es: \n", distancia_circulo_rectangulo);

                }
                
                break;
            }
            
            case 4: {
                int colision;
                printf("Seleccionar tipo de colision geometrica (1: Circulo-Circulo, 2: Circulo-Rectangulo, 3: Rectangulo-Rectangulo): \n");
                scanf("%d", &colision);

                switch (colision) {

                    case 1: { // Circulo-Circulo
                        printf("Calculo de colision Circulo-Circulo \n");

                        float x1, y1, radio1, x2, y2, radio2;
                        printf("Ingresar coordenadas del primer circulo: \n");
                        scanf("%f %f %f ", &x1, &y1, &radio1);
                        printf("Ingresar coordenadas del segundo circulo: \n");
                        scanf("%f %f %f ", &x2, &y2, &radio2);

                        if(colision_circulos (x1, y1, radio1, x2, y2, radio2)) {
                            printf("Los circulos colisionan \n");
                        } else {
                            printf("Los circulos NO colisionan \n");
                        }
                            break;
                    }
                    
                    case 2: { // Circulo-Rectangulo
                        printf("Calculo de colision Circulo-Rectangulo \n");

                        float rectangulo_x, rectangulo_y, largo, ancho, circulo_x, circulo_y, radio;
                        printf("Ingresar coordenadas y radio del circulo: \n");
                        scanf("%f %f %f ", &circulo_x, &circulo_y, &radio);
                        printf("Ingresar coordenadas, largo y ancho del rectangulo: \n");
                        scanf("%f %f %f %f", &rectangulo_x, &rectangulo_y, &largo, &ancho);

                        if (colision_circulo_rectangulo (rectangulo_x, rectangulo_y, largo, ancho, circulo_x, circulo_y, radio)) {
                            printf("Las figuras colisionan \n");
                        } else {
                            printf("Las figuras NO colisionan \n");
                        }
                            break;
                        }
                    
                    
                    case 3: { // Rectangulo-Rectangulo
                        printf("Calculo de colision Rectangulo-Rectangulo \n");

                        float x1, y1, x2, y2, x3, y3, x4, y4;
                        printf("Ingresar coordenadas del primer rectangulo: \n");
                        scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
                        printf("Ingresar coordenadas del segundo rectangulo: \n");
                        scanf("%f %f %f %f", &x3, &y3, &x4, &y4);

                        if (colision_rectangulos (x1, y1, x2, y2, x3, y3, x4, y4)) {
                            printf("Las figuras colisionan \n");
                        } else {
                            printf("Las figuras NO colisionan \n");
                        }
                            break;
                    }

                }


                break;
            }
            
            case 5: {
                float x1, y1, x2, y2;
                printf("Ingresar las coordenadas a estudiar: \n");
                scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
                printf("La distancia entre los puntos es: \n", distancia_puntos); 
                break;
            }
            
            case 6: 
                printf("Se ha salido de la calculadora \n");
                break;

            default: 
                printf("Opcion no valida, intentar nuevamente \n");
                break;
        }
        } while (menu != 6);

        return 0;
    } 
