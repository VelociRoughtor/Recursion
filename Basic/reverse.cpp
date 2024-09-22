#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&v){
    for(int i=0; i<v.size(); i++) cout<<v[i]<<' ';
    cout<<endl;
}

void reverse(vector<int>&v, int l, int r){
    if(l<r){
        int temp = v[l];
        v[l] = v[r];
        v[r] = temp;
        reverse(v, l+1, r-1);
    }
}
int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int l=0, r=n-1;
    reverse(v,l,r);
    print(v);
    return 0;
}