//Autor: Ricardo Erick Torres Rosas.
//282A Bit++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count, total=0;
    char x, y, z;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> x >> y >> z;
        if (y=='-') total--;
        else total++;
    }
    cout << total;
    return 0;
}