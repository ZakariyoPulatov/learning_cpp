// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Uchburchakning uchta tomoni uchlari kordinatalari berilgan (x1,y1), (x2,y2), (x3,y3). ikki nuqta orasidagi masofani topish "20.cpp" daberilgan. Uchburchakning yuzasi va perimetrini toping
// s = sqrt(p*(p-a)*(p-b)*(p-c)), p = (a+b+c)/2
#include <iostream> 
#include <math.h>

using namespace std;

int main()
{
    int x1 = 2, x2 = 5, x3 = 7, y1 = 2, y2 = 5, y3 = 2;
    float a, b, c, p;

    a = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    b = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
    c = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));

    p = ( a + b + c ) / 2; 

    cout << " s = " << sqrt(p*(p-a)*(p-b)*(p-c)) << endl;
    cout << " p = " << p << endl; 

    return 0;
}