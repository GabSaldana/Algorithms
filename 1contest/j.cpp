#include <bits/stdc++.h>
using namespace std;

int main(){
	int i = 9;
	char c = i + '0';
	string s(1, c);	
	
	string str;
	unsigned sz = str.size();
	str.resize (sz+2,'+');
	sz = str.size();
	cout << sz << endl << str << '\n';
}
