test_gprof1.f90

Optimizaciones mediente flags

gfortran -O0 test_gprof1.f90

taylor@taylor:~/Escritorio/DIA3/HOdebug-profile/profile/FORTRAN$ time ./a.out
 good start
 good end
 bad start
 bad end

real	0m1.220s
user	0m1.157s
sys	0m0.052s

gfortran -O1 test_gprof1.f90

 good start
 good end
 bad start
 bad end

real	0m1.360s
user	0m1.260s
sys	0m0.096s

gfortran -O3 test_gprof1.f90

 good start
 good end
 bad start
 bad end

real	0m0.560s
user	0m0.479s
sys	0m0.080s

con el flag O3 el tiempo de ejecucion que menor que con O0 que con 01

Ahora pasamos con: gfortran -O0 test_gprof2.f90


 good start
 good end
 bad startG
 bad end

real	0m5.209s
user	0m5.095s
sys	0m0.112s

gfortran -O1 test_gprof2.f90

 good start
 good end
 bad start
 bad end

real	0m1.697s
user	0m1.599s
sys	0m0.096s

gfortran -O3 test_gprof2.f90

 good start
 good end
 bad start
 bad end

real	0m0.568s
user	0m0.480s
sys	0m0.088s

nuevamente la flag O3 lo ejecuta en menor tiempo, en este caso a flag O0 tomo mas tiempo que 01

gfortran -O0 1-loop-interch.f90 

 good start
 good end
 bad start
 bad end

real	0m2.215s
user	0m2.140s
sys	0m0.076s

 gfortran -O1 1-loop-interch.f90

 good start
 good end
 bad start
 bad end

real	0m1.382s
user	0m1.281s
sys	0m0.096s

 gfortran -O3 1-loop-interch.f90

 good start
 good end
 bad start
 bad end

real	0m0.569s
user	0m0.469s
sys	0m0.100s

de vuelta gano O3, continuo O1 y despues O0

gfortran -O0 2-gprof-ex.f90

 good start
 good end
 bad start
 bad end

real	0m9.943s
user	0m9.660s
sys	0m0.260s

gfortran -O1 2-gprof-ex.f90

 good start
 good end
 bad start
 bad end

real	0m2.345s
user	0m2.187s
sys	0m0.152s


gfortran -O3 2-gprof-ex.f90

 good start
 good end
 bad start
 bad end

real	0m0.629s
user	0m0.520s
sys	0m0.108s

nuevamente la optimizacion O3 es la "ganadora" seguida de O1, y despues O0

gfortran -O0 3-mixing-cast.f90

 bad start
 bad end - time    16.1569996    
 good start
 good end - time    17.0799999    

real	0m33.503s
user	0m33.390s
sys	0m0.100s

gfortran -O1 3-mixing-cast.f90

 bad start
 bad end - time    4.16900015    
 good start
 good end - time    4.24700022    

real	0m8.639s
user	0m8.525s
sys	0m0.108s

gfortran -O3 3-mixing-cast.f90

 bad start
 bad end - time    1.88399994    
 good start
 good end - time    4.33699989    

real	0m6.397s
user	0m6.305s
sys	0m0.092s


La optimizacion O3 presenta un tiempo de ejecucion menor en comparacion a las otras flags en todos los casos.
Con respecto a las otras optimizaciones (O0 o 01) , O1 mejor desempeño que O0 en cuestion de tiempo.



