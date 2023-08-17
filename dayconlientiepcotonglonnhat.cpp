#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n ;
	cin >> n ;
	int sum = 0 , ans = 0 ;
	vector<int>a(n);
	for (int i = 0 ; i < n ; i ++){
		cin >> a[i];
		sum = max(a[i], sum+a[i]);
		ans = max(ans,sum);
	}
	cout << ans ;
}

int main()
	{
	int t = 1 ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
