//Sana: 2022.12.21
//Muallif: Zakariyo Pulatov
//Maqsad: Uch xonali son berilgan. Uning chapdan birinchi raqmini o'chirib o'ng tarafiga yozishdan hosil bo'lgan sonni aniqlocvhi Pr tuzilsi
#include <iostream>

using namespace std;

int main()
{
    int son = 345;

    cout << son << " ko'rinish= " << (son/100) + (son%100/10*10) + (son%10*100) << endl;

    return 0;
}