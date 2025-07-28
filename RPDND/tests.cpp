#include "function.h"
#include "Personal.h"
#include "Menu.h"

#include <iostream>

int main()
{
	Pers lox = EnterPers();
	system("cls");
	cout << "Name: " << lox.name << endl;
	cout << "Damage: " << lox.damage << endl;
	cout << "Intelligence: " << lox.intelligence << endl;
	cout << "Speed: " << lox.speed << endl;
	return 0;
}