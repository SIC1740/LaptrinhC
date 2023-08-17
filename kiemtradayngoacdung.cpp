#include<bits/stdc++.h>
using namespace std;

void testcase(){
	string s; 
	getline(cin,s);
	stack<int>st;
	int open = 0, close = 0 ;
	for (int i = 0 ; i < s.length(); i ++){
		if (s[i] == '[' || s[i] == '('){
			open ++ ;
			st.push(s[i]);
		}
		else {
			if(!st.empty() && s[i] == ']' && st.top() == '['){
				open -- ;
				st.pop();
			}
			else if(!st.empty() && s[i] == ')' && st.top() == '('){
				open -- ;
				st.pop();
			}
			else {
				close ++ ;
				st.push(s[i]);
			}
		}
	}
	if (open == 0 && close == 0) cout << "YES";
	else cout << "NO";
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t ;
	cin >> t ;
	cin.ignore();
	while (t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
