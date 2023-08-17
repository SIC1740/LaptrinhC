#include<bits/stdc++.h>
using namespace std;

int sortt(pair<int,int>a, pair<int,int>b){
	if (a.second == b.second) 
		return a.first < b.first;
	return a.second < b.second;
}
void testcase(){
	int n ;
	cin >> n ;
	vector<pair<int,int>>vt(n) ;
	
	for (int i = 0 ; i < n ; i ++){
		cin >> vt[i].first >> vt[i].second;
	}
	
	sort (vt.begin(),vt.end(),sortt);
	int ans = 1 , ans1 = vt[0].second ;
	for (int i = 1 ; i < n ; i ++){
		if (vt[i].first >= ans1){
			ans ++ ;
			ans1 = vt[i].second ;
		}
	}
	cout << ans ;	
}
int main()
	{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
