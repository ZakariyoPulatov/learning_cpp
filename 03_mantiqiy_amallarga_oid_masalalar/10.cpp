// Sana: 2023.01.05
// Muallif: Zakariyo Pulatov
// Maqsad: Ikkita a va b sonlari berilgan. Jumlani rostlikka tekshiring: " a va b sonlarining faqat bittasi toq son ".
#include <iostream>

using namespace std;

int main()
{
    int a = 3, b =6;
    bool natija;

    cout << " a soni toq son = " << ( a % 2 ) << " b soni juft son = " << !( b % 2 ) << endl;

    return 0;
}