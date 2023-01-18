// Sana: 2023.01.17
// Muallif: Zakariyo Pulatov
// Maqsad: x haqiqiy soni berilgan. Quyidagi funksiya hisoblansin. Agar (x>0) bo'lsa 2*sin(x), agar (x<=0) bo'lsa (x-6)
#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int x=1;

    if (x>0) {
        cout << 2 * sin(x) << endl;

    }else if (x<=0) {
        cout << x - 6 << endl;
    }
    return 0;
}