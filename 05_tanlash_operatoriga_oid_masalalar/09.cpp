// Sana: 2023.01.17
// Muallif: Zakariyo Pulatov
// Maqsad: Ikkita butun son berilgan D (kun) va M (oy). (Kabisa bo'lmagan yil sanasi kiritiladi). 
//          Berilgan sanadan keyingi sanani ifodalovchi Pr tuzilsin
#include <iostream>

using namespace std;

int main() {

    int D=66, M=6;

      switch (M) {

    case 1 : cout << " yanvar oyining\n"; break;
    case 2 : cout << " fevral oyining\n"; break;
    case 3 : cout << " mart oyining\n"; break;
    case 4 : cout << " aprel oyining\n"; break;
    case 5 : cout << " may oyining\n"; break;
    case 6 : cout << " iyun oyining\n"; break;
    case 7 : cout << " iyul oyining\n"; break;
    case 8 : cout << " avgust oyining\n"; break;
    case 9 : cout << " sentyabr oyining\n"; break;
    case 10 : cout << " oktyabr oyining\n"; break;
    case 11 : cout << " noyabr oyining\n"; break;
    case 12 : cout << " dekabr oyining\n"; break;
    
    default: cout << " bunday oy yo'q \n"; break;
    }
    switch (D) {

    case 1 : cout << " 1- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 2 : cout << " 2- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 3 : cout << " 3- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 4 : cout << " 4- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 5 : cout << " 5- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 6 : cout << " 6- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 7 : cout << " 7- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 8 : cout << " 8- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 9 : cout << " 9- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 10 : cout << " 10- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 11 : cout << " 11- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 12 : cout << " 12- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 13 : cout << " 13- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 14 : cout << " 14- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 15 : cout << " 15- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 16 : cout << " 16- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 17 : cout << " 17- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 18 : cout << " 18- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 19 : cout << " 19- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 20 : cout << " 20- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 21 : cout << " 21- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 22 : cout << " 22- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 23 : cout << " 23- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 24 : cout << " 24- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 25 : cout << " 25- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 26 : cout << " 26- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 27 : cout << " 27- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 28 : cout << " 28- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 29 : cout << " 29- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 30 : cout << " 30- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;
    case 31 : cout << " 31- kuni" << ", keyingi kuni " << D+1 << "-\n"; break;

    default: cout << " bunday kun yo'q\n"; break;
    }
    return 0;
} 