#include<bits/stdc++.h>
using namespace std;

int main()
	{
	long long n , m  ;
	cin >> n >> m ;
	int count = 0 ;
	for (long long i = sqrt(n); i <= sqrt(m) ; i ++ ){
		if (i*i >= n && i*i <= m ) count ++ ;
	}
	cout << count ;
	 return 0;
	}
