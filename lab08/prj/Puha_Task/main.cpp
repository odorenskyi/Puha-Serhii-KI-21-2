#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>

#include "ModulesPuha.h"

using namespace std;

string copyright()
{
    return "\n© ѕуга —ерг≥й";
}

bool logic(int a, int b)
{
    return a + 1 < b;
}

void dechex(int x, int y, int z)
{
    cout <<"¬веденн≥ значенн€ (x, y, z) у дес€тков≥й систем≥ численн€: " << endl;
    cout << dec <<"x = "<< x <<"\ny = " << y << "\nz = " << z << endl << endl;
    cout <<"¬веденн≥ значенн€ (x, y, z) у ш≥стнадц€тков≥й систем≥ численн€: " << endl;
    cout << hex << "x = "  << x << "\ny = " << y << "\nz = "  << z << endl;
}

int main()
{
    system("chcp 1251 && cls");
    float x, y, z;
    int  a, b ;
    cout << "¬вести значенн€ x: ";
    cin >> x;
    cout << "¬вести значенн€ y: ";
    cin >> y;
    cout << "¬вести значенн€ z: ";
    cin >> z;
    cout << "¬вести значенн€ a: ";
    cin >> a;
    cout << "¬вести значенн€ b: ";
    cin >> b;
    cout <<copyright() <<endl;
    cout <<"\nS =  "<< s_calculation(y, z) << endl;
    cout <<"–езультати лог≥чного виразу: "<< a <<" + 1 < "<< b << " = " << logic(a, b) << endl << endl;
    dechex(x, y, z);

    system("pause");

    return 0;
}

