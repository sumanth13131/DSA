#include <bits/stdc++.h>
using namespace std;
int L11 = 97;
int L12 = 109;
int L21 = 78;
int L22 = 90;



int cat(char &c){
    if((int)c >=97 && (int)c <=109  ){
        return 1;;
    }
    if((int)c >=78 && (int)c <=90){
        return 2;
   }
   return 0;
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int k;
        cin>>k;
        bool crt = false;
        while(k--){
            string str;
            cin>>str;
            int init_cat=0;
            if((int)str[0] >=97 && (int)str[0] <=109  ){
                init_cat = 1;
            }
            if((int)str[0] >=78 && (int)str[0] <=90){
                init_cat = 2;
            }
            if(init_cat == 0){
                cout<<"NO"<<endl;
                k=0;
                break;
            }
    
            if(init_cat>0){
                for(auto &c :str){
                if(cat(c) == 0){
                    cout<<"NO"<<endl;
                    crt = false;
                    break;
                }
                if(cat(c) != init_cat){
                    cout<<"NO"<<endl;
                    crt = false;
                    break;
                }
                else{
                    crt = true;
                }
                
            }
            }
        
        }
        if(crt){
            cout<<"YES"<<endl;

            }

    }

    return 0;
}


// Example Input
// 3
// 1 aN
// 2 ab NO
// 3 A N D
// Example Output
// NO
// YES
// NO



