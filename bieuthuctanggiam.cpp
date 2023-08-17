#include<bits/stdc++.h>
using namespace std;

void testcase(){
	string s ; 
	cin >> s ;
	stack<int>st ;
	for (int i = 0 ; i <= s.length(); i ++){
		st.push(i+1);
		if (i == s.length() || s[i] == 'I'){
			while(!st.empty()){
				cout << st.top();
				st.pop();
			}
		}
	}
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t ;
	cin >> t ;
	int cnt = 1 ;
	while(t--){
		cout << "Test " << cnt << ": ";
		testcase();
		cout << endl ;
		++ cnt ;
	}
	 return 0;
	}
