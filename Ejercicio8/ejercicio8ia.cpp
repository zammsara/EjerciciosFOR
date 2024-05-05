#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese la longitud de los vectores: ";
    std::cin >> n;

    int vector1[n], vector2[n];
    int dotProduct = 0;

    std::cout << "Ingrese los elementos del primer vector:\n";
    for (int i = 0; i < n; i++) {
        std::cout << "Elemento " << i+1 << ": ";
        std::cin >> vector1[i];
    }

    std::cout << "Ingrese los elementos del segundo vector:\n";
    for (int i = 0; i < n; i++) {
        std::cout << "Elemento " << i+1 << ": ";
        std::cin >> vector2[i];
    }

    for (int i = 0; i < n; i++) {
        dotProduct += vector1[i] * vector2[i];
    }

    std::cout << "El producto punto de los dos vectores es: " << dotProduct << std::endl;

    return 0;
}


