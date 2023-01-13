//Sana: 2022.12.20
//Muallif: Zakariyo Pulatov
//Maqsad: Uchxonali son berilgan. Uning raqamlar yig'indisini aniqlovchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() 
{
    int son = 123;

    cout <<son << "raqamlar yig'indisi= " << (son/100) + (son%100/10) + (son%10)  << endl;

    return 0;
}