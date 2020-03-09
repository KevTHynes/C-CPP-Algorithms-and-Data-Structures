# include <bits/stdc++.h>

using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int nums[100], i, n;

int main()
{

    f>>n;

    for (i=1; i<=n; ++i) {
        int x;
        f>>x;
        x=x+10;
        ++nums[x];
    }
    if (nums[1] > 0) g<<"YES, it appears";
    else g<<"NO, it's not";

    return 0;
}