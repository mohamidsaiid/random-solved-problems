#include <bits/stdc++.h>
using namespace std;

int main (void)
{
    int n, tot = 0;
    scanf("%i",&n);
    while (n--)
    {
        int x;
        while (cin >> x)
        {
            tot += x;
            if (cin.peek() == '\n') break;

        }
        printf("%i\n",tot);
        tot = 0;
    }
}
