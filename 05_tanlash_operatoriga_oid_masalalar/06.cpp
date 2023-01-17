// Sana: 2023.01.17
// Muallif: Zakariyo Pulatov
// Maqsad: Uzunlik birliklari quyidagi tartibda berilgan. 1-detsimetr, 2-kilometr, 3-metr, 4-millimetr, 5-santimetr 
//          uzunlik birligini bildiruvchi son berilgan(1-5 oraliqda) va shu birlikdagi kesma uzunligi berilgan (haqiqiy son) kesmaning uzunligini metrlarda ifodalang
#include <iostream>

using namespace std;

int main() {

    int n=1;

    switch (n) {
        
    case 1 : cout << "detsimetr = " << " 0.1 metr \n";  break;
    case 2 : cout << "kilometr = " << " 1000 metr \n";  break;
    case 3 : cout << "metr = " << " 1 metr \n";  break;
    case 4 : cout << "millimetr = " << " 0.001 metr \n";  break;
    case 5 : cout << "santmetr = " << " 0.01 metr \n";  break;
    
    default: cout << " 1 dan kichik yoki 5 dan katta son kiritdinggiz!\n"; break;
    }
    return 0;
}