#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e){
    int p = e;
    int i = s;

    for(int j=s;j<=e;j++){
        if(arr[j] < arr[p]){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[p]);
    return i;
}

void quickSort(int arr[],int s,int e){
    if(s>=e) return;
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
    return ;
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
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  return 0;
}
