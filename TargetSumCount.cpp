#include<bits/stdc++.h>
using namespace std;

int numOfSubsets(int arr[],int i,int n,int sum){
    if(i == n){
        if(sum == 0){
            return 1;
        }
        return 0;
    }
    int a = numOfSubsets(arr,i+1,n,sum-arr[i]);
    int b = numOfSubsets(arr,i+1,n,sum);
    return a+b;
}


int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    cout<<numOfSubsets(arr,0,n,x)<<endl;

    return 0;
}

//IP
// 5 6
// 1 2 3 4 5 

//OP
// 3

