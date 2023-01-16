// Sana: 2022.12.31
// Muallif: Zakariyo Pulatov
// Maqsad: Ucta a, b, c butun sonlar berilgan. Jumlani rostlikka tekshiring:"a<=b<=c".
#include <iostream>

using namespace std;

int main() {
    
    int a = 4, b = 2, c = 3;
    bool natija;

    natija = ( a <= b ) && ( b <= c );

    cout << " natija = " << natija << endl;

    return 0;
}