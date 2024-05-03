/*Escriba el programa para calcular la suma de los cuadrados 
de los numero que hay entre 1 y 100*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{ 
    int numr = 0;
    for(int g =1; g <= 100; ++g){
        int cua = g * g;
        numr += cua;
    }
    cout << "La suma de los cuadrados de los numeros del 1 al 100 es: " <<numr <<endl;
    return 0;
}

