/*
    Given collection of numbers and an integer target.
    Find all unique combinations where the sum is equal to target.
    Each number may be used at most once.
    Return results in sorted order.
*/

#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> v;

void print(vector<int> &seq) {
    cout << '[';
    for (int i = 0; i < seq.size(); i++) {
        cout << seq[i];
        if (i + 1 < seq.size()) cout << ", ";
    }
    cout << ']' << endl;
}

void combinations(int i, int tar, vector<int> &ds) {
    if (tar == 0) { 
        print(ds);
        return;
    }

    for (int j = i; j < n; j++) {
        if (i < j && v[j] == v[j - 1]) continue; 
        if (v[j] > tar) break;                  

        ds.push_back(v[j]);
        combinations(j + 1, tar - v[j], ds);   
        ds.pop_back();
    }
}

int main() {
    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vector<int> ds;
    combinations(0, k, ds);

    return 0;
}
