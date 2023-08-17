#include<bits/stdc++.h>
using namespace std;

void testcase(){
	string s ;
	cin >> s ;
	int n ;
	cin >> n ;
	long long cnt = s.length();
	multiset<int>vt;
	for (int i = 0 ; i < cnt ; i ++){
		vt.insert((int)(s[i]-'0'));
	}
	long long count = 0 ;
	for (int x : vt){
		for (int i = 0 ; i< cnt - count; i ++){
			int a = s[i] - '0';
			if (a == x){
				string::iterator it = s.begin() + i;
				s.erase(it);
				++ count ;
			}
		}
		if (count == n) break ;
	}
	cout << s ;
}
int main()
	{
	ios_base::sync_with_stdio(0);
	cin.tie(0) ; cout.tie(0); 
	
	testcase();
	cout << endl;
	 return 0;
	}