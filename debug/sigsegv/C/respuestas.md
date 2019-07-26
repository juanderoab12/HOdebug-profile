En la carpeta `sigsegv/` hay códigos de C y de FORTRAN con su
`Makefile`.  Compilen y corran `small.e` y `big.e`.  Identifiquen los
errores que devuelven (¡si devuelven alguno!) los ejecutables.  Ahora
ejecuten `ulimit -s unlimited` en la terminal y vuelvan a
correrlo. Luego responder las siguientes preguntas:


- ¿Devuelven el mismo error que antes?

en C, la compilacion big.e obtiene un  Violación de segmento
      small.e se compila normal

implementando "ulimit -s unlimited" el programa big.e compilo


- Averigüen qué hicieron al ejecutar la sentencia `ulimit -s
unlimited`. Algunas pistas son: abran otra terminal distinta y fíjense
si vuelve al mismo error, fíjense la diferencia entre `ulimit -a`
antes y después de ejecutar `ulimit -s unlimited`, googleen, etcétera.


la diferencia de antes de ejercutar el comando ulimit -s unlimited,
el stack size              (kbytes, -s) estaba asignado por el valor 8192,
pero ahora despues de haber aplicado "ulimit -s unlimited", el "stack size"
ahora es unlimited.

la sentencia ulimit establece  el tamaño de los archivos que puede ser escritos por
shell y sus procesos secundarios


- La "solución" anterior, ¿es una solución en el sentido de debugging?
No, ya que el codigo en si anda, pero solicita mas recursos

- ¿Cómo harían una solución más robusta que la anterior, que no
requiera tocar los `ulimits`?
la solucion seria determinar en la funcion "void mat_Tmat_mul" que la matriz
"temp" sea allocatable 





