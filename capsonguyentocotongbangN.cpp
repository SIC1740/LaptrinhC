#include<bits/stdc++.h>
using namespace std;


int main()
	{
	int T ;
	cin >> T;
	vector<bool>isPrime(100000000,true);
		isPrime[0] = isPrime[1] = false ;
		
		for (int i = 2 ; i <= 10000 ; i++){
			if (isPrime[i]){
				for (int j = i * i ; j <= 10000000 ; j +=i){
					isPrime[j] = false ;
				}
			}
		} 
	while (T--){
		long long n ;
		cin >> n ;
		int count = 0 ;
		if()
	}
	 return 0;
	}