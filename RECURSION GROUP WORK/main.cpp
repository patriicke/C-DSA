#include <bits/stdc++.h>

using namespace std;

int count(int n)
{
    if (n == 0)
        return 0;
    int smallNumber = count(n / 10);
    return smallNumber + 1;
}

int main()
{
    cout << count(10000) << endl;

    return 0;
}