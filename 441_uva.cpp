#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int co=0;
	while(cin>>n){
		if(n==0) break;
		if(co!=0){
			cout<<endl;
		}
		co++;
		vector<int> v;
		for(int i=0; i<n ;i++){
			int aux; cin>>aux;
			v.push_back(aux);
		}
		for(int i=0; i < v.size()-5 ;i++){
			for(int j=i+1; j < v.size()-4 ;j++){
				for(int k= j+1; k < v.size()-3 ;k++){
					for(int l= k+1; l < v.size()-2 ;l++){
						for(int m= l+1; m < v.size()-1 ;m++){
							for(int n= m+1; n < v.size() ;n++){
								cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<" "<<v[l]<<" "<<v[m]<<" "<<v[n]<<endl;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}