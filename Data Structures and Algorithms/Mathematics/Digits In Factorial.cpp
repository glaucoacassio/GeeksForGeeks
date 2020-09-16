#include<bits/stdc++.h>
using namespace std;

int digitsInFactorial(int N)
{
    // fatorial de numero -x 
    // nao existe
    if (N < 0)
        return 0;

    // caso base
    if (N <= 1)
        return 1;

    // Usei a formula de Kamenetsky pra calcular
    // o numero de digitos
    double x = ((N * log10(N / M_E) + log10(2 * M_PI * N) / 2.0));
    
    return floor(x) + 1;
}

int main()
{
    int T;
    
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<digitsInFactorial(N)<<endl;
    }
    return 0;
}
