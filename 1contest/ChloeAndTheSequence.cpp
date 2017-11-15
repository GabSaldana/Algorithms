#include <bits/stdc++.h>
using namespace std;

int main(){

	long long n,i=1;
	long long k;//tamaño de bloque tamano_a=1
	cin >> n >> k;
	string sequence;
	string bloque = "1";
	while(n--){
		//cout << n << '\n';
		//long long tamano= (tamano_a*2)+1;
		sequence.append(bloque);
		i++;
		char c = i + '0';//convertir un número de 0-9 en caracter
		string b(1, c);	
		sequence.append(b);
		sequence.append(bloque);
		bloque = sequence;
		unsigned sz = sequence.size();
		if(sz >= k){
			cout << sequence[k-1] << '\n';
			return 0;
		}
		cout << sequence << '\n';
		sequence.clear();
		n -=1;

	}
}