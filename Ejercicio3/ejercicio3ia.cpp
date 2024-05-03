#include <iostream>

int main() {
    int suma = 0;

    // Iteramos desde 1 hasta 100
    for(int i = 1; i <= 100; ++i) {
        // Calculamos el cuadrado de cada número y lo sumamos a 'suma'
        suma += i * i;
    // Mostramos el resultado
    std::cout << "La suma de los cuadrados de los numeros del 1 al 100 es: " << suma << std::endl;
    }


    return 0;
}
