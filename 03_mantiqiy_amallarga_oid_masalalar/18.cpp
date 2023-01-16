// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Jumlani rostlikka tekshiring: " berilgan son uchta butun sonlarning hech bo'lmaganda 2 tasi bir birga teng"
#include <iostream>

using namespace std;

int main() {

    int a = 4, b = 4, c = 7;
    bool natija;

    cout << " natija = " << (((a>0) && (b==c)) || ((a==b) && (c>0)) ||((a==c) && (b>0))) << endl;

    return 0;
}