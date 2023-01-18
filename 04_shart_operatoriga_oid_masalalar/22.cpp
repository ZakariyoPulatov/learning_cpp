// Sana: 2023.01.17
// Muallif: Zakariyo Pulatov
// Maqsad: OX va OY kordinata o'qlarida yotmaydigan nuqta berilgan. Nuqta joylashgan kordinata choragi aniqalansin
#include <iostream>

using namespace std;

int main() {

    int x=5, y=-1;

    if ((x>0) && (y>0)) {
        cout << " 1-chorakda joylashgan\n";

    }else if ((x<0) && (y>0)) {
        cout << " 2-chorakda joylashgan\n";

    }else if ((x<0) && (y<0)) {
        cout << " 3-chorakda joylashgan\n";

    }else if ((x>0) && (y<0)) {
        cout << " 4-chorakda joylashgan\n";
    }
    return 0;
}