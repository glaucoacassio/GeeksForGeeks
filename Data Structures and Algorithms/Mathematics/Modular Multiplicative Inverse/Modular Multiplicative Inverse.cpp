#include<iostream>
using namespace std;

int modInverse(int a, int m)
{
    for(int i=1; i<=m-1; i++)
        if( ( (a*i) % m ) == 1 ) 
        return i;
    
    return -1;
}

// { Driver Code Starts.

int main()
{
	int T;
	
	cin>>T;
	while(T--){
		int a,m;
		cin>>a>>m;
		cout << modInverse(a, m)<<endl;
	}
    return 0;
} 
