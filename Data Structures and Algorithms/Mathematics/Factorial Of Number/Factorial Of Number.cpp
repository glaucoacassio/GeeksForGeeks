#include <bits/stdc++.h>
using namespace std;

long long factorial(int);

int main() {
    int T, N;
    cin >> T; 
    while (T--) {
        cin >> N; 
        cout << factorial(N) << endl;
    }
    return 0;
}

long long factorial(int N) 
{
    //Nao existe fatorial de numero negativo
    if(N < 0) return -1;

    if(N == 0) return 1;
    else return N*factorial(N-1);
}
