#include <iostream>
using namespace std;


bool obrot_w_prawo();
bool obrot_w_lewo();
bool obrot_w_gore();
bool obrot_w_dol();
bool ruch_do_przodu();
bool ruch_do_tylu();

//zrobilem na tyle ile potrafilem, na ile mi pozwalaja umiejetnosci teraz.

bool (*wsk_robot)();

void wykonaj_wszystko();

//bool* wsk_fun;
//bool fun[] = { obrot_w_prawo(), obrot_w_lewo(), obrot_w_gore(), obrot_w_dol(), ruch_do_przodu(), ruch_do_tylu() };


int main(void)
{
	int value = 0;
	int adres[20];

	//wsk_fun = &fun[0];
	//cout << *wsk_fun;

	//bool* wsk;
	int ilosc_wykonanych_ruchow = 0;                 
	//wsk = new bool[ilosc_wykonanych_ruchow];*/ jeszcze tutaj nie do końca wiem jak przypisać adresy danych funkcji do tablicy.
	bool warunek = 1;
	do
	{
		

		cout << "Wybierz jaki ruch ma zrobic robot(1 - 8)\n"
			"(1).Obrot w prawo\n(2).Obrot w lewo\n"
			"(3).Obrot w gore\n(4).Obrot w dol\n"
			"(5).Ruch do przodu\n(6).Ruch do tylu\n"
			"(7).Wykonaj wszystkie ruchy\n(8).Zakoncz program\n>>> ";

		cin >> value;

		switch (value)
		{
		case 1:
			wsk_robot = &obrot_w_prawo;
			(*wsk_robot)();
			ilosc_wykonanych_ruchow++;
			cout << "\n\n\n";
			break;
		case 2:
			wsk_robot = &obrot_w_lewo;
			(*wsk_robot)();
			ilosc_wykonanych_ruchow++;
			cout << "\n\n\n";
			break;
		case 3:
			wsk_robot = &obrot_w_gore;
			(*wsk_robot)();
			ilosc_wykonanych_ruchow++;
			cout << "\n\n\n";
			break;
		case 4:
			wsk_robot = &obrot_w_dol;
			(*wsk_robot)();
			ilosc_wykonanych_ruchow++;
			cout << "\n\n\n";
			break;
		case 5:
			wsk_robot = &ruch_do_przodu;
			(*wsk_robot)();
			ilosc_wykonanych_ruchow++;
			cout << "\n\n\n";
			break;
		case 6:
			wsk_robot = &ruch_do_tylu;
			(*wsk_robot)();
			ilosc_wykonanych_ruchow++;
			cout << "\n\n\n";
			break;
		case 7:
			wykonaj_wszystko();
			ilosc_wykonanych_ruchow+=6;
			break;
		case 8:
			cout << "Zgodnie z zyczeniem, koncze program\n";
			warunek = 0;
			break;
		default:
			cout << "Nie znam komendy\n\n\n";
			break;
		}

		if (ilosc_wykonanych_ruchow >= 20) { cout << "Osiagnieto maksymalna liczbe ruchow robota"; warunek = 0; };

	} while (warunek);
}

bool obrot_w_prawo()
{
	cout << "Zgodnie z komenda bedzie wykonany obrot w prawo\n";
	return true;
}
bool obrot_w_lewo()
{
	cout << "Zgodnie z komenda bedzie wykonany obrot w lewo\n";
	return true;
}
bool obrot_w_gore()
{
	cout << "Zgodnie z komenda bedzie wykonany obrot w gore\n";
	return true;
}
bool obrot_w_dol()
{
	cout << "Zgodnie z komenda bedzie wykonany obrot w dol\n";
	return true;
}
bool ruch_do_przodu()
{
	cout << "Zgodnie z komenda bedzie wykonany ruch do przodu\n";
	return true;
}
bool ruch_do_tylu()
{
	cout << "Zgodnie z komenda bedzie wykonany ruch do tylu\n";
	return true;
}

void wykonaj_wszystko()
{
	wsk_robot = &obrot_w_prawo;
	(*wsk_robot)();
	wsk_robot = &obrot_w_lewo;
	(*wsk_robot)();
	wsk_robot = &obrot_w_gore;
	(*wsk_robot)();
	wsk_robot = &obrot_w_dol;
	(*wsk_robot)();
	wsk_robot = &ruch_do_przodu;
	(*wsk_robot)();
	wsk_robot = &ruch_do_tylu;
	(*wsk_robot)();
	cout << "\n\n\n";

}