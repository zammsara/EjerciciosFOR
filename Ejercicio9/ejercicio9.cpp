/*Diseña un programa que solicite al usuario ingresar dos matrices y luego realice
la multiplicacion de matrices. Asegurate de que las dimensiones de las matrices sean 
compatibles para la multiplicacion y muestra la matriz resultante.*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int numcm1, numfm1, numcm2, numfm2;

    cout << "Ingresa el numero de filas de la primera matriz: ";
    cin >> numfm1;
    cout << "Ingresa el numero de columnas de la primera matriz: ";
    cin >> numcm1;
    cout << "Ingresa el numero de filas de la segunda matriz: ";
    cin >> numfm2;
    cout << "Ingresa el numero de columnas de la segunda matriz: ";
    cin >> numcm2;

    if(numcm1 != numfm2){
        cout << "Las matrices son compatibles para multiplicar, continuar proceso";
    }else{
        cout << "La matrices no son compatibles para continuar el proceso...";
    }
    
    int matriz1[numfm1][numcm1];
    int matriz2[numfm2][numcm2];
    int matrizR[numfm1][numcm2];

    cout << "Ingrese los elementos de la primera matriz(filas, columnas): " <<endl;
    for (int i = 0; i < numfm1; ++i) {
        for (int j = 0; j < numcm1; ++j) {
            cin >> matriz1[i][j];
        }
    }
    
    cout << "Ingrese los elementos de la segunda matriz(filas, columnas):" <<endl;
    for (int i = 0; i < numfm2; ++i) {
        for (int j = 0; j < numcm2; ++j) {
            cin >> matriz2[i][j];
        }
        } 
   for (int i = 0; i < numfm1; ++i) {
        for (int j = 0; j < numcm2; ++j) {
            matrizR[i][j] = 0;
            for (int k = 0; k < numcm1; ++k) {
                matrizR[i][j] += matrizR[i][k] * matriz2[k][j];
            }
            }
                    }
    cout << "La matriz resultante de la multiplicación es:" <<endl;
    for (int i = 0; i < numfm1; ++i) {
        for (int j = 0; j < numcm2; ++j) {
            cout << matrizR[i][j] << " ";
        }
        cout <<endl;
    } 

    return 0;
}
