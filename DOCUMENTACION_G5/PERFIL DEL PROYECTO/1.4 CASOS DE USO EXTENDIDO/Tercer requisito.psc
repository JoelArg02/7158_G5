Algoritmo Gestion_de_usuarios
	Escribir 'Gestion de usuarios de DDEDPS'
	Escribir '======================================================================================'
	Escribir '[1]Registre nuevo usuario\n'
	Escribir '[2]Ver datos de un usuario\n'
	Escribir '[3]Eliminar usuario\n'
	Escribir '[4]Volver al menu inicial\n'
	Escribir '[5]Salir\n'
	Escribir '\nDigite la opcion a escoger: '
	Leer op
	Segun op  Hacer
		1:
			Escribir 'Registro de usuario'
			Escribir 'Digite numero de cedula'
			Leer ci
			Si ci = valida Entonces
				Si ci=='1755231683' Entonces
					Escribir 'Error'
					Escribir 'Ya existe este usuario'
				SiNo
					Escribir 'digite su clave'
					Leer clave
					Escribir 'Usuario registrado'
				FinSi
			FinSi
		2:
			Escribir 'Ver datos de un usuario'
			Escribir 'Ingrse C.I del doctor'
			Leer ci
			Si ci=='1755231683' Entonces
				Escribir 'La clave es la siguiente'
				Escribir "Joel"
			SiNo
				Escribir 'No existe el usuario'
			FinSi
		3:
			Escribir 'Eliminar usuario'
			Escribir 'Digite el numero de cedula del usuario a eliminar: '
			Leer cis
			Si cis=='1755231783' Entonces
				Escribir 'El usuario fue borrado correctamente'
				Escribir cis
				Escribir 'Se eliminio de manera correcta'
			SiNo
				Escribir 'Hubo un error vuelva a intentar'
			FinSi
		4:
			Escribir "Vuelve al menu" 
		5: 
			Escribir "Cierra el programa"
	FinSegun
FinAlgoritmo
