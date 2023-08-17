#include<bits/stdc++.h>
using namespace std;

using ll = long long;
//
//int snt (ll n){
//	for (int i = 2 ; i <= sqrt(n) ; i ++){
//		if (n % i == 0){
//			return 0;
//			break;
//		}
//	}
//	return n > 1 ;
//}
ll sntmax(ll n){
	int res ;
	for (int i = 2 ; i <= sqrt(n) ; i ++){
		while ( n % i == 0){
			res = i ;
			n/=i ;
		}
	}
	if (n != 1 ) res = n ;
	return res ;
}
int main()
	{
	int T ;
	cin >> T;
	while (T) {
		ll n ;
		cin >> n ;
		ll sntm = sntmax(n) ;
		cout << sntm << endl;
		T-- ;
	}
	 return 0;
	}
