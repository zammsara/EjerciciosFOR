/*Realice un programa que permita calcular y dar como salida el promedio general de una seccion,
tomando en cuenta que esta compuesta por 10 estudiantes y que se tiene la nota de cada uno de ellos*/

#include<iostream>

using namespace std;


int main(int argc, char const *argv[]){

    int estudiantes = 10;
    double todasNotas = 0;
    cout << "Hola, ingresa la nota de los estudiantes " << endl;
   for(int s = 1; s <= estudiantes; ++s){
    double nota;
    cout << "Ingresa la nota del estudiante " << s << ": ";
    cin >> nota;
    todasNotas += nota;
    }

    double promedioGeneral = todasNotas / estudiantes;
    cout << "El promedio general de las notas de los estudiantes es: " << promedioGeneral << endl;

    return 0;

}