#include<bits/stdc++.h>
using namespace std;

bool isPeak(int arr[],int i){
  if(arr[i-1] < arr[i] && arr[i+1] < arr[i]){
    return true;
  }
  return false;
}

int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];

  int leftarr[n],rightarr[n];
  // left max
  leftarr[0] = arr[0];
  for(int i=1;i<n;i++){
    leftarr[i] = max(leftarr[i-1],arr[i]);
  }
  //right max
  rightarr[n-1] = arr[n-1];
  for(int i=n-2;i>0;i--){
    rightarr[i] = max(rightarr[i+1],arr[i]);
  }

  int totalAmt = 0;
  for(int i=0;i<n;i++){
    totalAmt += min(leftarr[i],rightarr[i]) - arr[i];
  }
  cout<<totalAmt<<endl;
  return 0;
}
