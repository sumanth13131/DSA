#include<bits/stdc++.h>
using namespace std;

void generateSubsets(string inp,string subset,int i){
	if(i == inp.length()) {
		cout<<subset<<endl;
		return;
	}
	generateSubsets(inp,subset,i+1);
	generateSubsets(inp,subset+inp[i],i+1);

}

int main() {
	string inp = "abc";
	generateSubsets(inp,"",0);
	return 0;
}
