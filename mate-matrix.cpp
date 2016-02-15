#include <cstdlib>
#include <iostream>
#include <conio.h>
/* mate-matrix - program dodajcy macierze 5x5 i szukajcy liczby pierwszej*/


using namespace std;

class macierz
{
private:
int prw[5]; /*liczby w kolejnych wierszach*/
int dru[5];
int trz[5];
int czt[5];
int pia[5];
public:
macierz operator+( macierz a);  /*przeladowanie + */
friend istream & operator>>(istream &, macierz &);
friend ostream & operator<<(ostream &, macierz &);
};
int i;

macierz macierz::operator+(macierz a)   /*dodanie macierzy*/
{
macierz suma;
for(i=0;i<5;i++)
{
suma.prw[i] = prw[i] + a.prw[i];
suma.dru[i] = dru[i] + a.dru[i];
suma.trz[i] = trz[i] + a.trz[i];
suma.czt[i] = czt[i] + a.czt[i];
suma.pia[i] = pia[i] + a.pia[i];
}
return suma;
}

macierz komorka;
istream & operator>>(istream & wejscie, macierz & komorka)   /*przeciazony operator strumienia WEJSCIA*/
{
cout<<" Pierwsza kolumna: "<<endl ;
wejscie>>komorka.prw[0] >>komorka.dru[0] >>komorka.trz[0] >>komorka.czt[0] >>komorka.pia[0] ;
cout<<" Druga kolumna: "<<endl ;
wejscie>>komorka.prw[1] >>komorka.dru[1] >>komorka.trz[1] >>komorka.czt[1] >>komorka.pia[1] ;
cout<<" Trzecia kolumna: "<<endl ;
wejscie>>komorka.prw[2] >>komorka.dru[2] >>komorka.trz[2] >>komorka.czt[2] >>komorka.pia[2] ;
cout<<" Czwarta kolumna: "<<endl ;
wejscie>>komorka.prw[3] >>komorka.dru[3] >>komorka.trz[3] >>komorka.czt[3] >>komorka.pia[3] ;
cout<<" Piata kolumna: "<<endl ;
wejscie>>komorka.prw[4] >>komorka.dru[4] >>komorka.trz[4] >>komorka.czt[4] >>komorka.pia[4] ;
return wejscie;
}

ostream & operator<<(ostream & wyjscie, macierz & komorka)   /*przeciazony operator strumienia WYJSCIA*/
{
wyjscie << " " << komorka.prw[0] << " " << komorka.prw[1]<< " " << komorka.prw[2]<< " " << komorka.prw[3]<< " " << komorka.prw[4]<< " ";
wyjscie <<endl<< " " << komorka.dru[0] << " " << komorka.dru[1]<< " " << komorka.dru[2]<< " " << komorka.dru[3]<< " " << komorka.dru[4]<< " ";
wyjscie <<endl<< " " << komorka.trz[0] << " " << komorka.trz[1]<< " " << komorka.trz[2]<< " " << komorka.trz[3]<< " " << komorka.trz[4]<< " ";
wyjscie <<endl<< " " << komorka.czt[0] << " " << komorka.czt[1]<< " " << komorka.czt[2]<< " " << komorka.czt[3]<< " " << komorka.czt[4]<< " ";
wyjscie <<endl<< " " << komorka.pia[0] << " " << komorka.pia[1]<< " " << komorka.pia[2]<< " " << komorka.pia[3]<< " " << komorka.pia[4]<< " ";
return wyjscie;
}

int najmdziel (int m) {          /*poszukiwanie najmniejszego dzielnika*/
int pocz;
pocz = 2;

while (pocz < m && m % pocz != 0) {  /*% - reszta z dzielenia, w tym przypadku nie rowna "0"*/
pocz = pocz + 1;
}
return(pocz);
}

int main()
{
int b=0;
int q=0,z=1;
int m;
macierz jeden,dwa,wynik;

for(;q!=z;)     /* !=    oznacza "nie rowna sie"*/
{
cout<<"\n\n#### PROGRAM ZALICZENIOWY MATE-MATRIX  ####\n\n\n";
cout<<"\n\n";
cout<<"1. DODANIE DWOCH MACIERZY o wymiarach 5x5\n";
/*cout<<"2. OPIS PROGRAMU\n"; */
cout<<"2. SPRAWDZ CZY DANA LICZBA JEST PIERWSZA\n";
cout<<"3. WYJDZ Z PROGRAMU\n";
cout<<"\n\n\n\Wybierz numer od 1-3:";
cin>>b;
switch (b)
{
case 1:system("cls"); /* system("cls") - czyli czyszczenie ekranu.*/
cout<<"Kazda komorka powinna byc potwierdzona ENTERem.\n\n";
cout<<"\n\n\n";
cout<<"\nPodaj parametry PIERWSZEJ macierzy\n";
cin>>jeden;
cout<<"\nPodaj parametry DRUGIEJ macierzy:\n";
cin>>dwa;

cout<<"\n\nDodawanie tych macierzy do siebie: \n\n"<<jeden<<"\n\n + \n\n"<<dwa<<endl;
wynik = jeden + dwa; /* dodanie dwoch macierzy */
cout<<"\nWynik dodawania: \n\n"<<wynik<<endl;
getch();   break;


case 2:system("cls");
cout << " Liczba pierwsza - to taka liczba, ktora BEZ reszty ma tylko dwa dzielniki:  \n";
cout<<"siebie sama oraz jedynke (1). \n";
cout<<"A wiec taka liczba naturalna X ktora ma tylko dwa dzielniki naturalne: 1 oraz X.\n";
cout<<"\nProgram sprawdza czy dana liczba ma wlasciwosci liczby pierwszej.\n";
cout<<"W przypadku zbyt duzych liczb sprawdzenie moze zajac sporo czasu.\n";
cout<<"\n \n";
   cout << "Podaj niewielka liczbe naturalna (maks 9999999): ";
cin >> m;
if (m == najmdziel(m)) {
cout << m << " - ta liczba jest liczba pierwsza." << endl;
}
else {
cout << m << " - ta liczba nie jest liczba pierwsza." << endl;
}
getch(); break; /* powrot do poczatku*/

case 3:
z=0;break; /* powrot do poczatku, ale tym razem z q=w*/


default:
cout<<"Wybierz jeszcze raz.\n";
getch();   break;
}

}

system("PAUSE");
return EXIT_SUCCESS;
}