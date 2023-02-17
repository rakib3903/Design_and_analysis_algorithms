   #include<bits/stdc++.h>
   #define ll long long
   using namespace std;
   //https://codeforces.com/problemset/problem/1473/B
   void solve(){
      string s,t;
      cin>>s>>t;
      int ss = s.size();
      int tt = t.size();
      int lm = lcm(ss, tt);
      string p = s, q = t;
      int l = ss, m = tt;
      while(l != lm){
         p = p + s;
         l += ss; 
      }
      while(m != lm){
         t = t + q;
         m += tt; 
      }
      if(t == p) cout<<p<<endl;
      else cout<<-1<<endl;
    }
    int main(){  
      int n;
      cin>>n;
      while(n--)
      solve();
      return 0;
    }
