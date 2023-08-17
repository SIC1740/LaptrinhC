#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int t ;
	cin >> t ;
	string s ;
	cin >> s ;
	pair<int,int>vt = make_pair(0,0);
	for (int i = 0 ; i < s.length(); i ++){
		if (s[i] == 'G') 
			vt.second ++ ;
		if (s[i] == 'L')
			vt.first-- ;
		if (s[i] == 'R')
			vt.first ++ ;
		if (s[i] == 'B')
			vt.second -- ;
	}
	cout << vt.first << " " << vt.second;
}
int main()
	{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	testcase();
	cout << endl ;
	 return 0;
	}
