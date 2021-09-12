// I/P : abcabed
// O/P : 5

#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    string str;
    cin>>str;
    unordered_map<char,int> um;
    int i=0,j=0;
    int win_len = INT_MIN;
    while(i<=j and j<str.size()){
        
        if(um.find(str[j]) == um.end()){
            um[str[j]] = j;
            win_len = max(win_len,(j-i)+1);
            j++;
        }
        else if(i <= um[str[j]]){
            i = um[str[j]]+1;
        }
        else{
            j++;
        }
    }
    cout<<win_len<<endl;

  return 0;
}
