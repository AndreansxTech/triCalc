#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
char wybor, wybor2,wybor3;
float alfa,beta,gamma,bok_a,bok_b,bok_c;
int kolor,juz_zapisane,katy,boki;;
void kolory()
{
    SetConsoleTextAttribute(color,kolor);
}
void logo()
{
    SetConsoleTextAttribute(color,9);
    cout<<R"(
  mm              db   .g8"""bgd         `7MM
  MM                 .dP'     `M           MM                                       __,
mmMMmm `7Mb,od8 `7MM dM'       ` ,6"Yb.    MM  ,p6"bo      `7M'   `MF',pP""Yq.     `7MM  )"<<endl;SetConsoleTextAttribute(color,13);
cout<<R"(  MM     MM' "'   MM MM         8)   MM    MM 6M'  OO        VA   ,V 6W'    `Wb      MM
  MM     MM       MM MM.         ,pm9MM    MM 8M              VA ,V  8M      M8      MM)"<<endl;SetConsoleTextAttribute(color,14);
cout<<R"(  MM     MM       MM `Mb.     ,'8M   MM    MM YM.    ,         VVV   YA.    ,A9 ,,   MM
  `Mbmo.JMML.   .JMML. `"bmmmd' `Moo9^Yo..JMML.YMbmd'           W     `Ybmmd9'  db .JMML.

)";
SetConsoleTextAttribute(color,7);
}
void informacja()
{
    kolor=14;kolory();cout<<"[";
    kolor=12;kolory();cout<<"!";
    kolor=14;kolory();cout<<"] ";
}
void menu()
{
    informacja();
    cout<<"Pamietaj o zasadach wprowadzania danych: \n";
    kolor=12;kolory();cout<<" kat alfa";kolor=14;kolory();cout<<" znajduje sie pomiedzy bokami c i b, \n";
    kolor=12;kolory();cout<<" kat beta";kolor=14;kolory();cout<<" jest miedzy bokami a i c, \n";
    kolor=12;kolory();cout<<" kat gamma";kolor=14;kolory();cout<<" jest pomiedzy bokami a i b\n";
    kolor=11;kolory();
    cout<<" Musisz zadeklarowc trzy dane aby obliczyc wszystkie boki trojkata\n Kiedy zadeklarujesz trzy dane program obliczy reszte\n";
}


int main()
{
    juz_zapisane,katy,boki=0;
    logo();
    menu();
        while (juz_zapisane<3)
        {
        cout<<" Jak narazie zadeklarowales "<<juz_zapisane<<" danych\n";
        cout<<katy<<" katow i "<<boki<<" bokow\n";
            cout<<"Wybierz co chcesz zapisac (k aby zapisac kat, b aby zapisac bok): ";kolor=9;kolory();cin>>wybor;
            switch(wybor)
            {
            case 'k':
            case 'K':
                informacja(); cout<<"Wybrales zapisanie katu\n Wpisz ktoremu katowi chcesz przypisac wartosc (a- alfa, b-beta, g-gamma): ";
                kolor=9;kolory();cin>>wybor2;
                switch(wybor2)
                {
                case 'a':
                case 'A':
                    informacja();cout<<"Wybrales przypisanie wartosci katowi alfa\n Wpisz wartosc: ";kolor=9;kolory();cin>>alfa;
                    juz_zapisane+=1;katy+=1;
                    break;
                case 'b':
                case 'B':
                    informacja();cout<<"Wybrales przypisanie wartosci katowi beta\n Wpisz wartosc: ";kolor=9;kolory();cin>>beta;
                    juz_zapisane+=1;katy+=1;
                    break;
                case 'g':
                case 'G':
                    informacja();cout<<"Wybrales przypisanie wartosci katowi gamma\n Wpisz wartosc: ";kolor=9;kolory();cin>>gamma;
                    juz_zapisane+=1;katy+=1;
                    break;
                default:
                    kolor=12;kolory();cout<<"Nie ma takiej opcji\n";
                    break;
                }//swithc
                break;
            case 'b':
            case 'B':
                informacja(); cout<<"Wybrales zapisanie boku\n Wpisz ktoremu bokowi chcesz przypisac wartosc (a, b lub c): ";
                kolor=9;kolory();cin>>wybor3;
                switch(wybor3)
                {
                case 'a':
                case 'A':
                    informacja();cout<<"Wybrales przypisanie wartosci bokowi a\n Wpisz wartosc: ";kolor=9;kolory();cin>>bok_a;
                    juz_zapisane+=1;boki+=1;
                    break;
                case 'b':
                case 'B':
                    informacja();cout<<"Wybrales przypisanie wartosci bokowi b\n Wpisz wartosc: ";kolor=9;kolory();cin>>bok_b;
                    juz_zapisane+=1;boki+=1;
                    break;
                case 'c':
                case 'C':
                    informacja();cout<<"Wybrales przypisanie wartosci bokowi c\n Wpisz wartosc: ";kolor=9;kolory();cin>>bok_c;
                    juz_zapisane+=1;boki+=1;
                    break;
                default:
                    kolor=12;kolory();cout<<"Nie ma takiej opcji\n";
                    break;
                }//swithc
            break;
            default:
                    kolor=12;kolory();cout<<" Nie ma takiej opcji\n"; break;
            }//swtich
        }
    return 0;
}
