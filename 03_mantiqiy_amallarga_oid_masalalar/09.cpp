// Sana: 2022.12.31
// Muallif: Zakariyo Pulatov
// Maqsad: Ikkita a va b sonlari berilgan. Jumlani rostlikka tekshiring: " a va b sonlarinng hech bo'lmaganda bittasi toq ".
#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 4;
    bool natija;

    cout << " a soni toq son = " << ( a % 2 ) << endl;
    cout << " b soni juft son = " << !( b % 2 ) << endl;

    return 0;   
}