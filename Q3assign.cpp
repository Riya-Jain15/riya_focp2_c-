#include <iostream>
using namespace std;
void reverse(string &str) {
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}
bool Palindrome(string str, string reversed) {
    return str == reversed;
}
void Frequencies(string str) {
    int freq[256] = {0}; 

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') 
            freq[(int)str[i]]++;
    }

    cout << "\nFrequencies:\n";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ' && freq[(int)str[i]] > 0) {
            cout << str[i] << ": " << freq[(int)str[i]] << endl;
            freq[(int)str[i]] = 0; 
        }
    }
}
void replacevowels(string &str, char symbol) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {
            str[i] = symbol;
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string reversed = str;
    reverse(reversed);

    if (Palindrome(str, reversed))
        cout << "String is palindrome!!\n";
    else
        cout << "String is Not a palindrome!!\n";

    Frequencies(str);

    char symbol;
    cout << "\nEnter the symbol to replace vowels: ";
    cin >> symbol;

    replacevowels(str, symbol);
    cout << str;

    return 0;
}
