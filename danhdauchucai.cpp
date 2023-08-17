#include<bits/stdc++.h>
using namespace std;

int count(const string& S){
	set<char>chars;
	for(char c:S){
		chars.insert(c);
	}
	return chars.size();
}
int main()
	{
	string S ;
	cin >> S ;
	
	int counts = count(S) ;
	cout << counts ;
	 return 0;
	}
