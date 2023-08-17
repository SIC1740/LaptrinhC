#include<bits/stdc++.h>
using namespace std;

int main()
	{
	long long a , b , k;
	cin >> a >> b >> k ;
	long long k1 ;
	if(k % 2 == 0){
		k1 = (a-b)*k/2 ;
	}
	else {
		k1 =(a-b)*(k-1)/2+a;
	}
	cout << k1 ;
	 return 0;
	}
