#include "pch.h"
#include "numeroHexadecimal.h"
#include "numeroDecimal.h"

using namespace std;
numeroHexadecimal::numeroHexadecimal(char * numero)
{
	Numero = new char[16];
	for (int i = 0; i < 16; ++i)
	{
		this->Numero[i] = numero[i];
	}
}
numeroHexadecimal::numeroHexadecimal()
{
	Numero = new char[16];
	for (int i = 0; i < 16; ++i)
	{
		this->Numero[i] = 0;
	}
}


numeroDecimal* numeroHexadecimal::toDecimal()
{
	unsigned int numero = 0;
	while (*Numero)
	{
		numero *= 16;
		const char c = *Numero;
		if (c >= 'A' && c <= 'F') numero += c - int('A') + 10;
		if (c >= 'a' && c <= 'f') numero += c - int('a') + 10;
		if (c >= '0' && c <= '9') numero += c - int('0');
		*Numero++;
	}

	
	return  new numeroDecimal(numero);
}




std::istream& operator>>(std::istream &in, numeroHexadecimal &numero)
{

	in >> numero.Numero;


	return in;

}



std::ostream& operator<<(std::ostream &in, const numeroHexadecimal &numero)
{

	in << numero.Numero;

	return in;

}

numeroHexadecimal numeroHexadecimal::operator+(const numeroHexadecimal &numero)
{
	numeroHexadecimal K = numero;

	numeroDecimal h = *K.toDecimal();
	numeroDecimal g = *this->toDecimal();

	numeroDecimal HG = h + g;




	return K;
}

numeroHexadecimal numeroHexadecimal::operator-(const numeroHexadecimal &numero)
{
	numeroHexadecimal K = numero;

	numeroDecimal h = *K.toDecimal();
	numeroDecimal g = *this->toDecimal();

	numeroDecimal HG = h - g;




	return K;
}

