// Sana: 2023.01.18
// Muallif: Zakariyo Pulatov
// Maqsad: Robot faqat to'rtta tomonga ko'cha oladi ("s"-shimol, "j"-janub, "q"-sharq, "g'"-g'arb) va 3ta raqamli kamanda:0-harakatni davom ettir, 1-chapga burul, 2-o'nga buril. y-robot yo'nalishi va k-kamandalar berilgan
//          Berilgan kamanda bajargandan keyin robot holatini aniqlovchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int k=2;

    switch (k) {

    case 0 : cout << " harakatni davom ettir \n"; cout  << "robot harakatni davom ettirdi\n"; break;
    case 1 : cout << " chapga buril \n"; cout  << "robot chapga burildi\n"; break;
    case 2 : cout << " o'nga buril \n"; cout  << " robot o'nga burildi\n";  break;
    default: cout << "bunday kamanda yo'q!\n"; break;

    }
    return 0;
}