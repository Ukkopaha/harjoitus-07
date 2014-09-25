/**************************************************************************************
* Harjoitus 7
* Paulus Linna
* IIA14SB
* Tehtäväkuvaus:
*	Tee ohjelma, joka kysyy käyttäjältä nimen, pituuden sentteinä ja painon kiloina.
*	Ohjelma laskee ja tulostaa käyttäjän ihannepainon (pituus-100). Lisäksi
*	ohjelma kertoo käyttäjän nykyisen painon eron kiloina verrattuna ihanne-
*	painoon. Ohjelman käyttöliittymä toimii seuraavasti:
*
*	Ihannepaino
*
*	Ohjelma laskee ihannepainosi
*	pituutesi perusteella.
*
*	Anna nimesi > Mooses
*	Anna pituutesi sentteinä > 175
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
*	a) käytä syotto/tulostus toimintoihin funktioita
*	printf/scanf/gets/...(perus C:n funtiot, kirja sivu 86 - 91)  TEHDÄÄN MYÖHEMMIN
*	b) käytä cin/cout/cin.get... olioita ohjelman
*	toteuttamiseen (c++ metodit, kirja sivu 92 - 99)
*
* Päivämäärä: 18.9.2014
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

	cout << "Anna pituutesi sentteinä: ";
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