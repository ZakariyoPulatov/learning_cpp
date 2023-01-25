// Sana: 2023.01.21
// Muallif: Zakariyo Pulatov
// Maqsad: n butun son berilgan (n>0). Quyidagi yig'indini hisoblovchi Pr tuzilsin S = 1 + 1/2 + 1/3 + 1/4 + 1/123
#include <iostream>

using namespace std;

int main() {

    float n = 123, s = 0;

    for ( float i = 1; i <= n; i++){
        s +=1/i;
    }
    cout << s << endl;
    return 0;

}

