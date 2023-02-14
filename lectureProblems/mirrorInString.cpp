    #include<bits/stdc++.h>
    #define ll long long
    #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    using namespace std;
    //https://codeforces.com/problemset/problem/1616/B
    void solve(){
      int n;
      cin>>n;
      string s;
      cin>>s;
      int x;
      if(n == 1) cout<<s[0]<<s[0]<<endl;
      else{
      for(int i = 0; i < n-1; i++){
        if(s[i] == s[i+1] && i == 0){
          x = i;
          break;
        }else if(s[i] < s[i+1]){
          x = i;
          break;
        }else{
          if(i == n-2) x = n - 1;
        }
      }
      for(int i = 0; i <= x; i++) cout<<s[i];
      for(int i = x; i >= 0; i--) cout<< s[i];
      cout<<endl;
    }
    }
  int main(){
    int n;
    cin>>n;
    while(n--) solve();
    return 0;
  }
