/*Desarrolla un programa que permita al usuario ingresar dos vectores de igual longitud 
y luego calcule la suma de ambos vectores. El resultado debe de mostrarse en un tercer vector*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
 
    int n;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

    int vector1[n], vector2[n], vectorSum[n];

    cout << "Ingrese los elementos del primer vector:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> vector1[i];
    }

    cout << "Ingrese los elementos del segundo vector:\n";
    for (int i = 0; i < n; i++) {
      cout << "Elemento " << i+1 << ": ";
      cin >> vector2[i];
    }

    for (int i = 0; i < n; i++) {
        vectorSum[i] = vector1[i] + vector2[i];
    }

    cout << "La suma de los dos vectores es:\n";
    for (int i = 0; i < n; i++) {
        cout << vectorSum[i] << " ";
    }
    
    return 0;
}
    
