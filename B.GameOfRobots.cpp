/*

In late autumn evening n robots gathered in the cheerful company of friends. Each robot has a unique 
identifier — an integer from 1 to 109.

At some moment, robots decided to play the game "Snowball". Below there are the rules of this game. First, 
all robots stand in a row. Then the first robot says his identifier. After that the second robot says the
 identifier of the first robot and then says his own identifier. Then the third robot says the identifier of the first robot,
  then says the identifier of the second robot and after that says his own. This process continues from left to right until 
  the n-th robot says his identifier.

Your task is to determine the k-th identifier to be pronounced.
*/



#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	vector <int> numeros(n);
	for(int i = 0 ; i < n; i++)
		cin>>numeros[i];

	int current = 0,ans;
	for(int i = 0 ; i < n; i++)
	{
		current = current + (i+1);
		if(current>=k)
		{
			ans = (i+1) - (current-k);
			break;
		}
	}
	cout<<numeros[ans-1]<<'\n';
	return 0;
}

