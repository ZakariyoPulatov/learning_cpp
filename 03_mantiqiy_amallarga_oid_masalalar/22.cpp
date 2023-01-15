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