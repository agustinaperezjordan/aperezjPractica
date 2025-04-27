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
                    printf("El area del circulo es: %.3f\n", area_circulo(radio)); // Llamado a la funcion area_circulo

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
                    printf("El perimetro del circulo es: %.3f\n", perimetro_circulo(radio)); // Llamado a la funcion perimetro_circulo

                } else if (figura == 2) { 
                    float largo, ancho;
                    printf("Ingresar valor del largo y ancho (separados por un espacio): \n");
                    scanf("%f %f", &largo, &ancho); 
                    printf("El perimetro del rectangulo es: %.3f\n", perimetro_rectangulo(largo, ancho) ); // Llamado a la funcion perimetro_rectangulo
                }
                break;
            }
            
            case 3: {
                float x1, y1, x2, y2;
                printf("Ingresar las coordenadas de las figuras (separados por un espacio): ");
                scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
                printf("La distancia entre las figuras es: %.3f\n", distancia_figuras(x1, y1, x2, y2) ); // Llamado a la funcion distancia_figuras
                break;
            }
            
            case 4: {
                float x1, y1, radio1, x2, y2, radio2;
                printf("Ingresar las coordenadas y el radio de la primera figura: \n");
                scanf("%f %f %f", &x1, &y1, &radio1);
                printf("Ingresar las coordenadas y el radio de la segunda figura: \n");
                scanf("%f %f %f", &x2, &y2, &radio2);
                printf("Verificacion de colision: \n", colision_figuras()); // Llamado a la funcion colision_figuras
                break;
            }
            
            case 5: {
                float x1, y1, x2, y2;
                printf("Ingresar las coordenadas a estudiar: \n");
                scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
                printf("La distancia entre los puntos es: \n"); // Llamado a la funcion distancia_puntos
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
