#include <iostream>

int main() {
    int alumnos = 8;
    int aprobados = 0, reprobados = 0;
    double notaTotal = 0.0, promedioNota = 0.0;

    for (int i = 0; i < alumnos; ++i) {
        double nota;
        std::cout << "Ingrese la nota del alumno " << i + 1 << ": ";
        std::cin >> nota;

        notaTotal += nota;

        if (nota >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    promedioNota = notaTotal/ alumnos;

    std::cout << "Cantidad de alumnos aprobados: " << aprobados << std::endl;
    std::cout << "Cantidad de alumnos reprobados: " << reprobados << std::endl;
    std::cout << "Promedio general del grupo: " << promedioNota << std::endl;

    return 0;
}