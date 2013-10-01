/*********************************************************************
Teht�v�: HARJOITUS 11
Tekij�: Pekka Melgin
PVM: 1.10.2013
Kuvaus:
Muuta teht�v�n 9 laskin-ohjelmaa niin, etta valikko nayttaa
seuraavalta:

VALIKKO
0. Lopetus
1. Summa
2. Erotus
3. Tulo
4. Osamaara
5. Jakojaannos
6. Syota uudet luvut laskemista varten

Laskimella on siis mahdollista k�sitell�
useita lukupareja k�ytt�j�n toiveiden
mukaisesti. Mita tapahtuu, jos luku2 on 0?
HUOM! goto -lauseen k�ytt� on KIELLETTY!!!!
*********************************************************************/
#include <iostream> 
using namespace std; 
int main() 
{
	int luku1;
	int luku2;
	int lasku;
	int pois = 0;
	float tulos;

	while (pois < 1) {
		cout << "Anna luku 1: ";
		cin >> luku1;

		cout << "Anna luku 2: ";
		cin >> luku2;

		cout << "VALIKKO"
			<< "\n0. Lopetus"
			<< "\n1. Summa"
			<< "\n2. Erotus"
			<< "\n3. Tulo"
			<< "\n4. Osam��r�"
			<< "\n5. Jakoj��nn�s"
			<< "\n6. Sy�t� uudet luvut laskemista varten\n";
		cin >> lasku;

		if (lasku == 0) {
			pois = 1;
		}
		else if (lasku == 1) {
			tulos = luku1 + luku2;
			cout << luku1
				<< " + "
				<< luku2
				<< " = "
				<< tulos;
		}
		else if (lasku == 2) {
			tulos = luku1 - luku2;
			cout << luku1
				<< " - "
				<< luku2
				<< " = "
				<< tulos;
		}
		else if (lasku == 3) {
			tulos = luku1 * luku2;
			cout << luku1
				<< " * "
				<< luku2
				<< " = "
				<< tulos;
		}
		else if (lasku == 4) {
			tulos = float(luku1) / float(luku2);
			cout << luku1
				<< " / "
				<< luku2
				<< " = "
				<< tulos;
		}
		else if (lasku == 5) {
			tulos = luku1 - luku2;
			cout << luku1
				<< " - "
				<< luku2
				<< " = "
				<< tulos;
		}
		cout << endl;
	}
}