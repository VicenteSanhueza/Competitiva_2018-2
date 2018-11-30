#include <bits/stdc++.h>

using namespace std;

int evaluar(string v){
	int span=0;
	for(int i=0; i<v.size() ;i++){
		if(v[i]=='.'){
			span++;
			if(i+3 >= v.size()){
				break;
			}else{
				i=i+2;
			}
		}
	}
	return span;
}

int main(){
	int cases;
	cin>>cases;
	int z=0;
	while(cases--){
		z++;
		int b; cin>>b;
		string v;
		cin>>v;

		int span= evaluar(v);
		cout<<"Case "<<z<< ": "<<span<<endl;
	}	
	return 0;
}