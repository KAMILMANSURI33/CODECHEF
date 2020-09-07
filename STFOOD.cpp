#include<bits/stdc++.h>
#include<cmath>
using namespace std;
typedef long long ll;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		vector<vector<int> > v;
		int N;
		cin >> N;
		int a[N][3];
		for(int i =0 ;i < N;i++)
		{
			for(int j = 0; j < 3; j++)
			{
				cin >> a[i][j];
			}
		}

		int max_prof = 0;
		for(int i = 0; i < N ;i++)
		{
			int temp = 0;
			temp = floor(a[i][2]/(a[i][0]+1)) * a[i][1];
			max_prof = max(max_prof,temp);
		}
		cout << max_prof << endl;
	}
}
