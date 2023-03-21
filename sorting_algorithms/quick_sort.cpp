#include<bits/stdc++.h>
using namespace std;
int n;
int arr[1000];
int divi(int p, int r){
    int x = arr[r];
    int i = p-1;
    for(int j = p; j <= r - 1; j++){
        if(arr[j] <= x){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[r]);
    return i + 1;
}

void solve(int p, int r){
    if(p < r){
        int q = divi(p, r);
        solve(p, q-1);
        solve(q+1, r);
    }
}

int main(){
    cin>>n;
    for(int i = 0; i < n; i++) cin>>arr[i];
    solve(0, n-1);
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

