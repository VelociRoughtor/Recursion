// Functional

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int l, int r, string &s){
    if (l >= r) {
        return true;
    }
    return ((s[l] == s[r]) && isPalindrome(l + 1, r - 1, s));
}

int main(){
    string s; 
    cin >> s;

    int n = s.size();
    
    bool check = isPalindrome(0, n - 1, s);

    if (check) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}

/*
    hasbullah
    madam
    cabbac
*/