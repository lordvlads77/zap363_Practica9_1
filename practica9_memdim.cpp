/*Este es el archivo que contiene la matriz estatica perteneciente a la práctica 9 */
/*zap363 - Eva Luna Álvarez Calderón*/


#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>

using namespace std;

/*Este es un procedimiento que recibe variables, por eso puede ser void.*/
void imprimir(int** Matriz, int filas, int columnas)
{
	/*Esto es para recorre la matriz para hacer la immpresion en cada posición*/
	for (int f = 0; f < filas; f++)
	{
		for (int c = 0; c < columnas; c++)
		{

			cout << " " << Matriz[f][c];


		}
		cout << endl;



	}



}



int main()
{
	setlocale(LC_ALL, "spanish");

	int filas;
	int columnas;

	cout << "Saga de cuantas filas quieres que sea tu matriz? " << endl;
	cout << "Nuestra Aioros! Nuestra jejeje. " << endl;
	cin >> filas;
	cout << "Enserio Saga? yay! pero dime entonces, de cuantas columnas sera nuestra Matriz? " << endl;
	cin >> columnas;

	/*Aqui se va a crear la matriz*/
	int** Matriz = new int* [filas];


	/*Ciclo para crear columnas*/

	for (int f = 0; f < filas; f++)
	{

		Matriz[f] = new int[columnas];


	}

	/*Asignar  un valor a la matriz*/
	srand(time(0));
	for (int f = 0; f < filas; f++)
	{
		for (int c = 0; c < columnas; c++)
		{


			Matriz[f][c] = rand() % 101;



		}



	}

	/*Metodo para imprimir la matriz*/
	imprimir(Matriz, filas, columnas);

	delete[]Matriz;
	Matriz = NULL;
	cout << "Galaxian Explosion!!! listo ahora esa matriz deberia de haber estirado la pata " << Matriz << endl;
	return 0;
}