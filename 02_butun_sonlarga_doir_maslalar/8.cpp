//Sana: 2022.12.20
//Muallif: Zakariyo Pulatov
//Maqsad: Ikki xonali son berilgan. Uning raqamlarini o'rnini almashtrishdan hosil bo'lgan sonni aniqlovchi Pr tuzilsin

# include <iostream>

using namespace std;

int main ()
{
    int raqam = 75;

    cout << raqam " 'orin almashtirish= " << ( raqam / 10 ) + ( raqam % 10 * 10 )<< endl;

    return 0;
}