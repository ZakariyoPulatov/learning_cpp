// Sana: 2023.01.21
// Muallif: Zakariyo Pulatov
// Maqsad: n butun soni berilgan (n>0). Quyidagi yig'indini hisoblovchi Pr tuzilsin S = n*n +(n+1)(n+1) + (n+2)(n+2)+.. (2*n)(2*n)
#include <iostream>

using namespace std;

int main() {

    int n = 5;

    for ( int i = n*n; i > 0; i + (n+1)*(n+1) ) {

        cout << i << endl;
    }
    return 0;
}