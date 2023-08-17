#include<bits/stdc++.h>
using namespace std;

int n , X ;
vector<pair<int, int>>a ;

bool prepare(pair<int, int >b , pair<int, int> c){
	if (abs(X-b.first) == abs(X-c.first)){
		return b.second < c .second ;
	}
	return (abs(X-b.first) < abs(X-c.first)) ;
}
void testcase(){
	cin >> n >> X ;
	a.resize(n);
	for (int i = 0 ; i < n ; i ++){
		cin >> a[i].first;
		a[i].second = i; 
	}
	sort(a.begin(),a.end(),prepare);
	for(auto x : a){
		cout << x.first << " " ;
	}
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
