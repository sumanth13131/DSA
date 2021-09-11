/*I/P : 11 8
        1 3 2 1 4 1 3 2 1 1 2
*/

/* O/P : 2 5
         4 6
         5 9
*/


#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n,tar;
    cin>>n>>tar;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int i=0;
    int j=1;
    int curr=arr[i] + arr[j];
    while(i<j && i<n && j<n){
        if(curr > tar){
            i++;
            curr-=arr[i-1];
            
        }
        else if(curr < tar){
            j++;
            curr+=arr[j];
            
        }
        else{
            cout<<i<<" "<<j<<endl;
            i++;
            j++;
            curr-=arr[i-1];
            curr+=arr[j];
        }
    }

  return 0;
}
