#include <iostream>
#include <cmath>

#include "ModulesPuha.h"

using namespace std;

int main()
{
   system("chcp 1251 && cls");

   float y[5] = {5, 2, 1, 3, 16};
   float z[5] = {4, 7, 3, 7, 32};
   float results[5] = {161.75, 246.41, 42.72, 279.41, 6379.49};
    for(int i = 0; i < 5; i++){
        cout << "���� �:" << i + 1 <<":" << endl;
        cout << "�������� [y]: " << y[i] << endl;
        cout << "�������� [z]: " << z[i] << endl;
        cout << "����������� ���������: " << results[i]  << endl;
        cout << "��������� ����������: " << s_calculation(y[i], z[i])  << endl;
         if (s_calculation(y[i], z[i]) == results[i] )
            cout << "���� �:" << i + 1 << ": �������� ������" << endl << endl;
        else
            cout << "���� �:" << i + 1 << ": �������� �������" << endl << endl;
    }
    return 0;
}
