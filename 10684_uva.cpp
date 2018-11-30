#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, i, x[100000];

	while(cin>>n) {
		if(n==0) break;
		for (i = 0; i < n; i++) cin>>x[i];

		int max = 0, temp = 0;
		for (i = 0; i < n; i++) {
			temp += x[i];
			if (temp > max) max = temp;
			if (temp < 0) temp = 0;
		}

		if (max > 0) cout<<"The maximum winning streak is "<<max<<"."<<endl;
		else cout<<"Losing streak."<<endl;
	}

	return 0;
}