#include<bits/stdc++.h>
using namespace std;

int main()
	{
	long long n ;
	cin >> n ;
	int a , b;
	cin >> a >> b ;
	if (n % 2 == 0){
		if (2 * a == b) cout << n * a ;
		else if (2*a < b) cout << n * a ;
		else cout << n/2 * b ;
	}
	else {
		if (2*a <= b) cout << n* a ;
		else cout << (n-1)/2 * b  + a;
	}
	 return 0;
	}
