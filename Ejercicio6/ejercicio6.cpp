/*Hacer un programa que sume los numeros pares 
comprendidos entre 100 y 200*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int sumar = 0;
    for (int i = 100; i <= 200; i++) {
        if (i % 2 == 0) {
            sumar += i;
        }
    }
    cout << "La suma de los números pares entre 100 y 200 es: " << sumar << endl;
    return 0;
}