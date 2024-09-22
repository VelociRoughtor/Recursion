#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string &s, int l, int r){
    if(l >= r) return true;
    else if(s[l] != s[r]) return false;
    return isPalindrome(s, l + 1, r - 1);
}

int main(){
    int n; cin >> n;  
    string s; cin >> s;
    if(isPalindrome(s, 0, n - 1)) cout << s << " is a Palindrome!" << endl;
    else cout << s << " is not a Palindrome!" << endl;

    return 0;
}       
