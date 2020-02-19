#pragma once
#include <string>
#include <iostream>

typedef std::string stringa;
typedef std::fstream fstream_t;
int get_N(stringa nomefile);
char calcolaSesso(stringa k);
void stampaVet(stringa *vet, int n);
void caricaVet(stringa nomefile, stringa *vet, int &m, int &f);
bool cercaUguali(std::string vet1, std::string *vet2, int n);
void caricaSex(std::string *vet, int n, std::string *sex, int &s, char sesso);
