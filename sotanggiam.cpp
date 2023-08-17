#include<bits/stdc++.h>
using namespace std;

void testcase(){
	cin.ignore();
	string s ;
	getline(cin,s);
	int a = s[0]-'0';
	int count = 0 , count1 = 0 ;
	for (int i = 1 ; i < s.size(); i ++ ){
		int b = s[i]-'0';
		if (a <= b) {
			a = b;
			count ++ ;
		}
		else {
			count = 0 ;
			break;
		}
	}
	for (int i = 1 ; i < s.size(); i ++){
		int b = s[i] -'0' ;
		if (a>= b){
			a = b ;
			count1 ++ ;
		}
		else {
			count1 = 0 ;
			break;
		}
	}
	if (count == 0 && count1 == 0) cout << "NO";
	else cout << "YES";
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout <<endl;
	}
	 return 0;
	}
