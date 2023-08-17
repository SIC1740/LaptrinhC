#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b){
	if (a.second == b.second)
		return a.first < b.first;
	return a.second > b.second;
}
void testcase(){
	int n ;	cin >> n ;
	map<int,int>mp ;
	for (int i = 0 ; i < n ; i ++){
		int s ;
		cin >> s ;
		mp[s] ++ ;
	}
	vector<pair<int,int>>a(mp.begin(),mp.end());
	sort(a.begin(), a.end() , cmp);
	for (auto x : a){
		for(int j = 0 ; j < x.second ; j ++){
			cout << x. first << " " ;
		} 
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
