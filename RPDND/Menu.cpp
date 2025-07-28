#include "menu.h"

void StartGame()
{
	system("cls");
	cout << "  *****************\n";
	Sleep(100);
	cout << "    Starting game!\n";
	Sleep(100);
	cout << "  *****************\n";
	Sleep(100);
}

void Options(string *DiceSystem)
{
	int choice;

	do
	{
		system("cls");
		cout << "Change options:\n";
		cout << "1. Dice roll\n";
		cout << "2. Extra\n";
		cout << "3. To main menu\n";
		cin >> choice;

		switch (choice)
		{
		case 1:
			int choice;

			do
			{
				system("cls");
				cout << "Select dice roll system (Default: Realistic)\n";
				cout << "1. Realistic (Random roll system)\n";
				cout << "2. Fair (Roll system will increase or decrease your min dice roll based on how lucky you were before)\n";
				cout << "3. To options\n";
				cin >> choice;

				switch (choice)
				{
				case 1:
					system("cls");
					*DiceSystem = "Realistic";
					cout << "Dice roll system switched to Realistic\n";
					Sleep(1000);
					break;
				case 2:
					system("cls");
					*DiceSystem = "Fair";
					cout << "Dice roll system switched to Fair\n";
					Sleep(1000);
					break;
				case 3:
					system("cls");
					cout << "Going to main menu...\n";
					Sleep(1000);
					break;
				default:
					system("cls");
					cout << "Invalid option. Select number from the list!\n";
					Sleep(1000);
					break;
				}

			} while (choice != 3);
			break;
		case 2:
			system("cls");
			cout << "abibaboba\n";
			Sleep(1000);
			break;
		case 3:
			system("cls");
			cout << "Going to main menu...\n";
			Sleep(1000);
			break;
		default:
			system("cls");
			cout << "Invalid option. Select number from the list!\n";
			Sleep(1000);
			break;
		}

	} while (choice != 3);
}


void Settings(bool &Confirm)
{
	int choice;

	do
	{
		system("cls");
		cout << "Change settings:\n";
		cout << "1. Disable/enable confirmations\n";
		cout << "2. Extras\n";
		cout << "3. To main menu\n";
		cin >> choice;

		switch (choice)
		{
		case 1:
			system("cls");
			if (Confirm)
			{
				Confirm = false;
				cout << "Confirmations disabled!\n";
				Sleep(1000);
			}
			else
			{
				Confirm = true;
				cout << "Confrimations enabled!\n";
				Sleep(1000);
			}
			break;
		case 2:
			system("cls");
			cout << "abibaboba\n";
			Sleep(1000);
			break;
		case 3:
			system("cls");
			cout << "Going to main menu...\n";
			Sleep(1000);
			break;
		default:
			system("cls");
			cout << "Invalid option. Select number from the list!\n";
			Sleep(1000);
			break;
		}
		
	} while (choice != 3);

}

int menu()
{
	int choice;
	string DiceSystem = "Realistic";
	bool Confirm = true;

	do
	{
		system("cls");
		cout << "1. Start game\n";
		cout << "2. Options\n";
		cout << "3. Settings\n";
		cout << "4. Exit\n";
		cout << "5. Check parameters\n";
		cin >> choice;

		switch (choice)
		{
		case 1:
			StartGame();
			break;
		case 2:
			Options(&DiceSystem);
			break;
		case 3:
			Settings(Confirm);
			break;
		case 4:
			cout << "Exiting...\n";
			Sleep(1000);
			break;
		case 5:
			system("cls");
			cout << "Confirm = " << Confirm << endl;
			cout << "DiceSystem = " << DiceSystem << endl;
			Sleep(1000);
			break;
		default:
			system("cls");
			cout << "Invalid option. Select number from the list!\n";
			Sleep(1000);
			break;
		}
	} while (choice != 1 && choice != 4);

	return 0;
}