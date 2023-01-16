// Sana: 2023.01.16
// Muallif: Zakariyo Pulatov
// Maqsad: a va b butun sonlar berilgan. Agar o'zgaruvchilar o'zaro teng bo'lmasa, a va b o'zgaruvchilari ularning kattasini o'zlashtrsin.
//         agar teng bo'lsa 0 ni o'zlashtrsin. a va b ning qiymati ekranga chiqarilsin
#include <iostream>

using namespace std;

int main() {

    int a=2, b=4;

    if (a!=b) {

        if (a>b) {
            cout << " a = " << a << endl;
            cout << " b = " << a << endl;

        }else 
            cout << " a = " << b << endl;
            cout << " b = " << b << endl;
            
            return 0;
    }else 
        cout << " a = " << (a=0) << endl;
        cout << " b = " << (b=0) << endl;

    return 0;
}