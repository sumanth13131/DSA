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

  unordered_set<int> us;
  for(int i=0;i<n;i++){
    us.insert(arr[i]);
  }

  int maxlen = 0;
  for(int i=0;i<n;i++){
    if(us.find(arr[i]-1) == us.end()){
      int l = 0;
      int ele = arr[i];
      while(us.find(ele++) != us.end()){
        l++;
      }
      maxlen = max(maxlen,l);
    }
  }
  cout<<maxlen<<endl;
  return 0;
}
