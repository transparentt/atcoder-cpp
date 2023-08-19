#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int result = 0;
    if (s.at(0) == '1')
    {
        result += 1;
    }

    if (s.at(1) == '1')
    {
        result += 1;
    }

    if (s.at(2) == '1')
    {
        result += 1;
    }

    cout << result << endl;
}
