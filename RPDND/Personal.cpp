#include "Personal.h"
#include <windows.h>
Pers EnterPers() 
{
	Pers *person = new Pers;
	person->name = WriteName();
	Sleep(1000);
	person->damage = WriteDamage();
	Sleep(1000);
	person->intelligence = WriteIntelligence();
	Sleep(1000);
	person->speed = WriteSpeed();
	Sleep(1000);
	return *person;
}