// Sana: 2023.01.17
// Muallif: Zakariyo Pulatov
// Maqsad: a, b haqiqiqiy va amal butun soni berilgan. a va b sonlari ustida arifmetik amallar bajaruvchi Pr tuzilsin. amal quyidagi qiymatlarni qabul qiladi.
//       1-qo'shish, 2-ayrish, 3-bo'lish, 4-ko'paytirish
#include <iostream>

using namespace std;

int main() {

    float a=6, b=2;
    int n=1;

    switch (n) {
        
    case 1 : cout << " 1-qo'shish amali = " << a+b << endl; break;
    case 2 : cout << " 2-ayrish amali = " << a-b << endl; break;
    case 3 : cout << " 3-bo'lish amali = " << a/b << endl; break;
    case 4 : cout << " 4-ko'paytirish amali = " << a*b << endl; break;
    
    default: cout << " bunday amal yo'q!\n"; break;
    }
    return 0;
}