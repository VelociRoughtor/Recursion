/*
    Given an array nums of distinct integer, return all the possible permutations. 
*/

#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> v;
vector<bool> freq;

void print(vector<int> &seq) {
    cout << '[';
    for (int i = 0; i < seq.size(); i++) {
        cout << seq[i];
        if (i + 1 < seq.size()) cout << ", ";
    }
    cout << ']' << endl;
}

void permutations(vector<int> &ds) {
    if (ds.size() == n) {
        print(ds);
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!freq[i]) {
            freq[i] = true;
            ds.push_back(v[i]);
            permutations(ds);
            ds.pop_back();
            freq[i] = false;
        }
    }
}

int main(){
    cin >> n;
    v.resize(n);
    freq.resize(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> ds;
    permutations(ds);
    
    return 0;
}