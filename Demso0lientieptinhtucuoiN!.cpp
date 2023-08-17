#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

long long count(long long n){
	long long res = 0 ;
	for (long long int i = 5 ; i <= n ;i *= 5){
		res  += n/i ;
	}
	return res % MOD;
}
int main()
	{
	long long n ;
	cin >> n ;
	long long result = count(n);
	cout << result ;
	 return 0;
	}
