// Printing the subsequence with sum K.

#include<bits/stdc++.h>
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

void printSubsequence(int i, int sum, vector<int> &ds){
    if (i == n) {
        if (sum == k) {
            print(ds);
        }
        return;
    }
    
    // include
    ds.push_back(v[i]);
    printSubsequence(i + 1, sum + v[i], ds);

    // exclude
    ds.pop_back();
    printSubsequence(i + 1, sum, ds);
}

int main(){
    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<int> ds;

    printSubsequence(0, 0, ds);

    return 0;
}