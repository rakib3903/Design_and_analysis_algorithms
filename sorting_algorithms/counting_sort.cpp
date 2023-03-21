#include<bits/stdc++.h>
using namespace std;

void solve(){
int n;
cin>>n;
int arr[n+1];
cin>>arr[1];
int x = arr[1];
for(int i = 2; i <= n; i++){
    cin>>arr[i];
    if(arr[i] > x) x = arr[i];
}
int ar[x+1];
for(int i = 0; i <= x; i++){
    ar[i] = 0;
}
for(int i = 1; i <= n; i++){
    ar[arr[i]]++; 
}
for(int i = 1; i <= x; i++){
    ar[i] = ar[i] + ar[i-1];
}
int a[n+1];
for(int i = n; i >= 1; i--){
    a[ar[arr[i]]] = arr[i];
    ar[arr[i]]--;
}
for(int i = 1; i <= n; i++) cout<<a[i]<<" ";
cout<<endl;

}
int main(){
     solve();
}

