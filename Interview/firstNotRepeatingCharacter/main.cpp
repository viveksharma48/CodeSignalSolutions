#include <iostream>
using namespace std;
char firstNotRepeatingCharacter(std::string s) {
    int arr[26];
    for (int i = 0; i < 26; ++i) {
        arr[i] = -1;
    }
    for (int i = 0; i < s.length()+1; ++i) {
        ++arr[s[i] - 97];
    }
    for (int i = 0; i < s.length(); ++i) {
        if (arr[s[i]-97] == 0){
            return s[i];
        }
    }
    return '_';
}


int main() {
    string s = "abacabad";
    cout << firstNotRepeatingCharacter(s);
    return 0;
}
