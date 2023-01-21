#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
  ll int a;
  cin>>a;
  double d = 0.0;
  for(int i = 1; i <= a; i++){
    d += log10(i);
  }
  cout<<floor(d)+1<<endl;
}
 
int main(){
    //  int n;
    //  cin>>n;
    //  while(n--) 
     solve();
    
     return 0;
}