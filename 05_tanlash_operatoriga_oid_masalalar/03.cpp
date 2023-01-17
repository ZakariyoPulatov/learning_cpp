// Sana: 2023.01.17
// Muallif: Zakariyo Pulatov
// Maqsad: Oy raqami berilgan. Kiritilgan oy qaysi fasilga tegishli ekanligini chaqiruvchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int n=13;

    switch (n) {

        case 1 : cout << " 1-oy yanvar, qish fasli \n"; break;
        case 2 : cout << " 2-oy fevral, qish fasli \n"; break;
        case 12 : cout << " 12-oy dekabr, qish fasli \n"; break;
        case 3 : cout << " 3-oy mart, bahor fasli \n"; break;
        case 4 : cout << " 4-oy aprel, bahor fasli \n"; break;
        case 5 : cout << " 5-oy may, bahor fasli \n"; break;
        case 6 : cout << " 6-oy iyun, yoz fasli \n"; break;
        case 7 : cout << " 7-oy iyul, yoz fasli \n"; break;
        case 8 : cout << " 8-oy avgust, yoz fasli \n"; break;
        case 9 : cout << " 9-oy sentabr, kuz fasli \n"; break;
        case 10 : cout << " 10-oy sentabr, kuz fasli \n"; break;
        case 11 : cout << " 11-oy sentabr, kuz fasli \n"; break;
    
    default: cout << "bunday oy yo'q\n"; break;
    }
    return 0;
}