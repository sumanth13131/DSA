#include<bits/stdc++.h>
using namespace std;

int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  int n,sum;
  cin>>n>>sum;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];

  for(int i=0;i<n;i++){
    int curr = sum-arr[i];
    int l = i+1;
    int r = n-1;
    while(l<r){
      if(arr[l] + arr[r] >curr){
        r--;
      }
      else if(arr[l] + arr[r] < curr) {
        l++;
      }
      else{
        cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<endl;
        break;
      }
    }
  }
  return 0;

}
