#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{	
	long long x;//No inicial de packs of ice cream
	long long n;//No de personas en la fila
	cin >> n >> x;
	long long acumulador=x;
	char signo;
	long long di;
	long long sadboys=0;

	while( n-- ){
		cin >> signo >> di;

		if( signo == '+' ){
			acumulador += di;
		}
		if( signo == '-' ){
			if( acumulador >= di ){//mayor o igual al numero de packes of icecream, suficiente
				acumulador -= di;
			}else{
				sadboys++;
			}
		}
	}
	cout << acumulador << ' ' << sadboys << '\n';
	return 0;
}