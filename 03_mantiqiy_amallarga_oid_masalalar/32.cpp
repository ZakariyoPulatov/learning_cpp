// Sana: 2023.01.14
// Muallif: Zakariyo Pulatov
// Maqsad: a, b, c butun sonlar berilgan. Jumlani rostlikka tekshiring: "a, b, c tomonli uchburchak to'g'ri burchakli"
#include <iostream>

using namespace std;

int main()
{
    int a=5, b=9, c=5;
    bool natija;

    cout << " natija = " << ((a==c) && (b>a) && (b>c)) << endl;

    return 0;
}