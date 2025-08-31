// Printing the count of subsequence with sum K.

#include<bits/stdc++.h>
using namespace std;

int n, k, cnt = 0;
vector<int> v;

int printSubsequence(int i, int sum){
    if (i == n) {
        return (sum == k) ? 1 : 0;
    }
    return printSubsequence(i + 1, sum + v[i]) + printSubsequence(i + 1, sum);
}

int main(){
    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << printSubsequence(0, 0) << endl;

    return 0;
}