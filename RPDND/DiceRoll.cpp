#include "DiceRoll.h"

int DiceRoll(int Dice)
{
	system("cls");
	int randomDice = 0;
	srand(time(NULL));
	int decceleration = 1;

	while (true)
	{
		if (Dice == 100) randomDice = (1 + rand() % 10) * 10;
		else randomDice = 1 + rand() % Dice;
		cout << "Your dice: " << randomDice;
		Sleep(20 + decceleration);
		decceleration *= 2 + 3;
		system("cls");
		if (decceleration > 700)
		{
			cout << "Your dice: " << randomDice;
			return randomDice;
		}
	}
}