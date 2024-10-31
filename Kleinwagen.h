#pragma once
#include"stdafx.h"
#include"PKW.h"

class Kleinwagen:protected PKW{
 
private: 
	int listenpreis; 

public:
	void setListenpreis(int derListenpreis) {

	if(derListenpreis < 18000) //Ein Kleinwagen hat einen Listenpreis unter 18.000 Euro.
		listenpreis = derListenpreis;
	else 
		cout <<"Das ist kein Kleinwagen mehr!"<< endl;
	cout << this->leistung; 
	}

	
};