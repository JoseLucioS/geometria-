#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#define PI 3.1415

float area_triang(float l)
{
	float area;

	area = (sqrt(3) * (l*l))/4;

	return area;
}

float perimetro_triang(float l)
{
	return 3*l;
}

float area_retang(float base, float altura)
{
	return base*altura;
}

float perimetro_retang(float base, float altura)
{
	return 2*(base+altura);
}

float area_quad(float l)
{
	return l*l;
}

float perimetro_quad(float l)
{
	return 4*l;
}

float area_circ(float raio)
{
	return PI*raio*raio;
}

float perimetro_circ(float raio)
{
	return PI*2*raio;
}

float area_piramide(float l_base, float lateral)
{
	float area_base, area_triang, altura;

	area_base = l_base*l_base;
	
	altura = pow(lateral, 2) - pow((l_base/2), 2);
	altura = sqrt(altura);

	area_triang = (l_base*altura)/2;

	return area_base+(4*area_triang);
}

float volume_piramide(float l_base, float lateral)
{
	float area_base, altura;

	area_base = l_base*l_base;
	
	altura = pow(lateral, 2) - pow((l_base/2), 2);
	altura = sqrt(altura);
	
	return (area_base*altura)/3;
}

float area_cubo(float lado)
{
	return 6*(lado*lado);
}

float volume_cubo(float lado)
{
	return lado*lado*lado;
}

float area_paralele(float l1, float l2, float l3)
{
	float area;
	area = (2*l1*l2) + (2*l1*l3) + (2*l2*l3);

	return area;
}

float volume_paralele(float l1, float l2, float l3)
{
	return l1*l2*l3;
}

float area_esfera(float raio)
{
	return 4*PI*(raio*raio);
}

float volume_esfera(float raio)
{
	return (4*PI*raio*raio*raio)/3;
}

void instrucoes()
{
	cout << "FORMAS GENERICAS:" << endl;
	cout << "# ./main.exe triangulo base altura" << endl;
	cout << "# ./main.exe retangulo base altura" << endl;
	cout << "# ./main.exe quadrado lado" << endl;
	cout << "# ./main.exe circulo raio" << endl;
	cout << "# ./main.exe piramide LadoDaBase ArestaDiagonal" << endl;
	cout << "# ./main.exe cubo lado" << endl;
	cout << "# ./main.exe paralelepipedo lado1 lado2 lado3" << endl;
	cout << "# ./main.exe esfera raio" << endl;

}

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		cout << "ERRO na passagem de parametros!!!" << endl << endl;
		instrucoes();
	}
	
	else if(strcmp(argv[1], "triangulo") == 0 && argc == 3)
	{
		float lado;
		lado = atof(argv[2]);

		cout << "area do triangulo: " << area_triang(lado) << endl;
		cout << "perimetro do triangulo: " << perimetro_triang(lado) << endl;
	}
       	
	else if(strcmp(argv[1], "retangulo") == 0 && argc == 4)
	{
		float base, altura;
		base = atof(argv[2]);
		altura = atof(argv[3]);

		cout << "area do retangulo: " << area_retang(base, altura) << endl;
		cout << "perimetro do retangulo: " << perimetro_retang(base, altura) << endl;
	}
	
	else if(strcmp(argv[1], "quadrado") == 0 && argc == 3)
	{
		float lado;
		lado = atof(argv[2]);

		cout << "area do quadrado: " << area_quad(lado) << endl;
		cout << "perimetro do quadrado: " << perimetro_quad(lado) << endl;
	}
	
	else if(strcmp(argv[1], "circulo") == 0 && argc == 3)
	{
		float raio;
		raio = atof(argv[2]);

		cout << "area do circulo: " << area_circ(raio) << endl;
		cout << "perimetro do circulo: " << perimetro_circ(raio) << endl;
	}

	else if(strcmp(argv[1], "piramide") == 0 && argc == 4)
	{
		float lado_base, lateral;
		lado_base = atof(argv[2]);
		lateral = atof(argv[3]);
		
		cout << "area da piramide: " << area_piramide(lado_base, lateral) << endl;
		cout << "volume da piramide: " << volume_piramide(lado_base, lateral) << endl;
	}

	else if(strcmp(argv[1], "cubo") == 0 && argc == 3)
	{
		float lado;
		lado = atof(argv[2]);
		
		cout << "area do cubo: " << area_cubo(lado) << endl;
		cout << "volume do cubo: " << volume_cubo(lado) << endl;
	}

	else if(strcmp(argv[1], "paralelepipedo") == 0 && argc == 5)
	{
		float lado1, lado2, lado3;
		lado1 = atof(argv[2]);
		lado2 = atof(argv[3]);
		lado3 = atof(argv[4]);
		
		cout << "area do paralelepipedo: " << area_paralele(lado1, lado2, lado3) << endl;
		cout << "volume do paralelepipedo: " << volume_paralele(lado1, lado2, lado3) << endl;
	}

	else if(strcmp(argv[1], "esfera") == 0 && argc == 3)
	{
		float raio;
		raio = atof(argv[2]);
		
		cout << "area da esfera: " << area_esfera(raio) << endl;
		cout << "volume da esfera: " << volume_esfera(raio) << endl;
	}
	
	else
	{
		cout << "ERRO na passagem de parametros!!!" << endl << endl;
		instrucoes();
	}

	return 0;
}
