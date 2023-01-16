// Sana: 2022.12.31
// Muallif: Zakariyo Pulatov
// Maqsad: Ikkita a va b sonlari berilgan. Jumlani rostlikka tekshiring: " a va b sonlarinng hech bo'lmaganda bittasi toq ".
#include <iostream>

using namespace std;

int main() {

    int a = 5, b = 4;
    bool natija;

    cout << " natija = " << (( a % 2 ) == 1 || ( b % 2 ) == 1) << endl;

    return 0;   
}