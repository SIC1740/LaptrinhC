#include<bits/stdc++.h>
using namespace std;

int snt(long long a){
	for (int i = 2 ; i <= sqrt(a) ; i ++){
		if (a % i == 0) {
			return 0 ; 
			break ;
		}
	}
	return a >1 ;
}
int main()
	{
	long long a ;
	cin >> a ;
	if(snt(a)) cout << "YES" ;
	else cout << "NO" ;
	 return 0;
	}
