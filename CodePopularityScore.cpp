#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t, n, k;

    cin >> t;
    vector<int> v;
    while(t>0)
    {
        string z, s;
        while (true)
        {
            cin >> z;
            s += z;
            if (cin.peek() == '\n')
                break;
        }
        n = (int)s[0] - 48;
        k = (int)s[1] - 48;
        if (pow(n, n) >= k)
        {
            v.push_back(1);
        }
        else
        {
            v.push_back(0);
        }
        t--;
    }
    for (auto& it : v) {
        if (it == 1)
        {
            cout << "Yes" << endl;
        }
        else if (it == 0)
        {
            cout << "No" << endl;
        }
    }
   
    return 0;
}
