// Sana: 2023.01.17
// Muallif: Zakariyo Pulatov
// Maqsad: 1-999 oraliqdagi sonlar berilgan. "2 xonali juft son", "3 xonali toq son " va x.k ekranga yozadigan Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int n;

    cout << " n = "; cin >> n;

    if (((n>9) && (n<100)) && ((n%2)==0)) {
        cout << " 2 xonali juft son kirittiz\n";

    }else if (((n>9) && (n<100)) && ((n%2)==1)) {
        cout << " 2 xonali toq son kirittiz\n";

    }else if (((n>99) && (n<999)) && ((n%2)==0)) { 
        cout << " 3 xonali juft son kirittiz\n";

    }else if (((n>99) && (n<999)) && ((n%2)==1)) {
        cout << " 3 xonali toq son kirittiz\n";

    }
    return 0;
}