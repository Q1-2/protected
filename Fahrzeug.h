#pragma once
#include "stdafx.h"

class Fahrzeug 
{
	//Beispiel Zugriffsmodifizierer bei einzelnen Attributen, z.B.   private: int leistung;   in der Klasse Fahrzeug
	//public: int leistung;			//Zugriff in class PKW. Zugriff in der main()!
	protected: int leistung;		//Zugriff in class PKW. Keinen Zugriff in der main()!
	//private: 	int leistung;	    //Kein Zugriff in class PKW. Keinen Zugriff in der main()!

private:	
	string hersteller;
	static int anzahl; 

public:
	void setLeistung(int);
	void setHersteller(string);


	const string getHersteller(); 
	int getLeistung();
	int getAnzahlObjekte(); 

	void tune(int);
	Fahrzeug();
	Fahrzeug(int, string);
	Fahrzeug(const Fahrzeug&);

	~Fahrzeug();

};

