#include "areas.h"
#include <cmath>

//Calcula a área de um triangulo equilátero
float area_triang(float l)
{
	float area;

	area = (sqrt(3) * (l*l))/4;

	return area;
}

//Calcula a área de um retangulo
float area_retang(float base, float altura)
{
	return base*altura;
}

//Calcula a área de um quadrado
float area_quad(float l)
{
	return l*l;
}

//Calcula a área de um circulo
float area_circ(float raio)
{
	return PI*raio*raio;
}

//Calcula a área de uma piramide
float area_piramide(float l_base, float lateral)
{
	float area_base, area_triang, altura;

	area_base = l_base*l_base;
	
	altura = pow(lateral, 2) - pow((l_base/2), 2);
	altura = sqrt(altura);

	area_triang = (l_base*altura)/2;

	return area_base+(4*area_triang);
}

//Calcula a área de um cubo
float area_cubo(float lado)
{
	return 6*(lado*lado);
}

//Calcula a área de um paralelepipedo
float area_paralele(float l1, float l2, float l3)
{
	float area;
	area = (2*l1*l2) + (2*l1*l3) + (2*l2*l3);

	return area;
}

//Calcula a área de uma esfera
float area_esfera(float raio)
{
	return 4*PI*(raio*raio);
}

