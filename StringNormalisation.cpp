#include<bits/stdc++.h>
using namespace std;


// I/P : This is SO MUCH fun
// O/P : This Is So Much Fun

int main(){
  
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  
  string copy;
  getline(cin,copy);
    //Make the changes in copy, and return it
    for(int i=copy.size()-1;i>=0;i--){
        if(i == 0){
            copy[i] = toupper(copy[i]);
        }
        else if(copy[i-1] == ' '){
            copy[i] = toupper(copy[i]);
        }
        else{
            copy[i] = tolower(copy[i]);
        }
    }
    cout<<copy<<endl;

  return 0;
}
