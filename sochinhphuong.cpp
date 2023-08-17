#include<bits/stdc++.h>
using namespace std;

int main()
	{
	long long n, m ;
	cin >> n  >> m;
	for (long long i = sqrt(n); i <= sqrt(m) ; i ++){
		if (i*i >= n && i*i <= m)cout << i*i << " ";
	}
	 return 0;
	}
