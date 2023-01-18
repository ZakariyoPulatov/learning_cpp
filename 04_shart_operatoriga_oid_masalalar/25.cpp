// Sana: 2023.01.17
// Muallif: Zakariyo Pulatov
// Maqsad: x haqiqiy son berilgan. Quyidagi funksiya hisoblansin. Agar (x<-2) yoki (x>2) bo'lsa (2*x), aks holda (-3*x)
#include <iostream>

using namespace std;

int main() {

    int x=-10;

    if ((x<-2) || (x>2)) {
        cout << 2 * x << endl;

    }else {
        cout << -3 * x << endl;
    }
    return 0;
}