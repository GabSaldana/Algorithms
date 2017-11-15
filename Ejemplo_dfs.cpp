#include <bits/stdc++.h>
#define MAX 500 

using namespace std;

int fila , columna;
int mapa[MAX][MAX];
bool visitados [MAX][MAX];// 1= visitado  0= no visitado


void dfs(int Y, int X);//fila , columna


int main(int argc, char const *argv[])
{
	cin >> fila >> columna;

	for (int i = 0; i < fila ; ++i){
		for (int j = 0; j < columna; ++j){
			cin >> mapa[i][j] ;
		}
	}

	for (int i = 0; i < fila ; ++i){
		for (int j = 0; j < columna; ++j){
			dfs( i , j );
		}
	}

	for (int i = 0; i < fila ; ++i){
		for (int j = 0; j < columna; ++j){
			cout << visitados [i][j];
		}
		cout << endl;
	}	

	return 0;
}

void dfs(int Y, int X){// celda actual

	if( Y < 0 || Y >= fila || X < 0  || X >= columna )// condiciones de parada
		return;
	if( mapa[Y][X] == 0 )//si es un muro
		return;
	if( visitados[Y][X] == 1 )// ya ha sido visitado
		return;

	visitados[Y][X] =  1;
	dfs( Y+1 , X );
	dfs( Y , X+1 );
	dfs( Y , X-1 );
	dfs( Y-1 , X );
}