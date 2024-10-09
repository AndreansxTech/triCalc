#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
void logo()
{
    SetConsoleTextAttribute(color,12);
    cout<<R"(
    [Tu bedzie logo]
   )";
}
int main()
{
    logo();
    return 0;
}

