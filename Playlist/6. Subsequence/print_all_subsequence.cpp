// Print all subsequence

#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &seq) {
    cout << '[';
    for (int i = 0; i < seq.size(); i++) {
        cout << seq[i];
        if (i + 1 < seq.size()) cout << ", ";
    }
    cout << ']' << endl;
}

void subsequence(int i, int n, vector<int> &v, vector<int> &seq) {
    if (i == n) {
        print(seq);
        return;
    }

    // include
    seq.push_back(v[i]);
    subsequence(i + 1, n, v, seq);

    // exclude
    seq.pop_back();
    subsequence(i + 1, n, v, seq);
}

int main(){
    int n; cin >> n;
    vector<int> v(n), seq;
    for (int i = 0; i < n; i++) cin >> v[i];

    subsequence(0, n, v, seq);
    
    return 0;
}