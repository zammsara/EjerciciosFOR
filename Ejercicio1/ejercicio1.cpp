/*Dado un numero natural n se desea calcular la suma de los numeros naturales
desde 1 hasta n. Codifica el programa que resuelva este planteamiento*/

#include<iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int n;
    int suma;

    cout << "Hola, ingresa un numero: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        suma = suma + i;
    }
    cout << "El resultado de la suma desde 1 hasta "<< n; cout<< " es: " <<suma;
    
    return 0;
}

