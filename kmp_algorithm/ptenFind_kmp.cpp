    #include<bits/stdc++.h>
    #define ll long long
    #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    using namespace std;
    void solve(){
      string s, t;
      cin>>s;
      cin>>t;
      int t1 = t.size();
      vector<int>vec(t1, 0),p;
      int inc = 0;
      int j = 0; 
      for(int i = 1; i < t1; ){
        if(t[j] == t[i]){
          inc++;
          vec[i] = inc;
          j++;
          i++;
        }else{
          if(j == 0){
            i++;
          }else{
            if(j > 0)
            j--;
            j = vec[j];
          }  
          inc = vec[j];       
        } 
      }
      int s1 = s.size();
      j = 0;
      inc = 0;
      int ans = 0;
      for(int i = 0; i < s1; ){
        if(t[j] == s[i]){
          j++;
          i++;
          ans++;
          if(ans == t1){
          p.push_back((i - t1)+1);
          }
        }else{
          ans = 0;
          if(j == 0){
            i++;
          }else{
            if(j > 0)
            j--;
            j = vec[j];
          }  
          inc = vec[j];       
        }

      }
      if(p.size()==0)
      cout<<"Not Found"<<endl;
      else{
        cout<<p.size()<<endl;
        for(auto i: p) cout<<i<<" ";
        cout<<endl;
      }
      cout<<endl;
    }
  int main(){
    int n;
    cin>>n;
    while(n--) solve();
    return 0;
  }