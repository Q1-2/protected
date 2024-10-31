#pragma once
#include"stdafx.h"
#include "Fahrzeug.h"

class PKW: public Fahrzeug{ /* Folge: Die public Methoden von Fahrzeug sind in der main() nicht mehr ansprechbar */ 

private:
	int anzahlTueren; 

public: 
	void setAnzahlTueren(int anzahlTueren) {
		this->anzahlTueren = anzahlTueren;
		
		//Beispiel Zugriffsmodifizierer bei einzelnen Attributen, z.B.   private: int leistung;   in der Klasse Fahrzeug
		this->leistung=120;	 //Zugriff, wenn public.		Zugriff in der main()!
							 //Zugriff, wenn protected.		Keinen Zugriff in der main()!
							//Kein Zugriff, wenn private.	Keinen Zugriff in der main()!
	}

	int getAnzahlTueren() {
		return anzahlTueren;
	}
	
};
