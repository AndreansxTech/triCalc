#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
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
int main()
{
    logo();
    return 0;
}
