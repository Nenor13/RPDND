#include <iostream>
#include <string>
#include "function.h"


typedef struct Pers {
	string name;
	int damage;
	int speed;
	int intelligence;
}Pers;

Pers EnterPers();