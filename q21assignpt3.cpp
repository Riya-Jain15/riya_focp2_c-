#include <iostream>
using namespace std;

string reverse(string str) {
    if (str.length() <= 1) {
        return str;
    }
    return reverse(str.substr(1)) + str[0];
}

int main() {
    string input = "hello";
    cout << "Reversed string: " << reverse(input) << endl;
    return 0;
}
