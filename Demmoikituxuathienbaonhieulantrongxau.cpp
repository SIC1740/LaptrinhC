#include<bits/stdc++.h>
using namespace std;

void count( string& str){
	const int Maxchars = 256 ;
	int countchar[Maxchars] = {0};
	
	for (char c : str){
		countchar[tolower(c)]++;
	}
	for (int i = 0 ; i < Maxchars; i ++){
		if (countchar[i] > 0){
			cout << static_cast<char>(i) <<":" << countchar[i]<< " " ;
		}
	}
}

int main()
	{
		string input ;
		getline (cin , input) ;
		count(input);
	 return 0;
	}
