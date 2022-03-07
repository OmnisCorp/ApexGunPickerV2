#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class GunPicker {
public:
	string allGuns[28]{"UN-ASSIGNED", "Kraber", "Alternator", "M-600 Spitfire", "G7 Scout", "R-301 Carbine", "C.A.R SMG",
						"Peacekeeper", "EVA-8 Shotgun", "L-Star LMG", "R-99 SMG", "VK-47 Flatline", "Prowler PDW", 
							"Triple Take", "Longbow DMR", "Rampage LMG", "Volt SMG", "Hemlock", "Charge Rifle", "Havoc", 
								"Bocek Bow", "Sentinel", "Devotion LMG", "30-30 Repeater", "Mastif", "RE-45", "Mozanbique", 
									"P2020"};
};

int main() {

	GunPicker guns;
	bool running = true;
	char userIn;
	int maxInt = 28;
	int randNum;

	cout << "Welcome to my Apex Legends gun picker!\n";
	cout << "Do a few cycles of the program, cuz it's not very random at the start!\n";

	system("pause");

	while (running)
	{
		
		randNum = rand() % maxInt + 1 % 1;
		
		if (randNum == 1) {
			cout << "Use " << guns.allGuns[1] << endl;
		}
		else if(randNum == 2)
		{
			cout << "Use " << guns.allGuns[2] << endl;
		}
		else if (randNum == 3)
		{
			cout << "Use " << guns.allGuns[3] << endl;
		}
		else if (randNum == 4)
		{
			cout << "Use " << guns.allGuns[4] << endl;
		}
		else if (randNum == 5)
		{
			cout << "Use " << guns.allGuns[5] << endl;
		}
		else if (randNum == 6)
		{
			cout << "Use " << guns.allGuns[6] << endl;
		}
		else if (randNum == 7)
		{
			cout << "Use " << guns.allGuns[7] << endl;
		}
		else if (randNum == 8)
		{
			cout << "Use " << guns.allGuns[8] << endl;
		}
		else if (randNum == 9)
		{
			cout << "Use " << guns.allGuns[9] << endl;
		}
		else if (randNum == 10)
		{
			cout << "Use " << guns.allGuns[10] << endl;
		}
		else if (randNum == 11)
		{
			cout << "Use " << guns.allGuns[11] << endl;
		}
		else if (randNum == 12)
		{
			cout << "Use " << guns.allGuns[12] << endl;
		}
		else if (randNum == 13)
		{
			cout << "Use " << guns.allGuns[13] << endl;
		}
		else if (randNum == 14)
		{
			cout << "Use " << guns.allGuns[14] << endl;
		}
		else if (randNum == 15)
		{
			cout << "Use " << guns.allGuns[15] << endl;
		}
		else if (randNum == 16)
		{
			cout << "Use " << guns.allGuns[16] << endl;
		}
		else if (randNum == 17)
		{
			cout << "Use " << guns.allGuns[17] << endl;
		}
		else if (randNum == 18)
		{
			cout << "Use " << guns.allGuns[18] << endl;
		}
		else if (randNum == 19)
		{
			cout << "Use " << guns.allGuns[19] << endl;
		}
		else if (randNum == 20)
		{
			cout << "Use " << guns.allGuns[20] << endl;
		}
		else if (randNum == 21)
		{
			cout << "Use " << guns.allGuns[21] << endl;
		}
		else if (randNum == 22)
		{
			cout << "Use " << guns.allGuns[22] << endl;
		}
		else if (randNum == 23)
		{
			cout << "Use " << guns.allGuns[23] << endl;
		}
		else if (randNum == 24)
		{
			cout << "Use " << guns.allGuns[24] << endl;
		}
		else if (randNum == 25)
		{
			cout << "Use " << guns.allGuns[25] << endl;
		}
		else if (randNum == 26)
		{
			cout << "Use " << guns.allGuns[26] << endl;
		}
		else if (randNum == 27)
		{
		cout << "Use " << guns.allGuns[27] << endl;
		}
		else if (randNum == 28)
		{
		cout << "Use " << guns.allGuns[28] << endl;
		}

		cout << "Would you like to continue??\n";
		cout << "Enter E to exit, any key (other than E) to continue!\n";

		cin >> userIn;

		if (userIn == 'E' || userIn == 'e')
		{
			running = false;
		}
		else
		{
			running = true;
		}
	}
}