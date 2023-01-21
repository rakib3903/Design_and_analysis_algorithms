#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
  ll int a;
  cin>>a;
  ll int b = 0;
  for(int i = 5; a / i >= 1; i *= 5){
    b += a / i;
  }
  cout<<b <<endl;
}
 
int main(){
    //  int n;
    //  cin>>n;
    //  while(n--) 
     solve();
    
     return 0;
}
