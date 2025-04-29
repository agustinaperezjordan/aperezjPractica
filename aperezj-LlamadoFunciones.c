/* AGUSTINA PEREZ JORDAN - PRACTICA (Funciones)*/

#include <stdio.h>
#include <math.h>
#include "funciones.h"

// case 1: areas

float area_circulo (float radio) { 
    return PI * radio * radio ; 
}

float area_rectangulo (float largo, float ancho) { 
    return largo * ancho; 
}

// case 2: perimetros

float perimetro_circulo (float radio) {
    return 2 * PI * radio;
}

float perimetro_rectangulo (float largo, float ancho) {
    return 2 * (largo + ancho);
}

// case 3: distancia entre figuras

float distancia_circulos (float x1, float y1, float radio1, float x2, float y2, float radio2) {
    return sqrt(pow(x1 - x2, 2) + pow(y2 - y1, 2));
}

float distancia_circulo_rectangulo (float rectangulo_x, float rectangulo_y, float largo, float ancho, float circulo_x, float circulo_y, float radio) {
    float x_mas_cercano = fmax(rectangulo_x, fmin(circulo_x, rectangulo_x + ancho));
    float y_mas_cercano = fmax(rectangulo_y, fmin(circulo_y, rectangulo_y + largo));
    return sqrt(pow(x_mas_cercano - circulo_x, 2) + pow(y_mas_cercano - circulo_y, 2));
}

// case 4: colision entre figuras

float colision_circulos (float x1, float y1, float radio1, float x2, float y2, float radio2) {
    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        return distancia <= (radio1 + radio2);
}

float colision_circulo_rectangulo (float rectangulo_x, float rectangulo_y, float largo, float ancho, float circulo_x, float circulo_y, float radio) { 
    float x_masCercano = fmax(rectangulo_x, fmin(circulo_x, rectangulo_x + ancho));
    float y_masCercano = fmax(rectangulo_y, fmin(circulo_y, rectangulo_y + largo));
    float distancia = sqrt(pow(x_masCercano - circulo_x, 2) + pow(y_masCercano - circulo_y, 2));

        return distancia <= radio;
}

float colision_rectangulos (float x1, float y1, float largo1, float ancho1,float x2, float y2, float largo2, float ancho2) {
        return (x1 < x2 + ancho2 && x1 + ancho1 > x2 && y1 < y2 + largo2 && y1 + largo1 > largo2);
}


float distancia_puntos (float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 
}
