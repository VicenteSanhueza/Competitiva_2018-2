#include <bits/stdc++.h>

using namespace std;

int main() {
	int cases; cin >> cases;

	while(cases--) {
		int n, P, W, MW, aux = 0;
		int DP[31];
		memset(DP, 0, sizeof(int)*31);
		cin>>n;
		for(int i = 0; i<n ;i++){
			cin>> P >> W ;
			for(int j = 30; j >= W; j--) if(DP[j] < DP[j-W]+P) DP[j] = DP[j-W]+P;
		}
		int z; cin>>z;
		while(z--) {
			cin>>MW;
			aux += DP[MW];
		}
		cout<<aux<<endl;
	}
    return 0;
}