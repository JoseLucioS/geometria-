#include "volumes.h"
#include <cmath>

//Calcula o volume de uma piramide quadrangular
float volume_piramide(float l_base, float lateral)
{
	float area_base, altura;

	area_base = l_base*l_base;
	
	altura = pow(lateral, 2) - pow((l_base/2), 2);
	altura = sqrt(altura);
	
	return (area_base*altura)/3;
}

//Calcula o volume de um cubo
float volume_cubo(float lado)
{
	return lado*lado*lado;
}

//Calcula o volume de um paralelepipedo
float volume_paralele(float l1, float l2, float l3)
{
	return l1*l2*l3;
}

//Calcula o volume de uma esfera
float volume_esfera(float raio)
{
	return (4*PI*raio*raio*raio)/3;
}

