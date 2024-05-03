Algoritmo ejercicio4
	Definir notas, todasNotas, promedioGeneral Como Real;
	todasNotas<-0;
	Escribir "Hola, ingresa la nota de los estudiantes ";
	Para s<-1 Hasta 10 Hacer
		Escribir "Ingresa la nota del estudiante ", s, " : ";
		Leer notas;
		todasNotas<-todasNotas + notas;
	FinPara
	promedioGeneral<-todasNotas/10;
	Escribir "El promedio general de las notas de los estudiantes es: ", promedioGeneral;
FinAlgoritmo
