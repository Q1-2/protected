#include "stdafx.h"


int main()
{
	Fahrzeug f;
	f.setHersteller("Hundai");
	cout << f.getHersteller() << endl;



	PKW meins; 
	meins.setLeistung(3000);

	//Beispiel Zugriffsmodifizierer bei einzelnen Attributen, z.B.   private: int leistung;   in der Klasse Fahrzeug
	//meins.leistung = 222;	     //Zugriff, wenn public.	Zugriff in der main()!
								//KEIN Zugriff, wenn protected. Keinen Zugriff in der main()! Aus protected wird private.
								//Kein Zugriff, wenn private.	Keinen Zugriff in der main()!
	
	
	//Beispiel Zugriffsmodifizierer bei einer Klasse, z.B.  class PKW: public Fahrzeug{}
	//meins.setHersteller("Opel");			//Zugriff auf eine public FahrzeugMethode in der main(), wenn class PKW: public Fahrzeug{}!
											//Keinen Zugriff auf eine public FahrzeugMethode in der main(), wenn class PKW: protected Fahrzeug{}!
											//Keinen Zugriff auf eine public FahrzeugMethode in der main(), wenn class PKW: private Fahrzeug{}!       

	return 0;
}

