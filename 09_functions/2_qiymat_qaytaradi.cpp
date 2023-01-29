#include <iostream>

using namespace std;


string hello();
string world(string word);

int main() {
    string word;

    word = world(hello());
    cout << word << endl;

    return 0;

}

// qiymat qaytaradi, argument qabul qilmaydi
string hello() {

    string word = "string hello()";

    return word;
}

// qiymat qaytaradi, argument qabul qiladi
string world(string word) {
    
    return "hello " + word;
}











// f() = 0
// f(x) = x + 1
// f(x, y) = (x + 1) * y
