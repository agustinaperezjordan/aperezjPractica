// Funciones para el calculo del area (case 1)

#define PI 3.141592

float area_circulo (float radio);
float area_rectangulo (float largo, float ancho);

// Funciones para el calculo del perimetro (case 2)

float perimetro_circulo (float radio);
float perimetro_rectangulo (float largo, float ancho);

// Funciones para el calculo de distancia entre figuras (case 3) 

float distancia_circulos (float x1, float y1, float radio1, float x2, float y2, float radio2);
float distancia_circulo_rectangulo (float rectangulo_x, float rectangulo_y, float largo, float ancho, float circulo_x, float circulo_y, float radio);

// Funciones para calcular la colision entre figuras (case 4)

float colision_circulos (float x1, float y1, float radio1, float x2, float y2, float radio2);
float colision_circulo_rectangulo (float rectangulo_x, float rectangulo_y, float largo, float ancho, float circulo_x, float circulo_y, float radio);
float colision_rectangulos (float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);

//Funcion para el calculo de la distancia entre puntos
float distancia_puntos (float x1, float y1, float x2, float y2);



