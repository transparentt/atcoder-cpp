#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 9; i >= 0; i--)
    {
        int pow2 = (1 << i);
        cout << (n / pow2) % 2;
    }
    cout << endl;
}