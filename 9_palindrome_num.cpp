#include <iostream>
#include <string>
// C++ also able to use string to convert int

using namespace std;

int main(){
    int x;
    cin >> x;
    string s = to_string(x);
    for (int i = 0; i<s.length(); ++i){
        if (s[i] != s[s.length()-i-1]) return false;
    }
    return true;
}