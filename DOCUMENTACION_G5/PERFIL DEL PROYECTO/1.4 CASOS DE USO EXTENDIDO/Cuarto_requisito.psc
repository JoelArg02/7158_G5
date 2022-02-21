Algoritmo Tercer_requisito
	escribir "a ver"
	leer abrir
	si abrir = "vacio" Entonces
		escribir "ERROR ABRIENDO EL FICHERO"
	Sino 
		Escribir "El examen realizado consta de un nivel de probabilidad de cuan depresiva puede estar # "
		Escribir "Se recomienda hacer un analisis profundo si es necesario"
		Escribir "Enter para continuar con la creacion de la ficha del paciente"
		regsp
	FinSi
	
FinAlgoritmo

SubAlgoritmo regsp
	Escribir "RECUERDE QUE PARA LA CREACIÓN"
	Escribir "DEL HISTORIAL DE LA CONSULTA"
	Escribir "SE CREARA CON EL SIGUIENTE FORMATO:"
	Escribir "DIA/MES/AÑO/NOMBRE/APELLIDO"
	Escribir "EJM: 10_04_21_daniel_espinosa"
	Escribir "SI INTRODUJO MAL LA INFORMACION AVISAR AL ADMINISTRADOR"
	Escribir "Ingrese informacion"
	Leer opc 
	Si opc = "10_04_21_daniel_espinosa" Entonces
		Escribir "Revisa que todo este correcto"
		Escribir "Es posible que el registro ya exista"
		Escribir "Volviendo al inicio"
		regsp
	Sino 
		Escribir "Revisa si se introdujo bien la informacion, digita 1 para continuar o 2 para reintentar"
		Leer Sion
		Si Sion = "1" Entonces
			Escribir "Escribe aqui el resultado y la conclusión que se llego con el paciente"
			Escribir "Recuerda agragar saltos de linea o enter mientras escribes! "
			Leer textoa
			Esperar Tecla
			Limpiar Pantalla
			Escribir "Esto es lo que se guardara en el registro del paciente: "
			Escribir textoa
			Escribir "Se volvera al menu"
		Sino 
			regsp
		FinSi
	FinSi
FinSubAlgoritmo

	