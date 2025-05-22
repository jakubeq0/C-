#include <iostream>
#include <cstdlib>

using namespace std;

static void kwota(int ilosc) {
    cout << "Musisz zapłacić mandat o kwocie wynoszącej " << ilosc << ",00 złotych.\n\n";
}

int main()
{

    int choose;

    setlocale(LC_CTYPE, "Polish");

    do
    {
        system("cls");

        cout << "                 Mandaty\n\n";
        cout << "100,00 - przekroczenie prędkości od 1 do 10 km\n";
        cout << "200,00 - przekroczenie prędkości od 11 do 20 km\n";
        cout << "300,00 - przekroczenie prędkości od 21 do 30 km\n";
        cout << "400,00 - przekroczenie prędkości od 31 do 40 km\n";
        cout << "500,00 - przekroczenie prędkości od 41 do 50 km\n";
        cout << "1000,00 - przekroczenie prędkosci od 51 wzwyż\n\n";
        cout << "Podaj wartość przekroczonej prędkości: "; cin >> choose; cout << "\n\n";

        if (choose > 0 && choose < 11) {
            cout << "Przekroczyłeś prędkość o " << choose << " km/h\n";
            kwota(100);
        }

        if (choose > 10 && choose < 21) {
            cout << "Przekroczyłeś prędkość o " << choose << " km/h\n";
            kwota(200);
        }

        if (choose > 20 && choose < 31) {
            cout << "Przekroczyłeś prędkość o " << choose << " km/h\n";
            kwota(300);
        }

        if (choose > 30 && choose < 41) {
            cout << "Przekroczyłeś prędkość o " << choose << " km/h\n";
            kwota(400);
        }

        if (choose > 40 && choose < 51) {
            cout << "Przekroczyłeś prędkość o " << choose << " km/h\n";
            kwota(500);
        }

        if (choose > 51) {
            cout << "Przekroczyłeś prędkość o " << choose << " km/h\n";
            kwota(1000);
        }

        system("pause");
    } while (true);
}
