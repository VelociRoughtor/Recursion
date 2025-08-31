/*
    Provided with a integer K and an array of unique integer candidates, provide a list of all possible combinations of candidates in which the selected numbers add up to K. The combinations can be returned in any order.
*/

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

void printSubsequence(int i, int tar, vector<int> &ds){
    if (i == n) {
        if (tar == 0) {
            print(ds);
        }
        return;
    }
    if (v[i] <= tar) {
        ds.push_back(v[i]);
        printSubsequence(i, tar - v[i], ds);
        ds.pop_back();
    }
    printSubsequence(i + 1, tar, ds);
}

int main(){
    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<int> ds;

    printSubsequence(0, k, ds);

    return 0;
}