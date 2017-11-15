#include <bits/stdc++.h>

using namespace std;

int inicio = 1 , fin = 1 , numero, suma ,contador=1 ;

int	main()
{
	cin >> numero ;

	while( inicio != numero ){
		if( numero == 0){
			contador = 0;
			break;	
		}
		if( suma == numero )
			contador ++;
		if ( suma >= numero)
			suma -= inicio++; //resta inicio y luego suma uno a inicio 
		if( suma < numero)
			suma += fin++;
	}
	
	cout << contador << endl;

	return 0;
}