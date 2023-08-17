#include<bits/stdc++.h>
using namespace std;

int main()
	{
	int a1, a2, a3 ;
	int b1, b2 , b3 ;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 ;
	long long n ;
	cin >> n ;
	long long X = a1 + a2 +a3 +b1+b2+b3 ;
	long long a = (10 * n - X) ;
	long long b = (X - 5 * n);
	if (a < 0 || b < 0) cout <<"NO" ;
	else cout << "YES" ;
	 return 0;
	}
