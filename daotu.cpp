#include<bits/stdc++.h>
using namespace std;

void testcase(){
	string s;
	getline(cin,s);
	istringstream iss(s);
	string word ;
	string result;
	while(iss >> word){
		reverse(word.begin(),word.end());
		result += word + " ";
	}
	
	result.pop_back();
	cout << result ;
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
		cout << endl;
	}
	 return 0;
	}
