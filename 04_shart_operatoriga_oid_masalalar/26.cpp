// Sana: 2023.01.17
// Muallif: Zakariyo Pulatov
// Maqsad: x haqiqiy son berilgan. Quyidagi funksiya hisoblansin. Agar (x<=0) bo'lsa -x, agar (0<x<2) bo'lsa (x*x), agar (x>=2) 4
#include <iostream>

using namespace std;

int main() {

    int x=-55;

    if (x<=0) {
        cout << x * -1 << endl;

    }else if ((x>0) && (x<2)) {
        cout << x * x << endl;

    }else if (x>=2) {
        cout << 4 << endl;

    }
    return 0;
}