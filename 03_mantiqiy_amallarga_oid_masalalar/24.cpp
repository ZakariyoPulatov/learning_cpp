// Sana: 2023.01.14
// Muallif: Zakariyo Pulatov
// Maqsad: a, b, c sonlari berilgan ( a noldan farqli ). D=B*B -4AC diskerminantdan foydalanib, jumlani rostlika tekshiring Ax*x + Bx + c = 0 kvadrat tenglama haqiqiy ildizga ega
#include <iostream>

using namespace std;

int main() {
    
    int a=2, b=-6, c=5, d;
    bool natija;

    d = b*b - 4*a*c;

    cout << " natija = " << (d>0) << endl;

    return 0;
}