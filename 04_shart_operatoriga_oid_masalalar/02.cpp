// Sana: 2023.01.15
// Muallif: Zakariyo Pulatov
// Maqsad: Butun son berilgan. Agar berilgan son musbat bo'lsa, 1 ga oshirilsin, aks holda 2 ga kamaytring. 
//         Hosil bo'lgan sonni ekranga chiqaruvchi programma tuzilsin.
#include <iostream>

using namespace std;

int main() {
    
    int n=5;

    if (n>0) {
        n = n+1;
    }else {
        n = n-2;
    }
    cout << " n = " << n << endl;

    return 0;
}