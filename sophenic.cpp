#include<bits/stdc++.h>
using namespace std;

int sphenic(long long n){
	int res = 0;
		for (long long i = 2 ; i <= n ; i ++){
			int cnt = 0;
			while (n%i == 0){
				++ cnt ;
				n/=i ;
			}
			if (cnt > 1) {
				return 0;
			}
			if (cnt == 1) ++ res;
		}
		if(n!=1) ++ res ;
		return res == 3;
}
int main()
	{
	long long n ;
	int count1 = 0 , count2 = 0;
	cin >> n ;
	cout << sphenic(n);
	 return 0;
	}
