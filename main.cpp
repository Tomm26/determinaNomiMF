#include "pch.h"
#include <iostream>
#include "funzioni.h"
#include <string>
#include <cstdlib>


int main()
{
	stringa nomefile;
	std::string *parole, *male, *female;
	int m = 0, f = 0, n;


	std::cout << "Inserisci nome file: ";
	std::cin >> nomefile;

	n = get_N(nomefile);
	parole = new std::string[n];
	caricaVet(nomefile, parole, m, f);
	male = new std::string[m];
	female = new std::string[f];

	caricaVet(nomefile, parole, m, f);
	caricaSex(parole, n, male, m, 'm');
	caricaSex(parole, n, female, f, 'f');
	std::cout << "Il file contiene "<<m<<" nomi maschili (";
	stampaVet(male, m);
	std::cout << ") e " << f  << " nomi femminili (";
	stampaVet(female, f);
	std::cout << ") ";
}
