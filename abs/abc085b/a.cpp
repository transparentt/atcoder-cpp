#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> vec.at(i);
    }

    sort(vec.begin(), vec.end(), greater<int>());

    int result = 0;
    int current = 101;
    for (size_t i = 0; i < n; i++)
    {
        if (vec.at(i) < current)
        {
            current = vec.at(i);
            result += 1;
        }
    }

    cout << result << endl;
}