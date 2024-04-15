// konsola1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;
int main()
{
    cout << "Wciśnij 1 aby kontynuować, 0 aby zakończyć działanie programu. Proszę nie wpisywać innych liczb." << endl;
    int akcja;
    cin >> akcja;
    if(akcja == 61){
        for (int i = 0; i < 10; i++) {
            if (i % 2 == 0) {
                cout << "Liczba parzysta \t- " << i << endl;
            }
            else if (i % 2 != 0) {
                cout << "Liczba nieparzysta \t- " << i << endl;
            }
        }
    }
    else if (akcja == 60)
        cout << "wybrano zakonczenie programu." << endl;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
