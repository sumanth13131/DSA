#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

//Arr1 = [23,5,10,17,30]
//Arr2 = [26,134,135,14,19]

//output = {17,19} 
pair<int,int> minDifference(vector<int> a,vector<int> b){
    //Complete this method
     int a1,b1;
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     int as=a.size();
     int bs = b.size();
     int i=0,j=0;
     int mindiff = INT_MAX;
     while(i<as && j<bs){
         int d = abs(a[i]-b[j]);
         if(d < mindiff){
             mindiff = d;
             a1 = a[i];
             b1 = b[j];
         }
         if(a[i] < b[j]){
             i++;
         }
         else{
             j++;
         }
     }
     return {a1,b1};
    
}
