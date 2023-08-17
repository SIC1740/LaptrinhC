#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n ,x;
	cin >> n ;
	set<int>a ;
	for (int i = 0 ; i < n ; i ++){
		cin >> x ;
		a.insert(x);
	}
	int s = *a.rbegin()- *a.begin()+1;
	cout << s - a.size() ;
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
