//Autor: Ricardo Erick Torres Rosas.
//231A Team
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count, p, v, t, problems=0;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> p >> v >> t;
        if(p+v+t >= 2) problems ++;
    }
    cout << problems;
    return 0;
}