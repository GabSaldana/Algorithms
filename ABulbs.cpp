#include <bits/stdc++.h>
using namespace std;

int bulbs[200];
int main()
{
	int buttons, n;
	cin>>buttons>>n;
	for(int i = 0 ; i < buttons; i++)
	{
			int k;
			cin>>k;
			for(int j = 0 ; j < k ; j++)
			{
					int turn;
					cin>>turn;
					bulbs[turn-1] = 1;
			}
	}

	bool ans = true;
	for(int i = 0 ; i < n; i++)
		if(bulbs[i] == 0) ans=false;

	if(ans) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;

}