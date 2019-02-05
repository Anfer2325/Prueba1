#include "pch.h"
#include "numeroDecimal.h"
#include "numeroBinario.h"
#include "numeroHexadecimal.h"

#include <iostream>


numeroDecimal::numeroDecimal()
{
	this->numero = 0;
}
numeroDecimal::numeroDecimal(unsigned int numero)
{
	this->numero = numero;
}


numeroBinario* numeroDecimal::toBinario()
{
	int  n, i;
	n=this->numero; 
	

	

	char* numerobinario = new char[32];
	
	
	for (int i = 0; i < 32; i++)
	{
		numerobinario[i] = 0;
	
	}

	for (i = 0; n>0; i++)
	{
		numerobinario[i] = 48+(n % 2);
		
		
		n = n / 2;
	}





	return new numeroBinario(numerobinario);

}

//numeroHexadecimal numeroDecimal::toHexadecimal()
//{
//
//}

numeroDecimal numeroDecimal::operator+(const numeroDecimal &numero)
{
	unsigned int NuevoNUmero = this->numero + numero.numero;

	numeroDecimal a(NuevoNUmero);
	return a;
}

numeroDecimal numeroDecimal::operator-(const numeroDecimal &numero)
{
	unsigned int NuevoNUmero = this->numero - numero.numero;

	numeroDecimal a(NuevoNUmero);
	return a;
}

std::istream& operator>>(std::istream &in, numeroDecimal &numero)
{
	in >> numero.numero;

	return in;
	
}



std::ostream& operator<<(std::ostream &in, const numeroDecimal &numero)
{

	in << numero.numero;

	return in;

}
