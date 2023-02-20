// Taking Mod with prime no.
#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
int main()
{
    int N = 51;
    long long factorial = 1;
    for (int i = 2; i <= N; i++)
    {
        factorial = ((factorial) % M * (i) % M) % M;
    }
    cout << factorial << "\n";
}