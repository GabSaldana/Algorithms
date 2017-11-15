/*
You have been given an array 
A of size N . you need to sort this array non-decreasing oder using bubble sort. 
However, you do not need to print the sorted array . You just need to print the number of swaps required to sort
this array using bubble sort

Input Format

The first line consists of a single integer N denoting size of the array. The next line contains 
N space separated integers denoting the elements of the array.
Output Format Print the required answer in a single line

Constrains 
1≤N≤100
1≤a[i]≤100
*/


#include <iostream>
using namespace std;

int n,ns=0;

int numberOfSwaps(int A[], int n){

    for(int k=0; k<n-1; k++){

        for(int i=0; i<n-k-1; i++){

            if(A[i]>A[i+1]){

                int temp = A[i+1];
                A[i+1]=A[i];
                A[i]=temp;
                ns++;
            }
        }
    }
    return ns;
}


int main()
{
    int A[100];
    cout << "Size of the array:" << endl;
    cin >> n ;
    cout << "Elements separated by a blank space:" << endl;
    for (int x=0; x<n ;x++){
    	int aux;
    	cin >> aux;
    	A[x]=aux;
    	cout << A[x] << " ";
    }

    ns=numberOfSwaps(A,n);
    cout << endl << ns;
    return 0;
}

