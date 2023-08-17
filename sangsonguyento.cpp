#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

int snt(ll n, ll k){
	vector<bool>isPrime(n+1,true);
	isPrime[0] = isPrime[1] = false ;
	
	for (int i = 2 ; i * i <= n ; ++i){
		if (isPrime[i] == true){
			for (int j = i * i ; j <= n ; j+=i){
				isPrime[j] = false ;
			}
		}
	}
	vector<int>primeNumbers;
	for (int i = 2 ; i <= n ; i ++){
		if(isPrime[i]) {
			primeNumbers.push_back(i);
		}
	}
	for (int i = 0 ; i < k -2 ; i ++){
		int P = primeNumbers[0] ;
		for (int j = 0 ; j < primeNumbers.size() ; ++j){
			if(primeNumbers[j] % P == 0){
				primeNumbers.erase(primeNumbers.begin()+j) ;
				-- j;
			}
		}
	}
	return primeNumbers[0];
}
int main()
	{
	long long n , k ;
	cin >> n >> k;
	int RemovedNumber = snt(n,k) ;
	cout << k;
	return 0;
}
