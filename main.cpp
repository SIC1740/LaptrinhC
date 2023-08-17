#include<bits/stdc++.h>
using namespace std;

int a[100], cot[100], xuoi[100], nguoc[100], sum;
void Try(int i)
	{
		for(int j = 1; j <= 8; j++)
			{
				if(cot[j] == 0 && xuoi[i + j - 1] == 0 && nguoc[8 + i - j] == 0)
					{
						a[i] = j;
						cot[j] = xuoi[i + j - 1] = nguoc[8 + i - j] = 1;
						if(i == 8)
							{
								sum += a[i];
							}
						else Try(i + 1);
						cot[j] = xuoi[i + j - 1] = nguoc[8 + i - j] = 0;
					}
			}
	}
int main()
	{
		int t; cin >> t;
		for(int i = 1; i <= t ;i++)
			{
				memset(a,false, sizeof(a));
				memset(xuoi,false, sizeof(xuoi));
				memset(nguoc,false, sizeof(nguoc));
				memset(cot,false, sizeof(cot));
				for(int i = 1; i <= 64; i++)
					cin >> a[i];
				sum = 0;
				Try(1);
				cout << "Test 1: " << sum << endl;
			}
		return 0;
	}