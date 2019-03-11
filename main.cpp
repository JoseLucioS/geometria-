//"Lab 1 - Questão 1" 
//Created by Hilton e Lúcio 10/03/2019

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include "areas.h"
#include "perimetros.h"
#include "volumes.h"

//Declara o namespace a ser usado como default
using namespace std;

//Função que exibe as instruções de uso do programa.
void instrucoes()
{
	cout << "FORMAS GENERICAS:" << endl;
	cout << "# ./main.exe triangulo lado" << endl;
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
	//Alerta que é exibido quando nenhum parâmetro é enviado.
	if(argc == 1)
	{
		cout << "Nenhum parâmetro foi identificado, para efetuar o cálculo execute da seguinte forma:" << endl << endl;
                instrucoes();
	}
	
	//Alerta que é exibido quando passam parâmetros insuficientes.
	else if(argc < 2)
	{
		cout << "ERRO na passagem de parametros!!!" << endl << endl;
		instrucoes();
	}
	//Execução do cálculo do triangulo, checa se foi enviado o valor necessario para o cálculo.
	else if(strcmp(argv[1], "triangulo") == 0 && argc == 3)
	{
		float lado;
		lado = atof(argv[2]);

		cout << "area do triangulo: " << area_triang(lado) << endl;
		cout << "perimetro do triangulo: " << perimetro_triang(lado) << endl;
	}

       	//Execução do cálculo do retangulo, checa se foram enviados os 2 valores necessarios para o cálculo.
	else if(strcmp(argv[1], "retangulo") == 0 && argc == 4)
	{
		float base, altura;
		base = atof(argv[2]);
		altura = atof(argv[3]);

		cout << "area do retangulo: " << area_retang(base, altura) << endl;
		cout << "perimetro do retangulo: " << perimetro_retang(base, altura) << endl;
	}
	
	//Execução do cálculo do quadrado, checa se foi enviado o valor necessario para o cálculo.
	else if(strcmp(argv[1], "quadrado") == 0 && argc == 3)
	{
		float lado;
		lado = atof(argv[2]);

		cout << "area do quadrado: " << area_quad(lado) << endl;
		cout << "perimetro do quadrado: " << perimetro_quad(lado) << endl;
	}

	//Execução do cálculo do circulo, checa se foi enviado o valor necessario para o cálculo.
	else if(strcmp(argv[1], "circulo") == 0 && argc == 3)
	{
		float raio;
		raio = atof(argv[2]);

		cout << "area do circulo: " << area_circ(raio) << endl;
		cout << "perimetro do circulo: " << perimetro_circ(raio) << endl;
	}

	//Execução do cálculo do piramide, checa se foram enviados os 2 valores necessarios para o cálculo.
	else if(strcmp(argv[1], "piramide") == 0 && argc == 4)
	{
		float lado_base, lateral;
		lado_base = atof(argv[2]);
		lateral = atof(argv[3]);
		
		cout << "area da piramide: " << area_piramide(lado_base, lateral) << endl;
		cout << "volume da piramide: " << volume_piramide(lado_base, lateral) << endl;
	}

	//Execução do cálculo do cubo, checa se foi enviado o valor necessario para o cálculo.
	else if(strcmp(argv[1], "cubo") == 0 && argc == 3)
	{
		float lado;
		lado = atof(argv[2]);
		
		cout << "area do cubo: " << area_cubo(lado) << endl;
		cout << "volume do cubo: " << volume_cubo(lado) << endl;
	}

	//Execução do cálculo do paralelepipedo, checa se foram enviados os 3 valores necessarios para o cálculo.
	else if(strcmp(argv[1], "paralelepipedo") == 0 && argc == 5)
	{
		float lado1, lado2, lado3;
		lado1 = atof(argv[2]);
		lado2 = atof(argv[3]);
		lado3 = atof(argv[4]);
		
		cout << "area do paralelepipedo: " << area_paralele(lado1, lado2, lado3) << endl;
		cout << "volume do paralelepipedo: " << volume_paralele(lado1, lado2, lado3) << endl;
	}

	//Execução do cálculo do esfera, checa se foi enviado o valor necessario para o cálculo.
	else if(strcmp(argv[1], "esfera") == 0 && argc == 3)
	{
		float raio;
		raio = atof(argv[2]);
		
		cout << "area da esfera: " << area_esfera(raio) << endl;
		cout << "volume da esfera: " << volume_esfera(raio) << endl;
	}
	
	//Alerta que é exibido quando nenhum parâmetro correto é enviado.
	else
	{
		cout << "ERRO na passagem de parametros!!!" << endl << endl;
		instrucoes();
	}

	return 0;
}
