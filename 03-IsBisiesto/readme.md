+ *VENTURA, EZEQUIEL* 
+ *LEG: 156.875-9*
___

# Ejercicio 03 - Bisiesto
___

## Etapa #1: Análisis del problema

* #### Dado un año, determinar si es bisiesto.

* *Se definirá una función, teniendo en cuenta que los años bisiestos comienzan a partir de 1584, cualquier año anterior no será considerado bisiesto. Nos basamos en Wikipedia para el cálculo de años bisiestos que sea divisible por 4, no es bisiesto si es divisible por 100 pero si lo es si es divisible por 400, y que la función retorne un valor booleano true o false.*

* *Modelo IPO: N → Comparación → B*
___

## Etapa #2: Diseño de la solución

* #### Lexico:

IsBisiesto: **ℕ --> B**

* #### Pruebas:

assert(IsBisiesto(1582));           
assert(IsBisiesto(1583));       
assert(IsBisiesto(1584));         
assert(IsBisiesto(1659));     
assert(IsBisiesto(1700));      
assert(IsBisiesto(1899));    
assert(IsBisiesto(1900));        
assert(IsBisiesto(1901));      
assert(IsBisiesto(1999));       
assert(IsBisiesto(2001));       

* #### Prototipo:

bool IsBisiesto (unsigned); 

* #### Definicion:

bool IsBisiesto(unsigned anio){                 
return anio >= 1584 and (anio%4 == 0) and ((anio%100 != 0) or anio%400 == 0);                  
}
