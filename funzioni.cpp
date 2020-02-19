#include "pch.h"
#include "funzioni.h"
#include <iostream>
#include <string>
#include <fstream>

int get_N(stringa nomefile) {
	int n = 0;
	stringa temp;
	fstream_t file;
	file.open(nomefile, std::ios::in);
	if (!file) { std::cout << "file non trovato!"; exit(1); }
	while (file >> temp) {
		n++;
	}
	file.close();
	return n;
}
char calcolaSesso(stringa k) {
	int l = k.length() - 1;
	if (k[l] == 'a') return 'f';
	if (k[l] == 'o') return 'm';
	return ' ';
}
void caricaVet(stringa nomefile, stringa *vet,int &m,int &f ) {
	int i = 0;
	fstream_t file;
	file.open(nomefile, std::ios::in);
	if (!file) { std::cout << "file non trovato!"; exit(1); }
	while (file >> vet[i]) {
		if (calcolaSesso(vet[i]) == 'm')m++;
		if (calcolaSesso(vet[i]) == 'f')f++;
		i++;
	}
}
bool cercaUguali(std::string vet1, std::string *vet2, int n) {
	for (int j = 0; j < n; j++) {
		if (vet1 == vet2[j]) {
			return true;
		}
	}
	return false;
}

void caricaSex(std::string *vet,int n, std::string *sex,int &s, char sesso) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (calcolaSesso(vet[i]) == sesso) {
			if (k == 0) {
				sex[k] = vet[i];
				k++;
			}
			else {
				if (!cercaUguali(vet[i], sex, k)) {
					sex[k] = vet[i];
					k++;
				}
			}
		}
	}
	s = k;
}

void stampaVet(stringa *vet, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << vet[i] << " ";
	}
}
