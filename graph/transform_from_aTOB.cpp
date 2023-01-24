    #define ll long long
    #define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define ll long long
    using namespace std;
     
    
    //727A codforces 
    void dfs(ll int a, ll int b){
      map<int, int>vis;
      map<int, int>par;
      ll int check = 0;
      queue<int>q;
      vector<int>vec;
      q.push(a);
      vis[a] = 1;
      while(!q.empty()){
        ll int popElmnt = q.front();
        q.pop();
        ll int left = 2 * popElmnt;
        if(vis[left] == 0 && left <= b){
          vis[left] = 1;
          par[left] = popElmnt;
          q.push(left);
          if(left == b){
            check++;
            break;
          }
        }
        ll int right = (10 * popElmnt) + 1;
        if(vis[right] == 0 && right <= b){
          vis[right] = 1;
          par[right] = popElmnt;
          q.push(right);
          if(right == b){
            check++;
            break;
          }
        }
      }
      if(check){
        cout<<"YES"<<endl;
        ll int p = par[b];
        vec.push_back(p);
        while(p != a){
          p = par[p];
          vec.push_back(p);
        }
        cout<<vec.size()+1<<endl;
        for(int i = (vec.size()-1); i >= 0; i--) cout<<vec[i]<<" ";
        cout<<b<<endl;
      }else{
        cout<<"NO"<<endl;
      }
    }
     
    int main(){
      Faster
      int a, b;
      cin>>a>>b;
      dfs(a, b);
      return 0;
    }
