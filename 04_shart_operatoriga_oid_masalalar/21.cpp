// Sana: 2023.01.17
// Muallif: Zakariyo Pulatov
// Maqsad: Kordinatalar tekkisligida butun son berilgan. Agar nuqta kordinata boshida yotsa, 0 chiqarilsin. Agar nuqta OX yoki OY o'qida joylashsa mos holda 1 va 2 chiqarilsin.
//          Agar nuqta kordinata o'qida joylashmasa 3 chiqarilsin
#include <iostream>

using namespace std;

int main() {

    int x=0, y=0;

    if ((x=0) && (y=0)) {
        cout << " 0 " << endl; 
        
    }else if ((x>0) && ( y=0)) {
        cout << " 1 " << endl;

    }else if ((x=0) && (y>0)) {
        cout << " 2 " << endl;

    }else if ((x>0) && (y>0)) {
        cout << " 3 " << endl;
    }
    return 0;
}