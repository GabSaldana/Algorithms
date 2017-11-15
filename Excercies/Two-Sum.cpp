#include <iostream> 
#include <string> 
#include <cmath> 
#include <stdlib.h> 

using namespace std;

int main(){

int a,b,target;
string st;
cin >> st;
int n=(st.length())-2;
cout << "n: " << n << endl;
cin >> target;
n=ceil(n/2)+1;
cout << "n: " << n << endl;
int nums[n];

for(int i=0; i<n; i++){
    
	if(st[i] != ','){
		nums[i]=atoi( st[i].c_str());
    	cout << nums[i] << endl;
	}
}


for(int i=0;i<n-1;i++){
    
    for(int j=i+1; j<n; j++){
        
        if(nums[i] + nums[j] == target)
            a=nums[i];b=nums[i]; 
            break;
    }
}

cout << "[" << a << "," <<b << "]" << endl;
return 0;    
}
