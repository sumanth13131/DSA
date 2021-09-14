#include<bits/stdc++.h>
using namespace std;


int rotatedSerach(int arr[],int s,int e,int key){
    if(s>e) return -1;
    int mid = (s+e)/2;
    if(arr[mid] == key){
        return mid;
    }
    if(arr[s] < arr[mid]){
        if(key < arr[mid] and key >= arr[s]){
            return rotatedSerach(arr,s,mid-1,key);
        }
        else{
            return rotatedSerach(arr,mid+1,e,key);
        }
    }
    else{
        if(key > arr[mid] and key <= arr[e]){
            return rotatedSerach(arr,mid+1,e,key);
        }
        else{
            return rotatedSerach(arr,s,mid-1,key);
        }
    }
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n;
    cin>>n;
    int arr[n];
    int tar;
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>tar;
    cout<<rotatedSerach(arr,0,n-1,tar)<<endl;

  return 0;
}
