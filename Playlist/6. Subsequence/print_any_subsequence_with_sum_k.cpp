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

bool printSubsequence(int i, int sum, vector<int> &ds){
    if (i == n) {
        if (sum == k) {
            print(ds);
            return true;
        }
        return false;
    }
    
    // include
    ds.push_back(v[i]);
    if (printSubsequence(i + 1, sum + v[i], ds)) return true;

    // exclude
    ds.pop_back();
    if (printSubsequence(i + 1, sum, ds)) return true;

    return false;
}

int main(){
    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<int> ds;

    if (!printSubsequence(0, 0, ds)) {
        cout << "No subsequence found with sum k\n";
    }

    return 0;
}