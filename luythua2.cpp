#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7 ;
using ll = long long ;

ll poww(ll a , ll b ){
	if (b == 0) return 1 ;
	if (b == 1) return a;
	ll res = pow(a,b/2);
	if ( b % 2 == 0) return (res*res)%MOD;
	return (a*((res*res)%MOD))%MOD;
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	int T = 1 ;
	cin >> T ;
	while(T--){
		ll a , b ;
		cin >> a >> b ;
		if (a == 0 && b == 0) break ;
		cout << poww(a,b) ;
		cout << endl ;
	}
	 return 0;
	}
