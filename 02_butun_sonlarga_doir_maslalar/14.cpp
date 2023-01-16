//Sana: 2022.12.21
//Muallif: Zakariyo Pulatov 
//Maqsad: Uch xonali son berilgan. O'ngdan birinchi raqamini o'chirib chap tarafiga yozishdan hosil bo'lgan sonni aniqlovchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {
    
    int son = 567;

    cout << son << "_ko'rinish_= " << (son/100) + (son%100/10*10) + (son%10*100) << endl;

    return 0;
}