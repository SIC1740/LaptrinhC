#include<bits/stdc++.h>
using namespace std;

int main()
	{
		long long m, n , a;
		cin >> m >> n >> a ;
		long long a1, a2 ;
		if (m % a ==0) {
			a1 = m/a;
		}
		else a1 = m/a+1;
		if(n % a == 0){
			a2 = n/a;
		}
		else a2 =n/a +1 ;
		cout << a1 * a2;
		

	 return 0;
	}
