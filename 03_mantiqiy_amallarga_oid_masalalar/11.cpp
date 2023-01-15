// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Ikkita butun sona a va b berilgan sonlari berilgan. Jumlani rostlikka tekshiring: " a va b sonlaring har ikkalasiham  toq yoki juft son ".
#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 3;
    bool natija;

    cout << "natija " << ((((a%2) == 1 ) && (b%2) == 1 ) || (((a%2) == 0) && (a%2) ==0)) << endl;

    return 0;
}