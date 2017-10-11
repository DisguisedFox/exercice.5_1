// OOPexercice51.cpp : Définit le point d'entrée pour l'application console.
//

#include "stdafx.h"


//In main.cpp
#include <iostream>
#include "box.h"

int main()
{
	Box b1 = Box(2.0, 3.0, 4.0, 5.0);
	Box b2 = Box(5.0, 4.0, 3.0, 2.0);

	if (b1.isColliding(b2))
	{
		std::cout << "Wistiti\n";
	}
	else
	{
		std::cout << "Nomenclature\n";
	}
	system("pause");
}
