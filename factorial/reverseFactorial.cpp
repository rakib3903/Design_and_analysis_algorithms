#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    string s;
    cin>>s;
    ll int n = s.size();
    if(n <= 10){
        ll int p = stoi(s);
        ll int q = 1;
        for(ll int i = 1; i <= p; i++){
            q *= i;
            if(q == p) {
                cout<<i<<endl;
                break;
            }
        }
    }else{
        double d = 0.0;
        int p = 1;
        for(int i = 1; ; i++){
            d += log10(i);
            if(floor(d) + 1 == n){
                cout<<i<<endl;
                break;
            }
        }
    }

}
 
int main(){
    //  int n;
    //  cin>>n;
    //  while(n--) 
     solve();
    
     return 0;
}