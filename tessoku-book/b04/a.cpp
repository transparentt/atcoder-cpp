#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    auto result = 0;
    for (int i = 0; i < n.size(); i++)
    {
        auto pow2 = pow(2.0, i);
        result += int(n.at(n.size() - i - 1) - '0') * pow2;
    }
    cout << result << endl;
}