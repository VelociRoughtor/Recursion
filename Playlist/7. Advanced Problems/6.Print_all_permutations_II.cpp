/*
    Given an array nums of distinct integer, return all the possible permutations. 
*/

#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> v;

void print(vector<int> &seq) {
    cout << '[';
    for (int i = 0; i < seq.size(); i++) {
        cout << seq[i];
        if (i + 1 < seq.size()) cout << ", ";
    }
    cout << ']' << endl;
}

void permutations(int i) {
    if (i == n) {
        print(v);
        return;
    }

    for (int j = i; j < n; j++) {
        swap(v[i], v[j]);
        permutations(i + 1);
        swap(v[i], v[j]);
    }
}

int main(){
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    permutations(0);
    
    return 0;
}