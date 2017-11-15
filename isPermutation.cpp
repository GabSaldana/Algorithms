#include <iostream>
#include <algorithm>//swap
#include <string.h>//memset

using namespace std;

bool is_Equal( string a , string b ){

	if( a.size() != b.size() ){

		return false;
	}
	return true;
}

void print(int A[] , int T){

	int size = T;
	for( int i=0; i < size; i++ ){

		cout << A[i] << " ";
	}
	cout << endl;
}

bool compare(int A[] , int B[], int size){

	for( int i=0 ; i < size ; i++ ){
			
			if(A[i] != B[i]){
				return false;
			}
	}
	return true;
}

int main(int argc, char const *argv[])
{
	
	string a;
	string b;
	int size=126;
	int map1[size];
	int map2[size];
	cin >> a;
	cin >> b;

	if( is_Equal(a,b) ){
		
		memset( map1 , 0 ,sizeof(map1) );//size of returnsthe number of bytes
		memset( map2 , 0 ,sizeof(map2) );
		for( int i=0; i < a.size(); i++ ){ //sezie returns the number of characters a string has doesn't work on arrays
			int aux= (int)a[i]; //valor decimal ascii del caracter
			int aux2 = (int)b[i];
			map1[aux] +=1;
			map2[aux2] +=1;
		
		}

		print(map1, sizeof(map1)/sizeof(int) );
		print(map2, sizeof(map2)/sizeof(int) );

		if( compare( map1, map2, size ) ){

			cout << "Es una permutacion" << endl;
		}else{

			cout << "No es una permutacion" << endl;
		}

	}else{

		cout << "No es una permutacion" << endl;
		
	}
	
	return 0;
}