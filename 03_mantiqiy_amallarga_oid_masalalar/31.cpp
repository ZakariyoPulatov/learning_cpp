// Sana: 2023.01.14
// Muallif: Zakariyo Pulatov
// Maqsad: a, b, c butun sonlar berilgan. Jumlani rostlikka tekshiring: "a, b, c tomonli uchburchak teng yonli bo'ladi"
#include <iostream>

using namespace std;

int main()
{
    int a=4, b=4, c=2;
    bool natija;

    cout << " natija = " << ((a==b) && (c<a) && (c<b)) << endl;

    return 0;
}