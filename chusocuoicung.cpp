#include<bits/stdc++.h>
using namespace std;

int chuso(int p , int x){
	p %= 10 ;
	if ( p % 10 == 0 ) return 0 ;
	int sum = p * p ;
	if (x == 0) return 1 ;
	if (x == 1) return p % 10 ;
	if (x == 2) return sum % 10;
	for (int i = 2 ; i < x ;i ++){
		sum = (sum % 10) * p;
	}
	return sum % 10;
}
int main()
	{
	int p , x ;
	cin >> p >> x ;
	cout << chuso(p,x) ;
	 return 0;
	}
