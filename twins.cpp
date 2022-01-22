//Autor: Ricardo Erick Torres Rosas.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 160A Twins
    int count, coin, total=0, sumaMonedas=0;
    vector<int> coins;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> coin;
        total += coin;
        coins.push_back(coin);
    }
    sort(coins.begin(), coins.begin() + coins.size());
    for (int i = 0; i < coins.size(); i++)
    {
        sumaMonedas += coins[coins.size() - 1 - i];
        if(total/2 < sumaMonedas){
            cout << i + 1;
            break;
        }
    }
    return 0;
}