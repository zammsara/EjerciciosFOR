Proceso ejercicio8
	Definir n, productoP, vect1, vect2, i Como Entero;
	Escribir "Ingrese la longitud de los vectores: ";
	Leer n;
	Para i <- 1 Hasta n Con Paso 1 Hacer
		Escribir "Ingrese el elento ", i, " de el primer vector: ";
		Leer vect1;
	FinPara
	
	Para i <- 1 Hasta n Con Paso 1 Hacer
		Escribir "Ingrese el elemento ", i, " de el segundo vector: ";
		Leer vect2;
	FinPara
	
	productoP <- 0;
	Para i <- 1 Hasta n Con Paso 1 Hacer
		productoP <- productoP + (vect1 * vect2);
	FinPara
	
	Escribir "El producto punto de los vectores es:", productoP;
	
	
FinProceso
