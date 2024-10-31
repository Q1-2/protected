#include "stdafx.h"

int Fahrzeug::anzahl=0;

void Fahrzeug::setLeistung(int dieLeistung)
{
	if(dieLeistung < 65 || dieLeistung > 400)
	{
		cout << "Fehler - keine Zuweisung" << endl;
		leistung = 0;
	}
	else leistung = dieLeistung;
}

void Fahrzeug::setHersteller(string derHersteller)
{
	int laenge = derHersteller.length();
	if (laenge <1 || laenge > 10) cout << "Keine Zuweisung!\n";
	else hersteller = derHersteller;
}

int Fahrzeug::getLeistung ()
{
	return leistung;
}

const string Fahrzeug::getHersteller ()
{
	return hersteller;
}

void Fahrzeug::tune(int tuneWert)
{
	leistung = tuneWert+leistung;
}

int Fahrzeug::getAnzahlObjekte()
{
	return anzahl;
}

Fahrzeug::Fahrzeug()
{
	leistung = 0;
	hersteller = "leer";

	anzahl++;
	//cout<<"\tStandardkonstruktor von Fahrzeug (Anzahl: " << anzahl <<" )"<< endl;
	//cout << "\tAdresse des Objektes 0x" << this <<endl;
}


Fahrzeug::Fahrzeug(int dieLeistung, string derHersteller)
{
	setLeistung(dieLeistung);
	hersteller = derHersteller;

	anzahl++;
	//cout<<"\tParameterkonstruktor von Fahrzeug (Anzahl: " << anzahl <<" )" << endl;
	//cout << "\tAdresse des Objektes " << this <<endl;
}

Fahrzeug::Fahrzeug(const Fahrzeug &copy)
{
	leistung = copy.leistung;
	hersteller = copy.hersteller;

	anzahl++;
	//cout<<"\tKopierkonstruktor von Fahrzeug (Anzahl: " << anzahl <<" )" << endl;
	//cout << "\tAdresse des Objektes " << this <<endl;
}


Fahrzeug::~Fahrzeug()
{
	anzahl--;
	//cout <<"\tDestruktor von Fahrzeug (Anzahl: " << anzahl+1 <<" )" << endl;
	//cout << "\tAdresse des Objektes " << this <<endl;
}
