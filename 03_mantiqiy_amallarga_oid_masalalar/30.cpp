// Sana: 2023.01.14
// Muallif: Zakariyo Pulatov
// Maqsad: a, b, c butun sonlar berilgan. Jumlani rostlikka tekshiring: "a, b, c tomonli uchburchak teng tomonli bo'ladi"
#include <iostream>

using namespace std;

int main()
{
    int a=6, b=6, c=6;
    bool natija;

    cout << " natija = " << ((a==b) && (c==a) && (c==b)) << endl;

    return 0;
}