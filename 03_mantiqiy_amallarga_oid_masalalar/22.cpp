// Sana: 2023.01.12
// Muallif: Zakariyo Pulatov
// Maqsad: Uch xonali son berilgan. Jumlani rostlikka tekshiring: " Ushbu sonning raqamlari ketma-ket o'suvchi yoki kamayuvchi ketma-ketlikda "
#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 8, c = 3;
    bool natija;

    natija = (a > b && b > c) || (c > b && b > a);

    cout << natija << endl;
    
    return 0; 
}