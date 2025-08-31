/*
    Given an integer array nums that may contain duplicates, return all possible subsets. The solution must not contain any duplicate subsets. 
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

void subsets(int i, vector<int> &ds){
    print(ds);

    if (i == n) return;
    
    for (int j = i; j < n; j++) {
        if (i < j && v[j] == v[j - 1]) continue;

        ds.push_back(v[j]);
        subsets(j + 1, ds);
        ds.pop_back();
    }

}

int main(){
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    vector<int> ds;

    subsets(0, ds);

    return 0;
}