#include <iostream>
#include <windows.h>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
char wybor, wybor2,wybor3;
float alfa,beta,gamma,alfaRad,betaRad,gammaRad,a,b,c,sin_alfa,sin_beta,sin_gamma=0.0;
int juz_zapisane,katy,konw,boki=0;
bool kat_alfa,kat_beta,kat_gamma,bk_a,bk_b,bk_c;
void konwersja_na_rad()
{
    alfaRad = alfa*M_PI/180.0;
    betaRad = beta*M_PI/180.0;
    gammaRad = gamma*M_PI/180.0;
}
void konwersja_na_stop()
{
    alfa = alfaRad*180.0/M_PI;
    beta = betaRad*180.0/M_PI;
    gamma = gammaRad*180.0/M_PI;
}
void kolory(int kolor)
{
    SetConsoleTextAttribute(color,kolor);
}
void trojkat()
{
    kolory(9);
    cout<<R"(
                                                              .;:
                                                             :  ;
                                                           :    :
                                                         :. )";kolory(12);cout<<"alfa";kolory(9);cout<<R"(..
                                                       ;;       ..
                                                     ::  .;..    ;
                                                   ::         ...;
                                                 .:               ;
                                               .:                 +
                                             .;.                  :.
                                            :.                     :
                                          :.                       :
                                        ;:                         ..
                                      .:                           ..
                                    ::                              :
                                  .:                                ;
                     )";kolory(12);cout<<"c";kolory(9);cout<<R"(            :                                  .:     )";kolory(12);cout<<"b";kolory(9);cout<<R"(
                               :.                                    +
                             ;.                                      ;
                           :.                                         :
                         ::                                           :
                       ::                                             :.
                     .:                                               :.
                   .:                                                  :
                  ;                                                    ;
                :.                                                     :.
              ;:                                                        ;
            ::.:                                                        +
          ::    :                                                   .+   :
        ::       +                                                ::     :
      .:   )";kolory(12);cout<<"beta";kolory(9);cout<<R"(   :                                              ;)";kolory(12);cout<<" gamma";kolory(9);cout<<R"( :
    .:            :                                             ..       :
   ;.             ..                                            :        ..
   .......................................................................
                                       )";kolory(12);cout<<"a\n";kolory(9);
}
void logo()
{
kolory(9);cout<<endl;
cout<<R"(  mm              db   .g8"""bgd         `7MM)"<<endl;Sleep(150);
cout<<R"(  MM                 .dP'     `M           MM                                       __,)"<<endl;Sleep(150);
cout<<R"(mmMMmm `7Mb,od8 `7MM dM'       ` ,6"Yb.    MM  ,p6"bo      `7M'   `MF',pP""Yq.     `7MM  )"<<endl;SetConsoleTextAttribute(color,13);Sleep(150);
cout<<R"(  MM     MM' "'   MM MM         8)   MM    MM 6M'  OO        VA   ,V 6W'    `Wb      MM)"<<endl;Sleep(150);
cout<<R"(  MM     MM       MM MM.         ,pm9MM    MM 8M              VA ,V  8M      M8      MM)"<<endl;SetConsoleTextAttribute(color,14);Sleep(150);
cout<<R"(  MM     MM       MM `Mb.     ,'8M   MM    MM YM.    ,         VVV   YA.    ,A9 ,,   MM)"<<endl;Sleep(150);
cout<<R"(  `Mbmo.JMML.   .JMML. `"bmmmd' `Moo9^Yo..JMML.YMbmd'           W     `Ybmmd9'  db .JMML.)"<<endl;Sleep(150);
cout<<"__________________________________________________________________________________________";

    cout<<"\n";kolory(7);
}
void informacja(int inform)
{
    if (inform==0)
    {
        kolory(14);cout<<"[";
        kolory(12);cout<<"!";
        kolory(14);cout<<"] ";
    }
    else if (inform==1)
    {
        SetConsoleTextAttribute(color,7); cout<<R"([  )";
        SetConsoleTextAttribute(color,10); cout<<R"(OK)";
        SetConsoleTextAttribute(color,7); cout<<R"(  ] )";
    }

}
void menu()
{
    cout<<endl;informacja(0);
    cout<<"Pamietaj o zasadach wprowadzania danych: \n";
    kolory(12);cout<<" kat alfa";kolory(14);cout<<" znajduje sie pomiedzy bokami c i b, \n";
    kolory(12);cout<<" kat beta";kolory(14);cout<<" jest miedzy bokami a i c, \n";
    kolory(12);cout<<" kat gamma";kolory(14);cout<<" jest pomiedzy bokami a i b\n";
    kolory(9);
    cout<<" Musisz zadeklarowc trzy dane aby obliczyc wszystkie boki trojkata\n Kiedy zadeklarujesz trzy dane program obliczy reszte\n";
}
void obliczanie()
{
    informacja(1);
    cout<<"Obliczanie\n Zapisales trzy dane\n";
    if (katy==2&&boki==1)
    {
        informacja(0);
        cout<<"Podano 2 katy oraz 1 bok\n";
        if(kat_alfa==1&&kat_beta==1)
        {
            if (bk_c==1)
            {
                informacja(1);
                cout<<"Obliczanie bokow a oraz b\n";
                cout<<alfa<<" alfa\n";
                cout<<beta<<" beta\n";
                gamma=180-alfa-beta;
                konwersja_na_rad();
                cout<<gamma<<"gamma\n";
                cout<<c<<" c\n";
                sin_alfa = sin(alfaRad);
                sin_beta = sin(betaRad);
                sin_gamma = sin(gammaRad);
                cout<<sin_alfa<<" sinalfa\n";
                cout<<sin_beta<<" sinbeta\n";
                cout<<sin_gamma<<" singamma\n";
                a=c*(sin_alfa/sin_gamma);informacja(1);cout<<"Bok a wynosi "<<a<<endl;
                b=c*(sin_beta/sin_gamma);informacja(1);cout<<"Bok b wynosi "<<b<<endl;
                exit(0);
            }
            else if (bk_b==1)
            {
                informacja(1);
                cout<<"Obliczanie bokow a oraz c\n";
                cout<<alfa<<" alfa\n";
                cout<<beta<<" beta\n";
                gamma=180-alfa-beta;
                konwersja_na_rad();
                cout<<gamma<<"gamma\n";
                cout<<b<<" b\n";
                sin_alfa = sin(alfaRad);
                sin_beta = sin(betaRad);
                sin_gamma = sin(gammaRad);
                cout<<sin_alfa<<" sinalfa\n";
                cout<<sin_beta<<" sinbeta\n";
                cout<<sin_gamma<<" singamma\n";
                a=b*(sin_alfa/sin_beta);informacja(1); cout<<"Bok a wynosi "<<a<<endl;
                c=b*(sin_gamma/sin_beta);informacja(1); cout<<"Bok c wynosi "<<c<<endl;
                exit(0);
            }
            else if (bk_a==1)
            {
                informacja(1);
                cout<<"Obliczanie bokow b oraz c\n";
                cout<<alfa<<" alfa\n";
                cout<<beta<<" beta\n";
                gamma=180-alfa-beta;
                konwersja_na_rad();
                cout<<gamma<<"gamma\n";
                cout<<a<<" a\n";
                sin_alfa = sin(alfaRad);
                sin_beta = sin(betaRad);
                sin_gamma = sin(gammaRad);
                cout<<sin_alfa<<" sinalfa\n";
                cout<<sin_beta<<" sinbeta\n";
                cout<<sin_gamma<<" singamma\n";
                b=a*(sin_beta/sin_alfa); informacja(1); cout<<"Bok b wynosi "<<b<<endl;
                c=a*(sin_gamma/sin_alfa); informacja(1); cout<<"Bok c wynosi "<<c<<endl;
                exit(0);
            }
        }
        else if(kat_alfa==1&&kat_gamma==1)
        {
            if (bk_c==1)
            {
                informacja(1); cout<<"Obliczanie bokow a oraz b\n";
                cout<<alfa<<" alfa\n";
                cout<<gamma<<" gamma\n";
                beta=180-alfa-gamma;
                konwersja_na_rad();
                cout<<beta<<"beta\n";
                cout<<c<<" c\n";
                sin_alfa=sin(alfaRad);
                sin_beta=sin(betaRad);
                sin_gamma=sin(gammaRad);
                cout<<sin_alfa<<" sinalfa\n";
                cout<<sin_beta<<" sinbeta\n";
                cout<<sin_gamma<<" singamma\n";
                a=c*(sin_alfa/sin_gamma); informacja(1);cout<<a<<" bok a\n";
                b=c*(sin_beta/sin_gamma);informacja(1);cout<<b<<" bok b\n";
                exit(0);

            }
            else if(bk_b==1)
            {
                informacja(1);cout<<"Obliczanie bokow a oraz c\n";
                cout<<alfa<<" alfa\n";
                cout<<gamma<<" gamma\n";
                beta=180-alfa-gamma;
                konwersja_na_rad();
                cout<<beta<<" beta\n";
                cout<<b<<" b\n";
                sin_alfa=sin(alfaRad);
                sin_beta=sin(betaRad);
                sin_gamma=sin(gammaRad);
                cout<<sin_alfa<<" sinalfa\n";
                cout<<sin_beta<<" sinbeta\n";
                cout<<sin_gamma<<" singamma\n";
                a=b*(sin_alfa/sin_beta); informacja(1); cout<<"Bok a wynosi "<<a<<endl;
                c=b*(sin_gamma/sin_beta);informacja(1);cout<<"Bok c wynosi "<<c<<endl;
                exit(0);
            }
            else
            {
                informacja(1);cout<<"Obliczanie bokow b oraz c\n";
                exit(0);
            }
        }
        else if (kat_beta==1&&kat_gamma==1)
        {
            if (bk_c==1)
            {
                cout<<"kat beta, gamma, bok c\n";
                exit(0);
            }
            else if (bk_b==1)
            {
                cout<<"kat beta, gamma, bok b\n";
                exit(0);
            }
            else if (bk_c==1)
            {
                cout<<"kat beta, gamma, bok a\n";
                exit(0);
            }
        }
    }
    else if (katy==1&&boki==2)
    {
        cout<<" katy 1 boki 2";
        if(bk_a==1&&bk_b==1)
        {
            if (kat_alfa==1)
            {
                cout<<"bok a, b kat a";
                exit(0);
            }
            else if (kat_beta==1)
            {
                cout<<"bok a, b kat b";
                exit(0);
            }
            else if (kat_gamma==1)
            {
                cout<<"bok a, b kat g";
                exit(0);
            }
        }
        else if (bk_a==1&&bk_c==1)
        {
            if (kat_alfa==1)
            {
                cout<<"bok a, c kat a";
                exit(0);
            }
            else if (kat_beta==1)
            {
                cout<<"bok a, c kat b";
                exit(0);
            }
            else if (kat_gamma==1)
            {
                cout<<"bok a, c kat g";
            }
        }
        exit(0);
    }
    else if (katy==3)
    {
        cout<<"trzy katy";
        exit(0);
    }
    else if(boki==3)
    {
        cout<<"trzy boki";
        exit(0);
    }
}

int main()
{
    juz_zapisane,katy,boki=0;
    logo();
  while (true)
  {
    menu();
    juz_zapisane,katy,boki=0;
    //kat_alfa,kat_beta,kat_gamma,bk_a,bk_b,bk_c=0;
        while (juz_zapisane<3)
        {
        kolory(11);
        cout<<"\n Jak narazie zadeklarowales "<<juz_zapisane<<" danych\n";
        cout<<katy<<" katow i "<<boki<<" bokow\n";
            cout<<"Wybierz co chcesz zapisac (k aby zapisac kat, b aby zapisac bok, t aby pokazac trojkat, w aby wyjsc): ";kolory(9);cin>>wybor;
            switch(wybor)
            {
            case 'k':
            case 'K':
                informacja(0); cout<<"Wybrales zapisanie katu\n Wpisz ktoremu katowi chcesz przypisac wartosc (a- alfa, b-beta, g-gamma): ";
                kolory(9);cin>>wybor2;
                switch(wybor2)
                {
                case 'a':
                case 'A':
                    informacja(1);cout<<"Wybrales przypisanie wartosci katowi alfa\n Wpisz wartosc: ";kolory(9);
                    while(!(cin>>alfa))
                    {
                        informacja(0);cout<<"Nie poprawna wartosc\n Wpisz jeszcze raz: ";cin>>alfa;
                        cin.clear();cin.ignore();
                    }
                    juz_zapisane+=1;katy+=1;kat_alfa=1;
                    break;
                case 'b':
                case 'B':
                    informacja(1);cout<<"Wybrales przypisanie wartosci katowi beta\n Wpisz wartosc: ";kolory(9);
                    while(!(cin>>beta))
                    {
                        informacja(0);cout<<"Nie poprawna wartosc\n Wpisz jeszcze raz: ";cin>>beta;
                        cin.clear();cin.ignore();
                    }
                    juz_zapisane+=1;katy+=1;kat_beta=1;
                    break;
                case 'g':
                case 'G':
                    informacja(1);cout<<"Wybrales przypisanie wartosci katowi gamma\n Wpisz wartosc: ";kolory(9);
                    while(!(cin>>gamma))
                    {
                        informacja(0);cout<<"Nie poprawna wartosc\n Wpisz jeszcze raz: ";cin>>gamma;
                        cin.clear();cin.ignore();
                    }
                    juz_zapisane+=1;katy+=1;kat_gamma=1;
                    break;
                default:
                    kolory(12);cout<<"Nie ma takiej opcji\n";
                    break;
                }//swithc
                break;
            case 'b':
            case 'B':
                informacja(0); cout<<"Wybrales zapisanie boku\n Wpisz ktoremu bokowi chcesz przypisac wartosc (a, b lub c): ";
                kolory(9);cin>>wybor3;
                switch(wybor3)
                {
                case 'a':
                case 'A':
                    informacja(1);cout<<"Wybrales przypisanie wartosci bokowi a\n Wpisz wartosc: ";kolory(9);
                    while(!(cin>>a))
                    {
                        informacja(0);cout<<"Nie poprawna wartosc\n Wpisz jeszcze raz: ";cin>>a;
                        cin.clear();cin.ignore();
                    }
                    juz_zapisane+=1;boki+=1;bk_a=1;
                    break;
                case 'b':
                case 'B':
                    informacja(1);cout<<"Wybrales przypisanie wartosci bokowi b\n Wpisz wartosc: ";kolory(9);
                    while(!(cin>>b))
                    {
                        informacja(0);cout<<"Nie poprawna wartosc\n Wpisz jeszcze raz: ";cin>>b;
                        cin.clear();cin.ignore();
                    }
                    juz_zapisane+=1;boki+=1;bk_b=1;
                    break;
                case 'c':
                case 'C':
                    informacja(1);cout<<"Wybrales przypisanie wartosci bokowi c\n Wpisz wartosc: ";kolory(9);
                    while(!(cin>>c))
                    {
                        informacja(0);cout<<"Nie poprawna wartosc\n Wpisz jeszcze raz: ";cin>>c;
                        cin.clear();cin.ignore();
                    }
                    juz_zapisane+=1;boki+=1;bk_c=1;
                    break;
                default:
                    kolory(12);cout<<"Nie ma takiej opcji\n";
                    break;
                }//swithc
            break;
            case 'w':
            case 'W':
                    char wyjscie;
                    informacja(0); cout<<"Czy napewno chcesz opusic program? T/N: ";kolory(9);cin>>wyjscie;
                    switch(wyjscie)
                    {
                    case 't':
                    case 'T':
                        informacja(1);cout<<"Zamykanie programu triCalc v0.1";
                        for (int w=0; w<5;w++)
                           {
                            kolory(w+3);
                            cout<<".";Sleep(70);
                           }
                        exit(0);
                        break;
                    default:
                        informacja(1);cout<<"Zostajesz w programie\n";
                        break;
                    }
                break;
            case 't':
            case 'T':
                    trojkat();
                    break;
            default:
                    kolory(12);cout<<" Nie ma takiej opcji\n"; break;
            }//swtich

        }
        obliczanie();
    }

    return 0;
}
