#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

int squarePrime(ll n){
	ll a = n ;
	for (int i = 2 ; i <= sqrt(n) ; i ++){
		int count = 0 ;
		while (n % i == 0){
			++ count ;
			n /= i ;
		}
		if (count > 1) return 1 ;
	}
	return 0;
}
int main()
	{
	ll n , m ;
	cin >> n >> m ;
	for (int i = n ; i <= m ; i ++){
		if (squarePrime(i)) cout << i <<" " ;
	}
	 return 0;
	}
//Một số được coi là số đẹp khi nó đồng thời vừa chia hết cho một số nguyên tố và 
//chia hết cho bình phương của số nguyên tố đó. Viết chương trình liệt kê các số 
//đẹp như vậy trong đoạn giữa hai số nguyên dương cho trước.