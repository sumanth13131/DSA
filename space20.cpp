#include<bits/stdc++.h>
using namespace std;

int main(){

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  char s[1000];
  cin.getline(s,1000);
  int spaces = 0;
  for(int i =0;s[i] != '\0';i++){
    if(s[i] == ' '){
      spaces+=1;
    }
  }
  
  int ind = strlen(s) + 2*spaces;

  s[ind] = '\0';

  for(int i=strlen(s)-1;i>=0;i--){
    if(s[i] ==' '){
      s[ind-1] = '0';
      s[ind-2] = '2';
      s[ind-3] = '%';
      ind-=3;
    }
    else{
      s[ind-1] = s[i];
      ind -=1;
    }
  }

  for(int i =0;s[i]!= '\0';i++){
    cout<<s[i];
  }
  cout<<endl;

  return 0;
}
