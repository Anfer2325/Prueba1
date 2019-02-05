#pragma once


#include <iostream>
class numeroBinario;
class numeroHexadecimal;
class numeroDecimal
{

	friend std::istream& operator>>(std::istream &, numeroDecimal &);
	friend std::ostream& operator<<(std::ostream &, const numeroDecimal &);

public:
	numeroDecimal();

	numeroDecimal(unsigned int);


	
	numeroBinario* toBinario();
	numeroHexadecimal* toHexadecimal();

	unsigned int numero;



	numeroDecimal operator+(const numeroDecimal &);
	numeroDecimal operator-(const numeroDecimal &);
};

