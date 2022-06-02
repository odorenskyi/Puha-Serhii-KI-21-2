#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>

#include "ModulesPuha.h"

using namespace std;

string copyright()
{
    return "\n� ���� �����";
}

bool logic(int a, int b)
{
    return a + 1 < b;
}

void dechex(int x, int y, int z)
{
    cout <<"������� �������� (x, y, z) � ��������� ������ ��������: " << endl;
    cout << dec <<"x = "<< x <<"\ny = " << y << "\nz = " << z << endl << endl;
    cout <<"������� �������� (x, y, z) � �������������� ������ ��������: " << endl;
    cout << hex << "x = "  << x << "\ny = " << y << "\nz = "  << z << endl;
}

int main()
{
    system("chcp 1251 && cls");
    float x, y, z;
    int  a, b ;
    cout << "������ �������� x: ";
    cin >> x;
    cout << "������ �������� y: ";
    cin >> y;
    cout << "������ �������� z: ";
    cin >> z;
    cout << "������ �������� a: ";
    cin >> a;
    cout << "������ �������� b: ";
    cin >> b;
    cout <<copyright() <<endl;
    cout <<"\nS =  "<< s_calculation(y, z) << endl;
    cout <<"���������� �������� ������: "<< a <<" + 1 < "<< b << " = " << logic(a, b) << endl << endl;
    dechex(x, y, z);

    system("pause");

    return 0;
}

