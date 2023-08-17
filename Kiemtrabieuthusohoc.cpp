#include<bits/stdc++.h>
using namespace std;

void testcase(){
	string s ;
	getline(cin,s);
	stack<char>st;
	for (int i = 0 ; i <= s.length(); i ++){
		if (s[i] != ')'){
			st.push(s[i]);
		}
		else {
			bool res = false ;
			while (!st.empty()){
				char x = st.top();
				st.pop();
				if (x == '+' || x == '-' || x == '*' || x == '/')
					res = true ;
				if (x == '(')
					break ;
			}
			if (!res){
				cout << "Yes";
				return ;
			}
		}
	}
	cout << "No";	
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t ;
	cin >> t ;
	cin.ignore();
	while(t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
