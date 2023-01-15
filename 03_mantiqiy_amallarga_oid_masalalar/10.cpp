// Sana: 2023.01.05
// Muallif: Zakariyo Pulatov
// Maqsad: Ikkita a va b sonlari berilgan. Jumlani rostlikka tekshiring: " a va b sonlarining faqat bittasi toq son ".
#include <iostream>

using namespace std;

int main()
{
    int a = 1, b =1;
    bool natija;

    cout << ((( a % 2 ) == 1 && ( b % 2 ) == 0) || (( a % 2 ) == 0 && ( b % 2 ) == 1)) << endl;

    return 0;
}