#include <bits/stdc++.h>

using namespace std;
#define ll long long int
ll _sieve_size;
bitset<10000010> bs;
vector<int> primes;

void sieve(ll upperbound){
	_sieve_size= upperbound+1;
	bs.set();
	bs[0]= bs[1]=0;
	for(ll i=0; i<= _sieve_size ;i++) if(bs[i]){
		for(ll j=i*i; j<_sieve_size ;j+=i) bs[j]=0;
		primes.push_back((int)i);
	}
}

bool isPrime(ll n){
	if(n<=_sieve_size) return bs[n];
	for(int i=0; i< (int)primes.size() ;i++){
		if(n%primes[i]==0) return false;
	}
	return true;
}

int main(){
	sieve(90);
	for(int i=0; i< primes.size() ;i++){
		cout<<i+1 <<": "<< primes[i] <<endl;
	}
	int n;
	char v1[5] ="01234";
	char v2[5] ="56789";
	int i= atoi(v1);
	int j= atoi(v2)
	while(cin>>n && n){
		if(isPrime(n)){
			cout<< "There are no solutions for "<<n<< "."<<endl<<endl;
		}else{
			
		}
	}
	/*int n;
	cout<< i <<endl;
	while(cin>>n && n){
			
	}*/
	return 0;
}