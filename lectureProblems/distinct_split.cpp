    #include<bits/stdc++.h>
    #define ll long long
    #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    using namespace std;
    //https://codeforces.com/contest/1791/problem/D
    void solve(){
      int n;
      cin>>n;
      string s;
      cin>>s;
      set<char>q;
      map<char, int>p;
      for(int i = 0; i < n; i++){
        p[s[i]]++;
      }
      int cnt = 0;
      for(int i = 0 ; i < n; i++){
        int ans = 0;
        q.insert(s[i]);
        p[s[i]]--;
        for(char j = 'a'; j <= 'z'; j++){
            if(p[j] > 0) ans++;
        }
        ans += q.size();
        if(ans > cnt) cnt = ans;
      } 
      cout<<cnt<<endl;
    }
  int main(){
    int n;
    cin>>n;
    while(n--) solve();
    return 0;
  }
