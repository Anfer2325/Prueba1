#include "pch.h"
#include "numeroBinario.h"

numeroBinario::numeroBinario(char* numero)
{
	Numero = new char[32];
	for (int i = 0; i < 32; ++i)
	{
		this->Numero[i] = numero[i];
	}
}

numeroBinario::numeroBinario()
{
	Numero = new char[32];
	for (int i = 0; i < 32; ++i)
	{
		this->Numero[1] = 0;
	}
}

numeroDecimal* numeroBinario::toDecimal()
{
 unsigned int num = 0;
	int s = 1;
	bool inicio = true;

	for (int i = strlen(Numero)-1; i >=0; i--)
	{	
		if (this->Numero[i] == '1')
		{
			if (inicio)
			{
				num += s;
				s += s;
				inicio = false;

			}
			else
			{
				num += s;
				s += s;
			}

		
		}
		else if(Numero[i]=='0')
		{
			if (inicio)
			{
				s+=s;
				inicio = false;
			}
			else
			{
				s += s;
			}
		}

	

	}

	return  new numeroDecimal(num);
}


std::istream& operator>>(std::istream &in, numeroBinario &numero)
{
	
	in >> numero.Numero;


	return in;

}



std::ostream& operator<<(std::ostream &in,const numeroBinario &numero)
{
	
	in << numero.Numero;

	return in;

}


numeroBinario numeroBinario::operator+(const numeroBinario &numero)
{
	numeroBinario K = numero;

	numeroDecimal h = *K.toDecimal();
	numeroDecimal g = *this->toDecimal();

	numeroDecimal HG = h + g;



	
	return *HG.toBinario();
}

numeroBinario numeroBinario::operator-(const numeroBinario &numero)
{
	numeroBinario K = numero;

	numeroDecimal h = *K.toDecimal();
	numeroDecimal g = *this->toDecimal();

	numeroDecimal HG = h - g;




	return *HG.toBinario();
}



