#include "perimetros.h"

//Calcula o perimetro de um triangulo equilátero
float perimetro_triang(float l)
{
	return 3*l;
}

//Calcula o perimetro de retangulo
float perimetro_retang(float base, float altura)
{
	return 2*(base+altura);
}

//Calcula o perimetro de um quadrado
float perimetro_quad(float l)
{
	return 4*l;
}

//Calcula o perimetro de um circulo
float perimetro_circ(float raio)
{
	return PI*2*raio;
}

