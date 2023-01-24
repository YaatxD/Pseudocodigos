Algoritmo aprueba_Reprueba
	Escribir "Bienvenidos al sistema que te ayudara a saber si apruebas o repruebas en el parcial final"
	
	//En este apartado el usuario tecleara sus calificaciones
		Escribir "Ingrese calificacion del parcial 1"
		Leer Cal1
		Escribir "Ingrese calificacion del parcial 2"
		Leer Cal2
		Escribir "Ingrese calificacion del parcial 3"
		Leer Cal3
		Prom<-(Cal1+Cal2+Cal3)/3 	                           
        Si Prom>=8.5 Entonces
			Escribir "Aprueba"
		Sino
			Escribir "Reprueba"
		Fin Si
		Escribir Prom
FinAlgoritmo
