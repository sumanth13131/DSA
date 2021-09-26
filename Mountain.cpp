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
  int maxPeak = 0;
  for(int i=0;i<n;i++) cin>>arr[i];
  for(int i=1;i<n-1;i++){
    if(isPeak(arr,i)){
      //left
      int  l = i-1;
      int lc=0;
      while(l > 0 && arr[l] < arr[l+1]){
        lc++;
        l--;
      }
      //right
      int r = i+1;
      int rc = 0;
      while(r < n && arr[r] < arr[r-1]){
        rc++;
        r++;
      }
      //skip mountain alredy checked
      i = r;

      maxPeak = max(maxPeak,1+lc+rc);
    }
  }
  cout<<maxPeak<<endl;
  return 0;

}
