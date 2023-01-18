// Sana: 2023.01.17
// Muallif: Zakariyo Pulatov
// Maqsad: Butun son berilgan. Berilgan sonni "musbat toq son", "manfiy juft son", "son nolga teng" va x.k ekranga yozadigan Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int n;

    cout << " n = "; cin >> n;

    if ((n>0) && ((n%2)==1)) {
        cout << " musbat toq son kirittiz\n";

    }else if ((n>0) && ((n%2)==0)) {
        cout << " musbat juft son kirittiz\n";

    }else if ((n<0) && ((n%2)==0)) {
        cout << " manfiy juft son kirittiz\n";

    }else if ((n<0) && ((n%2)==1)) {
        cout << " manfiy toqson kirittiz";

    }else   {
        cout << " nolga teng!\n";

    }

    return 0;
}