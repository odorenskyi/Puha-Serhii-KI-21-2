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
        cout << "Тест №:" << i + 1 <<":" << endl;
        cout << "Значення [y]: " << y[i] << endl;
        cout << "Значення [z]: " << z[i] << endl;
        cout << "Очікуванний результат: " << results[i]  << endl;
        cout << "Результат тестування: " << s_calculation(y[i], z[i])  << endl;
         if (s_calculation(y[i], z[i]) == results[i] )
            cout << "Тест №:" << i + 1 << ": Виконано успішно" << endl << endl;
        else
            cout << "Тест №:" << i + 1 << ": Виконано невдало" << endl << endl;
    }
    return 0;
}
