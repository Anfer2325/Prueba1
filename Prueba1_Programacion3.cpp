
#include "pch.h"
#include <iostream>
#include "numeroDecimal.h"
#include "numeroBinario.h"
#include "numeroHexadecimal.h"
using namespace std;

int main()

{
	//numero decimal
	cout << "Ingrese un numero Decimal" << "\n";

	numeroDecimal a;
	cin >> a;

	cout << "\n Numero en binario: " << *a.toBinario()<<"\n";

	//numero binario
	cout << "\n Ingrese un numero Binario" << "\n";
	numeroBinario b;
	cin >> b;

	cout << "\n Numero en Decimal: " << *b.toDecimal() << "\n";

	//numero Hexa
	cout << "\n Ingrese un numero HEXA" << "\n";
	numeroHexadecimal c;
	cin >> c;

	cout << "\n Numero en Decimal: " << *c.toDecimal() << "\n";



}

