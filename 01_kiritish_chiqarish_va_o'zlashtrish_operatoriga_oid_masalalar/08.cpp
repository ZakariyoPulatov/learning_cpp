// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Ikkita son a va b berilgan. Ularning o'rta arifmetigini anqlansin. ( a + b ) / 2.
#include <iostream>
#include <math.h>

using namespace std;
void n();
void n(int a, int b);

int main()
{
    n();
    n(4, 6);

    return 0;
}
void n() {

    int a = 4, b = 6;

    cout << " o'rta arifmetigi = " << ( a + b ) / 2 << endl;
}
void n(int a, int b) {
   
    cout << " o'rta arifmetigi = " << ( a + b ) / 2 << endl;
} 