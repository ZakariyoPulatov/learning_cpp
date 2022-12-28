//Sana: 2022.12.28
//Muallif: Zakariyo Pulatov
//Maqsad: Uchta a, b, c butun sonlar berilgan. Jumlani rostlikka tekshiring: "a<=b<=c"
#include <iostream>

using namespace std;

int main ()
{
    bool a = 3, b = 2, c = 1;
    a = a <= b <= c;
    b = a <= b <= c;
    c = a <= b <= c;

    cout << " a = " << a <<" b = " << b << " c = " << c << endl;

    return 0; 
}