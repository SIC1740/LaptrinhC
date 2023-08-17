#include<bits/stdc++.h>
using namespace std;

int main()
	{
	int T ;
	cin >> T ;
	while(T--){
		long long n ;
		cin >> n ;
		vector<long long > a(100000);
		vector<long long > b(100000,0);
		for (int i=0 ; i < n ; i ++){
			cin >> a[i];
			b[a[i]] ++ ;
		}
		for (int i = 0 ; i < n ; i ++){
			if (b[a[i]] % 2 != 0) {
				cout <<a[i];
				break;
			}
		}
		cout << endl ;
	}
	 return 0;
	}
