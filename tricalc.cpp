#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
char wybor;
int kolor;
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
void trojkat()
{
    cout<<R"(

    )";
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
    kolor=12;kolory();cout<<" kat alfa";kolor=14;kolory();cout<<" znajduje sie pomiedzy bokami a i c, \n";
    kolor=12;kolory();cout<<" kat beta";kolor=14;kolory();cout<<" jest miedzy bokami a i b, \n";
    kolor=12;kolory();cout<<" kat gamma";kolor=14;kolory();cout<<" jest pomiedzy bokami b i c\n";
    kolor=11;kolory();cout<<"Ktory bok chcesz obliczyc?\n";
    cout<<"Wpisz odpowiednio 1 dla boku a, 2 dla boku b, 3 dla boku c, a dla katu alfa, b dla katu beta, c dla katu gamma: ";
    kolor=9;kolory();cin>>wybor;
}
int main()
{
    logo();
    while (true)
    {
    menu();
        switch(wybor)
        {
        case '1':
            informacja(); cout<<" Wybrales obliczanie boku a";kolor=11;kolory();
            cout<<" Ktory kat trojkata chcesz wprowadzic";
            break;
        default:
            kolor=12;kolory();cout<<" Nie ma takiej opcji\n";
            break;
        }
    }

    return 0;
}
