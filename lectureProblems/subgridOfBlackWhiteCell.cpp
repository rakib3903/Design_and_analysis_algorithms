   #include<bits/stdc++.h>
   using namespace std;

   void solve(){
        int n;
        cin>>n;
        int arr[n][n];
        for(int i = 0;i<n;i++){
            for(int j = 0; j<n;j++){
                cin>>arr[i][j];
            }
        }  
        int ans = 0, cnt = 0;
        for(int i = 0; i<n-1;i++){
            for(int j = i+1; j < n;j++){
                for(int k = 0; k<n;k++){
                    if(arr[i][k]==1 && arr[j][k] == 1){
                        ans++;
                    }
                }
                cnt += ((ans-1) * ans)/2;
                ans = 0;
            }
        }
        cout<<cnt<<endl;
    }
    
    int main(){
        // int n;
        // cin>>n;
        // while(n--)
        solve();
        return 0;
    }