/**************************************************************************************
* Harjoitus 7
* Paulus Linna
* IIA14SB
* Teht�v�kuvaus:
*	Tee ohjelma, joka kysyy k�ytt�j�lt� nimen, pituuden senttein� ja painon kiloina.
*	Ohjelma laskee ja tulostaa k�ytt�j�n ihannepainon (pituus-100). Lis�ksi
*	ohjelma kertoo k�ytt�j�n nykyisen painon eron kiloina verrattuna ihanne-
*	painoon. Ohjelman k�ytt�liittym� toimii seuraavasti:
*
*	Ihannepaino
*
*	Ohjelma laskee ihannepainosi
*	pituutesi perusteella.
*
*	Anna nimesi > Mooses
*	Anna pituutesi senttein� > 175
*	Anna osoitteesi > Peikkovuori 5 as 4
*	Anna painosi kiloina > 89
*
*
*	Arvoisa Mooses
*	Osoitteesi on Peikkovuori 5 as 4
*	Nykyinen painosi 89.0 kg
*	Ihannepainosi 75.0 kg
*	Erotus 14.0 kg
*
*	...
*	a) k�yt� syotto/tulostus toimintoihin funktioita
*	printf/scanf/gets/...(perus C:n funtiot, kirja sivu 86 - 91)  TEHD��N MY�HEMMIN
*	b) k�yt� cin/cout/cin.get... olioita ohjelman
*	toteuttamiseen (c++ metodit, kirja sivu 92 - 99)
*
* P�iv�m��r�: 18.9.2014
* Versio: 1.0
**********************************************************************************/
#include <iostream>
using namespace std;

char nimi[20];
int pituus;
char osoite[50];
int paino;
int summa;
int erotus;

int main()
{
	cout << "Anna nimesi: ";
	cin.getline(nimi, 20);

	cout << "Anna pituutesi senttein�: ";
	cin >> pituus;

	cout << "Anna osoitteesi: ";
	cin.get();
	cin.get(osoite, 50);


	cout << "Anna painosi kiloina: ";
	cin >> paino;

	int summa = pituus - 100;
	int erotus = paino - summa;

	cout << "\nArvoisa " << nimi;
	cout << "\nOsoitteesi on " << osoite;
	cout << "\nNykyinen painosi " << paino;
	cout << "\nIhannepainosi " << summa;
	cout << "\nErotus " << erotus;

	return 0;
}