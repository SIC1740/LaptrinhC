#include<bits/stdc++.h>
using namespace std;

void testcase(){
	string s;
	cin >> s ;
	queue<string>qe;
	qe.push("1");
	int cnt = 0 ;
	while(!qe.empty()){
		string res = qe.front();
		qe.pop();
		cnt ++ ;
		
		string x = res + "0";
		if (x.length() > s.length() || (x.length() == s.length() && stoll(x) > stoll(s))) break ;
		qe.push(x);
		
		x = res + "1";
		if(x.length() > s.length() || (x.length() == s.length() && stoll(x) > stoll(s))) break ;
		qe.push(x);
	}
	cout << cnt + qe.size();
}
int main()
	{
	ios_base::sync_with_stdio;
	cin.tie(NULL); cout.tie(NULL);
	
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl;
	}
	 return 0;
	}
