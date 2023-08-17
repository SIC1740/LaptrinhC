#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

ll gcd(ll a , ll b){
	if (a == 0 || b == 0) return a + b ;
	while (a != b){
		if (a>b){
			a = a - b ;
		}
		else {
			b = b - a;
		}
	}
	return a ;
}

ll lcm(ll a, ll b){
	return a/gcd(a,b)*b;
}
int main()
	{
	int t ;
	cin >> t ;
	while (t--){
		long long  a , b ;
		cin >> a >> b ;
		cout << lcm(a,b) << " " << gcd(a,b) << endl ;
	}
	 return 0;
	}
