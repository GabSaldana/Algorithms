#include <iostream>
#include <algorithm>//swap
#include <string.h>//memset

using namespace std;

string a;
	
void print(int A[] , int T){

	int size = T;
	for( int i=0; i < size; i++ ){

		cout << A[i] << " ";
	}
	cout << endl;
}

bool is_pair( string a ){

	if( a.size() % 2 == 0 ){

		return true;
	}
	return false;
}

bool compare( int A[], int size ){

	int contimpar=0;//cuantos numeros impares tengo
	int contpar=0;//cuantos numeros pares tengo
	for( int i=0 ; i < size ; i++ ){
			
		if( A[i] % 2 == 0 && A[i] != 0){
			contpar ++;	
		}
		if( A[i] % 2 != 0 && A[i] != 0){
			contimpar ++;
		}
	}
	
	cout << "CONTPAR: " << contpar << endl;
	cout << "CONTIMPAR: " << contimpar << endl;
	if( is_pair(a) ){//si el tamaño de la cadena es par

		if(contimpar == 0 && contpar > 0){
			cout << " Es una permutacion de un palindromo" << endl;
			return true;
		}else{

			cout << " No es una permutacion de un palindromo" << endl;
			return true;
		}

	}else{//Si el tamaño de la cadena es impar

		if(contimpar == 1 && contpar > 0){
			cout << " Es una permutacion de un palindromo" << endl;
			return true;
		}else{

			cout << " No es una permutacion de un palindromo" << endl;
			return true;
		}
	}
}

int main(int argc, char const *argv[])
{
	cin >> a;	
	int size=126;
	int map1[size];
	memset( map1 , 0 ,sizeof(map1) );//size of returnsthe number of bytes

	for( int i=0; i < a.size(); i++ ){ //sezie returns the number of characters a string has doesn't work on arrays
		int aux= (int)a[i]; //valor decimal ascii del caracter
		map1[aux] +=1;
	}	

	compare(map1,size);
	return 0;
}