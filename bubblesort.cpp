#include <bits/stdc++.h>
using namespace std;

void print(vector<pair<int,int>> &req ,int max_ele,int N,int M){
	if(max_ele != N){
		cout<<"Boundary constraint violated"<<endl;
		return;
	}
	vector<int> ord;
	unordered_set<int> unq;

	ord.push_back(req[0].first);
	unq.insert(req[0].first);
	for(int i=1;i<M;i++){
		for(int j=0;j<i;j++){
			if(req[i].first == req[j].second){
				if(req[i].second == req[j].first){
					cout<<"IMPOSSIBLE"<<endl;
					return;
				}

			}
		}
		if(unq.find(req[i].first) == unq.end()){
			ord.push_back(req[i].first);
			unq.insert(req[i].first);
		}

	}
	int i=0;
	while(ord.size() != N){
		if(unq.find(req[i].second) == unq.end()){
			ord.push_back(req[i].second);
			unq.insert(req[i].second);
		}
		i++;
	}
	for(auto &e : ord){
		cout<<e<<" ";
	}
	
	return;
}

int main(){

	int T;
	cin>>T;
	while(T--){
		int N,M;
		cin>>N>>M;
		vector<pair<int,int>> req;
		int max_ele = INT_MIN;
		for(int i=0;i<M;i++){
			int c1,c2;
			cin>>c1>>c2;
			pair<int,int> p;
			p.first = c1;
			max_ele = max(max_ele,c1);
			p.second = c2;
			max_ele = max(max_ele,c2);
			req.push_back(p);
		}
		print(req,max_ele,N,M);
		cout<<'\n';
	}


}



// Sample Input
// 2
// 6 7
// 6 3
// 6 1
// 5 1
// 5 2
// 3 4
// 4 2
// 2 1
// 4 4
// 1 2
// 2 1
// 2 3
// 1 4

// Sample Output
// 6 5 3 4 2 1
IMPOSSIBLE