#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,inicio,fin;
	cin>>n>>inicio>>fin;
	string ruta;
	cin>>ruta;
	if(inicio == fin || ruta[inicio-1] == ruta[fin-1])
	{
			cout<<0<<'\n';
	}
	else
	{
		cout<<1<<'\n';
	}
	return 0;

}