#include <bits/stdc++.h>
#include<iostream>
#include<string>
#define ll long long int
//https://www.spoj.com/problems/NAJPF/
using namespace std;
 void solve(){
    string s, t;
    cin>>s>>t;
    int sln = s.size();
    int tln = t.size();
    int p = 31;
    const int m = 1e10 + 7;
    vector<ll>vec(max(sln, tln));
    vec[0] = 1;
    for(int i = 1; i < vec.size(); i++){
        vec[i] = (vec[i-1] * p) % m;
    }
    vector<ll>svec(sln + 1, 0);
    for(int i = 0; i < sln; i++){
        svec[i+1] = (svec[i] + (s[i] - 'a' + 1) * vec[i]) % m;
    }
    ll cnt = 0;
    for(int i = 0; i < tln; i++){
        cnt = (cnt + (t[i] - 'a' + 1) * vec[i]) % m;
    }
    vector<ll>prnt;
    for(int i = 0; i <= sln - tln; i++){
        ll cut = (svec[i+tln] - svec[i] + m) % m;
        if(cut == cnt * vec[i] % m)
        prnt.push_back(i);
    }
    if(prnt.size() == 0) printf("Not Found\n");
    else{
        cout<<prnt.size()<<endl;
        for(auto i: prnt) printf("%lld ", i + 1);
        printf("\n");
    }
     printf("\n");
 }
int main()
{
    int n;
    scanf("%d",&n);
    while(n--) solve();
    return 0;
}
