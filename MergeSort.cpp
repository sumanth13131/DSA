#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int s,int e){
    int mid = (s+e)/2;
    vector<int> temp;
    int i = s;
    int j = mid+1;
    while(i<=mid and j<=e){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=e){
        temp.push_back(arr[j++]);
    }
    int k = 0;
    for(int idx=s;idx<=e;idx++){
        arr[idx] = temp[k++];
    }
    return;
}

void mergeSort(int arr[],int s,int e){
    if(s>=e) return;
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    return merge(arr,s,e);

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
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

  return 0;
}
