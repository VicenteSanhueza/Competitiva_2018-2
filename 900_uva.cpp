#include <bits/stdc++.h>

using namespace std;

uint64_t fibo[100];

uint64_t fib(uint64_t n){
	if(fibo[n] != -1) return fibo[n];
	fibo[n] = fib(n-2) + fib(n-1);
	return fibo[n];
}

int main(){
	for(int i=0; i<100 ;i++) fibo[i]=-1;
	fibo[0]=fibo[1]= 1;
	int n;
	while(cin>>n && n){
		uint64_t num = fib(n);
		cout<< num <<endl;
	}
	return 0;
}