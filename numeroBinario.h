#pragma once

#include <iostream>
#include "numeroDecimal.h"

class  numeroBinario
{
	friend std::istream& operator>>(std::istream &, numeroBinario &);
	friend std::ostream& operator<<(std::ostream &, const numeroBinario &);
public:
	numeroBinario(char *);
	numeroBinario();

	numeroDecimal* toDecimal();
	numeroBinario* toBinario();

	numeroBinario operator+(const numeroBinario &);
	numeroBinario operator-(const numeroBinario &);





	//NumeroHexadecimal toHexadecimal();

private:
 char *Numero;



	
};

