    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    /*
    An array is ugly if the elment of an index 'i' is equal to the sum of the element less than the index 'i';
    Otherwise the number is beautiful. Your task is : If it is possible to find the beautiful array then print
    the beautiful. Other wise print "No".  
    */
    int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        sort(arr, arr + n);
        if(arr[0] == arr[n - 1]) cout<<"NO"<<endl;
        else{
          cout<<arr[0]<<" ";
          for(int i = n - 1; i >=1; i--) cout<<arr[i]<<" ";
          cout<<endl;
        }
        return 0;
    }
