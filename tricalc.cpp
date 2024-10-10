#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
char wybor, wybor2,wybor3;
float alfa,beta,gamma,bok_a,bok_b,bok_c;
int kolor,juz_zapisane,katy,boki;
bool kat_alfa,kat_beta,kat_gamma,bk_a,bk_b,bk_c;
void kolory()
{
    SetConsoleTextAttribute(color,kolor);
}
void logo()
{
    for (int i=0;i<4;i++)
    {
        cout<<".";Sleep(300);cout<<"\b \b";Sleep(300);
    }
SetConsoleTextAttribute(color,9);cout<<endl;
cout<<R"(  mm              db   .g8"""bgd         `7MM)"<<endl;Sleep(150);
cout<<R"(  MM                 .dP'     `M           MM                                       __,)"<<endl;Sleep(150);
cout<<R"(mmMMmm `7Mb,od8 `7MM dM'       ` ,6"Yb.    MM  ,p6"bo      `7M'   `MF',pP""Yq.     `7MM  )"<<endl;SetConsoleTextAttribute(color,13);Sleep(150);
cout<<R"(  MM     MM' "'   MM MM         8)   MM    MM 6M'  OO        VA   ,V 6W'    `Wb      MM)"<<endl;Sleep(150);
cout<<R"(  MM     MM       MM MM.         ,pm9MM    MM 8M              VA ,V  8M      M8      MM)"<<endl;SetConsoleTextAttribute(color,14);Sleep(150);
cout<<R"(  MM     MM       MM `Mb.     ,'8M   MM    MM YM.    ,         VVV   YA.    ,A9 ,,   MM)"<<endl;Sleep(150);
cout<<R"(  `Mbmo.JMML.   .JMML. `"bmmmd' `Moo9^Yo..JMML.YMbmd'           W     `Ybmmd9'  db .JMML.)"<<endl;Sleep(150);
        for (int i=0; i<89; i++)
       {
           cout<<"_"; Sleep(1);
       }
    cout<<"\n";SetConsoleTextAttribute(color,7);
}
void informacja()
{
    kolor=14;kolory();cout<<"[";
    kolor=12;kolory();cout<<"!";
    kolor=14;kolory();cout<<"] ";
}
void menu()
{
    cout<<endl;informacja();
    cout<<"Pamietaj o zasadach wprowadzania danych: \n";
    kolor=12;kolory();cout<<" kat alfa";kolor=14;kolory();cout<<" znajduje sie pomiedzy bokami c i b, \n";
    kolor=12;kolory();cout<<" kat beta";kolor=14;kolory();cout<<" jest miedzy bokami a i c, \n";
    kolor=12;kolory();cout<<" kat gamma";kolor=14;kolory();cout<<" jest pomiedzy bokami a i b\n";
    kolor=9;kolory();
    cout<<" Musisz zadeklarowc trzy dane aby obliczyc wszystkie boki trojkata\n Kiedy zadeklarujesz trzy dane program obliczy reszte\n";
}
void obliczanie()
{
    cout<<"obliczanoie\n zapisales trzy dane\n";
    if (katy==2&&boki==1)
    {
        cout<<"katy 2 boki 1";
        if(kat_alfa==1&&kat_beta==1)
        {
            if (bk_c==1)
            {
                cout<<"kat alfa, beta, bok c\n";
                exit(0);
            }
            else if(bk_b==1)
            {
                cout<<"kat alfa, beta, bok b\n";
                exit(0);
            }
            else
            {
                cout<<"kat alfa, beta, bok a\n";
                exit(0);
            }
        }
        else if(kat_alfa==1&&kat_gamma==1)
        {
            if (bk_c==1)
            {
                cout<<"kat alfa, gamma, bok c\n";
                exit(0);
            }
            else if(bk_b==1)
            {
                cout<<"kat alfa, gamma, bok b\n";
                exit(0);
            }
            else
            {
                cout<<"kat alfa, gamma, bok a\n";
                exit(0);
            }
        }
        else(kat_beta==1&&kat_gamma==1)
        {
            if (bk_c==1)
            {
                cout<<"kat beta, gamma, bok c\n";
                exit(0);
            }
            else if(bk_b==1)
            {
                cout<<"kat beta, gamma, bok b\n";
                exit(0);
            }
            else
            {
                cout<<"kat beta, gamma, bok a\n";
                exit(0);
            }
        }
        exit(0);
    }
    else if (katy==1&&boki==2)
    {
        cout<<" katy 1 boki 2";
        exit(0);
    }
    else if (katy==3)
    {
        cout<<"trzy katy";
        exit(0);
    }

    exit(0);
}

int main()
{
    //while (true)
    {
    juz_zapisane,katy,boki=0;
    logo();
    menu();
        while (juz_zapisane<3)
        {
        kolor=11;kolory(); cout<<kat_alfa<<"kat alfa\n";
        cout<<"\n Jak narazie zadeklarowales "<<juz_zapisane<<" danych\n";
        cout<<katy<<" katow i "<<boki<<" bokow\n";
            cout<<"Wybierz co chcesz zapisac (k aby zapisac kat, b aby zapisac bok, t aby pokazac trojkat, w aby wyjsc): ";kolor=9;kolory();cin>>wybor;
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
                    juz_zapisane+=1;katy+=1;kat_alfa=1;
                    break;
                case 'b':
                case 'B':
                    informacja();cout<<"Wybrales przypisanie wartosci katowi beta\n Wpisz wartosc: ";kolor=9;kolory();cin>>beta;
                    juz_zapisane+=1;katy+=1;kat_beta=1;
                    break;
                case 'g':
                case 'G':
                    informacja();cout<<"Wybrales przypisanie wartosci katowi gamma\n Wpisz wartosc: ";kolor=9;kolory();cin>>gamma;
                    juz_zapisane+=1;katy+=1;kat_gamma=1;
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
            case 'w':
            case 'W':
                    char wyjscie;
                    informacja(); cout<<"Czy napewno chcesz opusic program? T/N: ";kolor=9;kolory();cin>>wyjscie;
                    switch(wyjscie)
                    {
                    case 't':
                    case 'T':
                        informacja();cout<<"Zamykanie programu triCalc v0.1";
                        for (int w=0; w<5;w++)
                           {
                            kolor=w+3;kolory();
                            cout<<".";Sleep(70);
                           }
                        exit(0);
                        break;
                    default:
                        informacja();cout<<"Zostajesz w programie\n";
                        break;
                    }
                break;
            default:
                    kolor=12;kolory();cout<<" Nie ma takiej opcji\n"; break;
            }//swtich

        }
        obliczanie();
    }
    return 0;
}
