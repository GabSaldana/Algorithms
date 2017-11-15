
#include <bits/stdc++.h>

using namespace std;

int moves[4][2]={{0,1},{1,0},{0,-1},{-1,0}};

struct Estado{
	
	int Y;
	int X;
	int dist;
}; 

bool valida( int Yhijo , int Xhijo , vector <vector<char> > &mapa , vector <vector<int> > &Visitados){

	int n = mapa.size();//no. de filas
	int m = mapa[0].size();//no. de columnas

	if ( Yhijo < 0 || Xhijo < 0 || Yhijo == n || Xhijo == m )
		return false;
	if ( mapa [Yhijo][Xhijo] == '#' )
		return false;
	if ( Visitados[Yhijo][Xhijo] == 1)//visitado
		return false;
	Visitados[Yhijo][Xhijo] = 1 ;
	return true;
}

void bfs( vector <vector<char> > &mapa , int yi , int xi ){

	int n = mapa.size();//no. de filas
	int m = mapa[0].size();//no. de columnas
	vector <vector <int> > Visitados (n ,vector<int> (m));
	queue <Estado> Q;//no leva dato de tamaño inicial
	Q.push((Estado){yi,xi,0});

	while( !Q.empty() ){

		Estado actual = Q.front();
		Q.pop();
		int Yhijo , Xhijo ;

		if( mapa[actual.Y][actual.X] == 'X'){
			
			cout << actual.dist << endl;
			return ;
		}

		for( int i=0 ; i < 4 ; i++ ){

			Yhijo = actual.Y + moves[i][0];
			Xhijo = actual.X + moves[i][1];

			if ( valida( Yhijo , Xhijo , mapa , Visitados) ){

				Q.push((Estado){Yhijo , Xhijo , actual.dist + 1});
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	
	int filas , columnas;
	cin >> filas >> columnas ;
	int yi , xi ; //y= filas , x=columnas
	cin >> yi >> xi ;
	vector < vector<char> > mapa( filas , vector<char> (columnas) );

	//*******CAPTURA************

	for( int i=0 ; i < filas ; i++ ){

		for( int j=0 ; j< columnas ; j++){
			cin >> mapa[i][j];
		}
	}

	for( int i=0 ; i < filas ; i++ ){

		for( int j=0 ; j< columnas ; j++){
			cout << mapa[i][j];
		}
		cout << endl;
	}

	bfs(mapa , yi , xi);

	return 0;
}