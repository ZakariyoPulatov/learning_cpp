// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Tekislikdagi berilgan ikki nuqta ( x1 , y1 ) va ( x2, y2 ) orasidagi masofa topilsin. sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)).
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x1 = 2, x2 = 4, y1 = 3, y2 = 6;

    cout << " masofasi = " << sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)) << endl;

    return 0;
}