
#include <iostream>
#include <string>



using namespace std;

// Verwenden des Syttem-Namensraumes, um nicht überall System:: schreiben zu müssen
using namespace System;


int main()
{

	// Zum Vergleich: Auch "normaler" C++ Code kann in CLI Anwendungen geschrieben werden
	cout << "Hallo Welt , Jetzt mit CLR" << endl;
	string text = "Test";
	cout << text << endl;
	system("pause");

	
	// Konolenausgabe mit .NET-Framework
	Console::WriteLine("Hallo verwaltete Welt");
	
	// Verwalteter String mit ^-Handle
	String^ verwalteterText = "Bla";
	
	// Writline schliesst die Zeile auch ab (quasi endl)
	Console::WriteLine(verwalteterText);
		
	// Hilfsangabe um die Konsole offen zu halten
	Console::ReadKey();

	return 0;
}
