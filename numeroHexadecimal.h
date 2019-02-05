#pragma once
#include <iostream>

class numeroDecimal;
class numeroBinario;
class numeroHexadecimal
{
	friend std::istream& operator>>(std::istream &, numeroHexadecimal &);
	friend std::ostream& operator<<(std::ostream &, const numeroHexadecimal &);
public:
	numeroHexadecimal(char *);
	numeroHexadecimal();
	numeroDecimal* toDecimal();
	numeroBinario* toBinario();

	numeroHexadecimal operator+(const numeroHexadecimal &);
	numeroHexadecimal operator-(const numeroHexadecimal &);

private:
	char *Numero;
};

