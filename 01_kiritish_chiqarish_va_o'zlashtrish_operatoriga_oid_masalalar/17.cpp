// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Sonlar o'qida a, b, c nuqtalar berilgan. ac va bc kesmaning uzunligi va kesmalar uzunligining yig'indisi  topuvchi programma tuzilsin
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a = 2, b = 5, c = 9;

    cout << " ac uzunligi = " << c - a << endl;
    cout << " bc uzunligi = " << c - b << endl;
    cout << " kesmalar uzunligi = " << ( c - a ) + ( c - b ) << endl;

    return 0;
}