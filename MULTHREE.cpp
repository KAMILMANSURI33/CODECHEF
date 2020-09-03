#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int T_case;
	cin >> T_case;
	for(int i = 0; i < T_case; i++)
	{
		ll k;
		cin >> k;
		ll a,b;
		cin >> a >> b;
		ll ans = (a+b)%10;
		if(k == 2){
			if(ans % 3 ==0 ){
				printf("YES\n");
			} 
			else 
			{
				printf("NO\n");
			}
			continue;
		}
		ans += (a+b)%10;
		k -= 3;
		ans += (2 * (a+b)%10) * (k / 4) ;
		ans += (4 * (a+b)%10) * (k / 4) ;
		ans += (8 * (a+b)%10) * (k / 4) ;
		ans += (6 * (a+b)%10) * (k / 4) ;
		k %= 4;
		if(k > 0)
		{
			ans += 2 * (a+b) % 10 ;
			k--;
		}
		if(k > 0)
		{
			ans += 4 * (a+b) % 10 ;
			k--;
		}
		if(k > 0)
		{
			ans += 8 * (a+b) % 10 ;
			k--;
		}
		if(k > 0)
		{
			ans += 6 * (a+b) % 10 ;
			k--;
		}
		if(ans % 3 ==0 )
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}
