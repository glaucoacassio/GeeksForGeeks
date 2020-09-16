#include<bits/stdc++.h>
using namespace std;

double termOfGP(int A,int B,int N)
{
    //Formula do termo geral de uma progressao geometrica
    //an = a1*q^n-1
    double r = ((double) B)/A; // o truque esta aqui
    return A * pow(r, N-1);
}

int main()
{
    int T; 
    cin>>T;

    for(int i=0;i<T;i++) 
    {
        int A,B;
        cin>>A>>B; 
        int N;
        cin>>N; 
        
        cout<<floor(termOfGP(A,B,N))<<endl;
    }

    return 0;
}
