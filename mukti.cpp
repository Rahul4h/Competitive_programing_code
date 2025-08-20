#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a, b, c, d;
        long long e, f, g, h;
        cin >> n >> a >> b >> c >> d;
        if (b <= (n - a + 1))
        {
            e = a;
            f = n - a + 1;
        }
        else
        {
            e = n - b + 1;
            f = b;
        }
        if (d <= (n - c + 1))
        {
            g = c;
            h = n - c + 1;
        }
        else
        {
            g = n - d + 1;
            h = d;
        }
        cout << min({abs(e - g), abs(e - h), abs(f - g), abs(f - h)}) << endl;
    }
}

