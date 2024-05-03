#include <iostream>

int main() {
    float notas[10];

    
    std::cout << "Ingresa la nota de 10 estudiantes: ";
    for(int i = 0; i < 10; i++) {
        std::cin >> notas[i];
    }

   
    float sum = 0;
    for(int i = 0; i < 10; i++) {
        sum += notas[i];
    }
    float promedio = sum / 10;

    std::cout << "El promedio de las notas es: " << promedio << std::endl;

    return 0;
}