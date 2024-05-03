Algoritmo Ejercicio5
	estAprobados <- 0
	estReprobados <- 0
	notaTodas <- 0
	
	Escribir "Hola, completa la informacion";
	
	Para i <- 1 Hasta 8 Hacer
		Escribir "Ingrese la nota del estudiante ", i, ": "
		Leer nota
		
		Si nota >= 70 entonces
			alumnos_aprobados <- alumnos_aprobados + 1
		Sino
			alumnos_reprobados <- alumnos_reprobados + 1
		FinSi
		
		
			
			notaTodas <- notaTodas + nota
		FinPara
		
			
			promedio <- notaTodas / 8
			
			Escribir "Cantidad de alumnos Aprobados: ", estAprobados
			Escribir "Cantidad de alumnos Reprobados: ", estReprobados
			Escribir "Promedio general : ", promedio

		
FinAlgoritmo

	

