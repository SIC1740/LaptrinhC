#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
const long long MOD = 1000000007 ;

ll fibonacci(int n){
	ll f[n+1];
	f[0]= 0 ; f[1] = 1 ;
	for (int i = 2 ; i <= n ; i ++){
		f[i] = (f[i-1] +f[i-2]) ;
	}
	return f[n];
}
int main()
	{
	long long n ;
	cin >> n ;
	int count = 0 ;
	for (int i = 0; i <=92 ; i ++){
		if (fibonacci(i) >= n) {
			cout << fibonacci(i) ; 
			count ++ ;
			break ;
		}
	}
	 return 0;
	}
