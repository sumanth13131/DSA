#include<bits/stdc++.h>
using namespace std;


void generateBrackets(string output,int n,int p,int c,int o){
    if(p == 2*n ){
        cout<<output<<endl;
        return;
    }

    if(o>=c and o<n){
        generateBrackets(output+'(',n,p+1,c,o+1);
    }
    if(c<o){
        generateBrackets(output+')',n,p+1,c+1,o);

    }
    return;
}


int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    string output;
    generateBrackets(output,n,0,0,0);

    return 0;
}
// IP:
// 3

// OP:
// ((()))
// (()())
// (())()
// ()(())
// ()()()

