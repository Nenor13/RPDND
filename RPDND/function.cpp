#include "function.h"
#include "DiceRoll.h"



int InputMenu() 
{
	int action;
	cout << "\nВыбери действие: ";
	cin >> action;
	if (action == 0)
	{
		cout << "Ты что дурачёк?\n";
		return -1;
	}
	if (action > 5)
	{
		cout << "Ну в меню же всего 5 действий, куда херачишь?\n";
		return -1;
	}
	return action;
}


string WriteName()
{
	
	string name;
	cout << "\nWhat is your name??? ";
	cin >> name;
	return name;
}

int WriteDamage()
{
	int dmg = DiceRoll(10);
	cout << "\nYour damage: " << dmg << endl;
	return dmg;
}

int WriteIntelligence()
{
	int intel = DiceRoll(10);
	cout << "\nYour intelligence: " << intel << endl;
	return intel;
}

int WriteSpeed()
{
	int speed = DiceRoll(10);
	cout << "\nYour speed: " << speed << endl;
	return speed;
}