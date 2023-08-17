#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n ;
	cin >> n ;
	long long a[n];
	map<int,int>mp;
	for (int i = 0 ; i < n ; i ++){
		cin >> a[i] ;
		mp[a[i]]++;
	}
	int count  ;
	for (int i = 0 ; i < n ; i ++){
		if (mp[a[i]] > 1){
			cout << a[i];
			count = 1;
			return ;
		}
	}
	if (count == 0 ) cout << "NO" ;
}
int main()
	{
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL); cout.tie(NULL);
	
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl ;
	}
	
	 return 0;
	}
