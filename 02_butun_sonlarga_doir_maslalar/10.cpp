// 3 xonali sonni 1lik lar va 10liklar xonasidagi raqamini chiqarish

#include <iostream>

using namespace std;

int main () {

    int number = 123;

    cout << number << " ning birlar xonasidagi raqami: " << number % 10 <<  endl;
    cout << number << " ning onlar xonasidagi raqami: " << number % 100 / 10 <<  endl;
    cout << number << " ning yuzlar xonasidagi raqami: " << number / 100 <<  endl;


    return 0;
}