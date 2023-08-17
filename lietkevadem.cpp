#include<bits/stdc++.h>
using namespace std;

bool test(long long a){
	while(a){
		int n = a % 10 ;
		if (n != 2 && n != 5 && n != 7 && n != 3){
			return false;
		}
		a /= 10 ;
	}
	return true ;
}
void testcase(){
	long long n ;
	map<long long,long long> mp;
	long long a[100000];
	long long count = 0 ;
	while(cin >> n){
		if (test(n)){
			mp[n] ++ ;
		}
		a[count] = n ;
		++ count ;
	}
	for(long long i = 0 ; i < 100000; i ++){
		if (mp[a[i]] != 0){
			cout << a[i] << " " << mp[a[i]] << endl;
			mp[a[i]] = 0 ;
		}
	}
}

int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	
		testcase();

	 return 0;
	}
