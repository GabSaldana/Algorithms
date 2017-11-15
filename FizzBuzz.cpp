#include <iostream>
#include <algorithm>//swap
using namespace std;

int T;//number of test cases

bool is_M3( int n ){

	if( n > 0 ){
		
		if( n % 3 == 0 && n % 5 != 0){
			/*n es múltiplo de 3*/
			return true;
		}
	}
	return false;
}

bool is_M5( int n ){
	
	if( n > 0 ){
		
		if( n % 5 == 0 && n % 3 != 0){
			/*n es múltiplo de 5*/
			return true;
		}
	}
	return false;	
}

bool is_M35( int n ){
	
	if( n > 0 ){
		
		if( n % 15 == 0){

			/*n es múltiplo de 3 y 5*/
			return true;
		}
	}
	return false;
}

void print(int A[], int T){

	for( int i=0; i < T; i++ ){

		cout << A[i] << " ";
	}
	cout << endl;
}


int main(int argc, char const *argv[]){
		

	int aux[T], n;
	cin >> T;
	for ( int i=0 ; i < T ; i++){

		cin >> n;
		aux[i]=n;
	}

	//print(aux, T);

	n=0;//contador para el arreglo

	while( T-- ){//any number different of 0 is true 0=false


		for( int i= 1; i <= aux[n] ; i++ ){

			//cout << i << endl;

			if (is_M3(i)){

				cout << "Fizz" << endl;
			}
			else if (is_M5(i)){

				cout << "Buzz" << endl;
			}
			else if (is_M35(i)){

				cout << "FizzBuzz" << endl;
			}
			else{
				cout << i << endl;
			}

		}
		n++;
	}
	return 0;
}