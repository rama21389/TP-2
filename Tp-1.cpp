/* Mendez Ramiro
*K1051
*16 de abril 2015
*EJ: Ejemplos de usos de variables, valores y operaciones de los tipos de datos
*Descricpcion: Creador de contraseñas 
*/

#include <iostream>

int main ()
{
	char nombre[20];
	int  a,b,c ;
	double altura;
	
	std::cout<< "ingrese un nombre: \n";
	std::cin>> nombre;
	std::cout<< "ingrese un numero: \n";
	std::cin>> a;
	std::cout<< "ingrese otro numero: \n";
	std::cin>> b;
	std::cout<< "ingrese una altura: \n";
	std::cin>> altura;
	
	if (a>b)
	{
		c=a-b ;
	}
	else 
	{
	c=a+b;
	}
	
	std::cout<< "Su nueva contraseña es: \n";
	std::cout<< nombre;
	std::cout<< c * altura ;


	
	
	
	
	return 0;
};
