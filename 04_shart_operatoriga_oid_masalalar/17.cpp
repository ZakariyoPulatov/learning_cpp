// Sana: 2023.01.16
// Muallif: Zakariyo Pulatov
// Maqsad:  a, b, c haqiqiy sonlari berilgan. Agar berilgan sonlar o'sish yoki kamayish tartibda berilgan bo'lsa, sonlarni ikkilantring, aks holda sonlarni ishorasi o'zgartirilsin
//        a, b, c ning qiymatlari ekranga chiqarilsin
#include <iostream>

using namespace std;

int main() {

    float a=20, b=30, c=10;

    if (((a<b) && (b<c)) || ((a>b) && (b>c))) {

        cout << " a = " << a + 2 << endl;
        cout << " b = " << b + 2 << endl;
        cout << " c = " << c + 2 << endl;

        return 0;
    }else {

        cout << " a = " << (a * -1) << endl;
        cout << " b = " << (b * -1) << endl;
        cout << " c = " << (c * -1) << endl;    
    }
    return 0;
}