## Funny

En la carpeta `funny/` hay un código de C. Describan las diferencias
de los ejecutables al compilar con y sin el flag `-DDEBUG`. ¿De dónde
vienen esas diferencias?

con el flag -DDEBUG el ejecutable emite lo siguiente:
I'm HERE !!!! 
Violación de segmento (`core' generado)

sin el flag el ejecutable emite:
Violación de segmento (`core' generado)


Las diferencias son debido a que con la flag -DDEBUG se ejecutan las lineas 
que estan dentro de los if del archivo .c  

A lo encontre y entendi de la siguiente linea:
Violación de segmento (`core' generado)
puede ser debido a que estan mal asignados los puntes o falta espacio para asignar dicho punteros

¿Como se pude solucionar para que le programa ande sin necesidad de modificar las dimensiones del array? no lo se 
