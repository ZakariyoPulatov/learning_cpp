// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Uchta a, b, c butun sonlar berilgan. Jumlani rostlikka tekshiring: "a, b, c sonlaring hech bo'lmaganda bittasi musbat".
#include <iostream>

using namespace std;

int main() {

    int a = -5, b = 2, c = -5;
    bool natija;

    cout << "natija = " << (((a>0) && (b<0) && (c<0)) || ((a<0) && (b>0) && (c<0)) || (a<0) && (b<0) && (c>0)) << endl;

    return 0;
}