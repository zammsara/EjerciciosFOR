#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    int inicio = 100;
    int fin = 200;

    
    for (int i = inicio; i <= fin; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }

   
    cout << "La suma de los numeros pares comprendidos entre " << inicio << " y " << fin << " es: " << suma << endl;

    return 0;
}