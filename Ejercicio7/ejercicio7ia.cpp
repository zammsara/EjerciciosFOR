#include <iostream>
#include <vector>

int main() {
    int n; // longitud de los vectores

    // Pedir al usuario la longitud de los vectores
    std::cout << "Ingrese la longitud de los vectores: ";
    std::cin >> n;

    // Crear los vectores
    std::vector<int> vector1(n);
    std::vector<int> vector2(n);
    std::vector<int> vectorSuma(n);

    // Pedir al usuario los elementos del primer vector
    std::cout << "Ingrese los elementos del primer vector: ";
    for (int i = 0; i < n; i++) {
        std::cin >> vector1[i];
    }

    // Pedir al usuario los elementos del segundo vector
    std::cout << "Ingrese los elementos del segundo vector: ";
    for (int i = 0; i < n; i++) {
        std::cin >> vector2[i];
    }

    // Calcular la suma de los vectores
    for (int i = 0; i < n; i++) {
        vectorSuma[i] = vector1[i] + vector2[i];
    }

    // Mostrar el resultado
    std::cout << "La suma de los vectores es: ";
    for (int i = 0; i < n; i++) {
        std::cout << vectorSuma[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}