#include<bits/stdc++.h>
using namespace std;

double cToF(int C)
{
    double fahrenheit = (C*9.0)/5.0 + 32;
    return fahrenheit;
}

int main()
{
    int T;//number of testcases
    int C,F;
    cin >> T; 
    while(T--){
        cin >> C;
        cout << floor(cToF(C)) << endl; 
    }
    return 0;
} 
