#include<bits/stdc++.h>
using namespace std;


int count(int arr[],int s,int e){
    int mid = (s+e)/2;
    vector<int> temp;
    int i = s;
    int j = mid+1;
    int count = 0;
    while(i<=mid and j<=e){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            count+= (mid-i+1);
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
    return count;
}

int inversion(int arr[],int s,int e){
    if(s>=e) return 0;
    int mid = (s+e)/2;
    int c1 = inversion(arr,s,mid);
    int c2 = inversion(arr,mid+1,e);
    int CI = count(arr,s,e);
    return c1+c2+CI;

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
    cout<<inversion(arr,0,n-1)<<endl;

  return 0;
}
