#include <iostream>
#define ll long long int
using namespace std;


int subsetAddition(int arr[], int sum, int n){

    int sumOfSubSet[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
        sumOfSubSet[i][0] = 1;
    for (int i = 1; i <= sum; i++)
        sumOfSubSet[0][i] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < arr[i - 1])
                sumOfSubSet[i][j] = sumOfSubSet[i - 1][j];
            if (j >= arr[i - 1])
                sumOfSubSet[i][j] = sumOfSubSet[i - 1][j - arr[i - 1]] || sumOfSubSet[i - 1][j] ;
        }
    }
    return sumOfSubSet[n][sum];
}

void solve(){
    int n, sum;
    cin>>n>>sum;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int check = subsetAddition(arr, sum, n);
    if(check == 1) cout<<"Subset found for sum "<<sum<<endl;
    else cout<<"Subset not found for sum "<<sum<<endl;
}
int main()
{
    solve();
    return 0;
}
