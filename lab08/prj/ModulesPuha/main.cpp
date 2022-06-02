#include <iostream>
#include <cstdio>
#include <cmath>


using namespace std;

float s_calculation(float y, float z)
{
     float S = pow((z + y + z), 2) - ( 2 * 3.14 * sqrt(z / 3));
     return  round(S * 100) / 100;

}

