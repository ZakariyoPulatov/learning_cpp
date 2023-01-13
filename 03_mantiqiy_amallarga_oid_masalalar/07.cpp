// Sana: 2022.12.31
// Muallif: Zakariyo Pulatov
// Maqsad: Uchta a, b, c butun sonlar berilgan. Jumlani rotlikka tekshiring:" b soni a va c sonlari orasida yotadi ".
#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 2, c = 3;
    bool natija;

    natija = ( a < b ) && ( b < c );

    cout << " natija = " << natija << endl;

    return 0;
}