#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int T_case;
	cin >> T_case;
	for(int i = 0; i < T_case; i++)
	{
		ll K;
		cin >> K;
		ll a[K];
		ll c,b;
		cin >> a[0] >> a[1];
		ll sum = (a[0] + a[1])%10;
//		cout << a[0] << endl << a[1] << endl;
		a[2] = 2*(sum % 10);
		if(a[2] == 6)
		{
			sum = sum + ((K-3)/4)*20 + a[2];
			ll temp = (K-3) % 4;
			int list[] = {2,4,8,6};
			for(int i = 0; i < temp;i++)
			{
				sum += list[i];
			}
		}
		else if(a[2] == 2)
		{
			sum = sum + ((K-3)/4)*20 + a[2];
			ll temp = (K-3) % 4;
			int list[] = {4,8,6,2};
			for(int i = 0; i < temp;i++)
			{
				sum += list[i];
			}
		}
		else if(a[2] == 4)
		{
			sum = sum + ((K-3)/4)*20 + a[2];
			ll temp = (K-3) % 4;
			int list[] = {8,6,2,4};
			for(int i = 0; i < temp;i++)
			{
				sum += list[i];
			}
		}
		else if(a[2] == 8)
		{
			sum = sum + ((K-3)/4)*20 + a[2];
			ll temp = (K-3) % 4;
			int list[] = {6,2,4,8};
			for(int i = 0; i < temp;i++)
			{
				sum += list[i];
			}
		}
		if(sum % 3 == 0)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
