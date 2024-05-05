/*Crea un  programa que permita a el usuario ingresar dos vectores de la misma longitud 
y luego calcule su producto punto. Muestra el resultado al finalizar el calculo*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int n;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

    int vect1[n], vect2[n];
    int productoP = 0;

    cout << "Ingrese los elementos del primer vector:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> vect1[i];
    }

    cout << "Ingrese los elementos del segundo vector:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> vect2[i];
    }

    for (int i = 0; i < n; i++) {
        productoP += vect1[i] * vect2[i];
    }

    cout << "El producto punto de los dos vectores es: " << productoP << endl;

    return 0;
}
