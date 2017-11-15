#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int n,m;
char A[m];

void print(int A[] , int T){

	
	for( int i=0 ; i < T ; i++ ){

		cout << A[i] << " ";
	}
	cout << endl;
}

void leeCadena(string cad){

	for( int i=0 ; i < cad.size() ; i++ ){

		//cout << "cad[" << i << "] " << cad[i] << endl;
		if( cad[i] != " " ){

			for( int j= 0; j < m ; j++){// A lo mas m caracteres distintos

				if( A[j] != cad[i] && A[j] == '0' ){//si son diferentes y esta vacio ese lugar
					A[j] = cad[i];
					break;
				}
				if( A[j] == cad[i] ){//caracter repetido

					break;
				}
			}
		}
	}

	//print( A , sizeof( A )/sizeof(char) );
}

int main(int argc, char const *argv[])
{

	
	cin >> n;// 1<=n
	cin >> m;// m<=100
	memset( A , '0' ,sizeof(A) );

	do{

		string bulbs;
		getline( cin,bulbs );
		//cout << "n: " << n << endl;
		leeCadena(bulbs);

	}while( n-- );
	return 0;
}