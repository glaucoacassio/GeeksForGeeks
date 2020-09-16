#include <bits/stdc++.h>
using namespace std;

int multiplicationUnderModulo(long long a,long long b)
{
    int M=1000000007, ans;
    //(a * b) % m = ((a % m) * (b % m))% m -> Propriedade distributiva de modulo
    ans = ((a % M) * (b % M))% M;
    
    return ans;
}

int main() {
	int T;
	
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
		  cout<<multiplicationUnderModulo(a,b)<<endl;
	}
	return 0;
}  
