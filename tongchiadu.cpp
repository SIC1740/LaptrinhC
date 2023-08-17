#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007 ;

int main()
	{
	int t ;
	cin >> t ;
	long long n[t];
	long long product = 1 ;
	for (int i = 0 ; i < t ; i ++){
		cin >> n[i] ;
	}
	for (int i = 0 ; i < t ; i ++){
		product =(product * n[i]) % MOD ;
	}
	cout << product % MOD ;
	 return 0;
	}
