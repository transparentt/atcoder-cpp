#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    auto contain = false;
    for (int i = a; i <= b; i++)
    {
        if (100 % i == 0)
        {
            contain = true;
        }
    }

    if (contain)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}