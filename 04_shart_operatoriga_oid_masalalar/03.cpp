// Sana: 2023.01.15
// Muallif: Zakariyo Pulatov
// Maqsad: utun son berilgan. Agar berilgan son musbat bo'lsa 1 ga oshiring, agar manfiy bo'lsa 2 ga kamaytring.
//         AgBar 0 ga teng bo'lsa 10 na o'zlashtrsin. Hosil bo'lgan sonni ekranga chiqaruvchi programma tuzilsin
#include <iostream>

using namespace std;

int main()
{
    int n=2;

    if (n>0)
        cout << " n1 = " << n+1 << endl;
    if (n<0)
        cout << " n2 = " << n-2 << endl;
    if (n==0)
        cout << " n3 = " << (n=10) << endl;

    return 0;
}