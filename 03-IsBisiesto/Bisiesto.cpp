// 03-Bisiesto.cpp
// Dado un año, determinar si es bisiesto
// EV
// 200610

#include <cassert>

bool IsBisiesto(unsigned);

int main() {

    assert(not IsBisiesto(1582));
	assert(not IsBisiesto(1583));
	assert(IsBisiesto(1584));
	assert(not IsBisiesto(1659));
	assert(not IsBisiesto(1700));
	assert(IsBisiesto(1820));
	assert(not IsBisiesto(1900));
	assert(not IsBisiesto(1901));
	assert(not IsBisiesto(1999));
	assert(IsBisiesto(2000));
	assert(not IsBisiesto(2001));
	assert(IsBisiesto(2020));
	
}

bool IsBisiesto(unsigned anio){
	
return anio >= 1584 and (anio%4 == 0) and ((anio%100 != 0) or anio%400 == 0);
}
