    #include<bits/stdc++.h>
    #define ll long long
    #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    using namespace std;
    /*
    You are given a number string. Your task is to add two digits of the string just one time and replace the sum deleting the digits. 
    input : 11130
    output : 2130
    
    input : 5555
    output : 5510
    
    input : 1967
    output : 1913
    */
    void solve(){
      string s;
      cin>>s;
      int ans = 0;
      int cnt;
      for(int i = 0; i < s.size() - 1; i++){
        int a = (s[i]-'0') + (s[i+1]-'0');
        if(a >=10){
          ans = a;
          cnt = i;
        }
      }
      int p;
      if(ans == 0) {
        cout<<(s[0]-'0') + (s[1]-'0');
        p = 2;
      }else{
        for(int i = 0; i < s.size()-1; i++){
          int a = (s[i]-'0') + (s[i+1]-'0');
          if(a == ans && cnt != i){
            cout<<s[i];
            cnt--;
          }else if(a == ans && cnt == i){
            cout<<a;
            p = i+2;
            break;  
          }else{
            cout<<s[i];
          }
        }
      }
      for(int i = p; i < s.size(); i++) cout<<s[i];
      cout<<endl;
    }
  int main(){
    int n;
    cin>>n;
    while(n--) solve();
    return 0;
  }
