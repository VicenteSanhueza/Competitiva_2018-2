#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vector<vi> vec;
void readData(string str, int node){
    stringstream ss;
    int number;
    ss<<str;
    while(ss>>number) vec[node].push_back(number);
}

int main(){
	int casos, places, vecino;
	string str;
	cin>>casos;
	while(casos--){
    	cin>>places;
    	vec.assign(places+1, vi());
    	getline(cin, str);
    	for(int x=1; x<=places; x++){
    		getline(cin,str);
        	readData(str, x);
    	}
    	getline(cin,str);
	    int minN = 1e9;
    	for(int j=1; j<vec.size(); j++){
    		int tmp = vec[j].size();
        	minN = min(minN, tmp);
    	}

    	vector<int> res;
    	for(int y=1; y<vec.size(); y++) if(vec[y].size() == minN) res.push_back(y);

    	for(int y=0; y<res.size(); y++){
    		if(y < res.size()-1) cout<<res[y]<<" ";
       		else cout<<res[y]<<endl;
   		}
	}
	return 0;
}