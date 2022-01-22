//Autor: Ricardo Erick Torres Rosas.
//158A Next Round
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count, score, participantScore;
    vector<int> participantsScore;
    cin >> count >> score;
    for (int i = 0; i < count; i++)
    {
        cin >> participantScore;
        participantsScore.push_back(participantScore);
    }
    count = 0;
    for (int i = 0; i < participantsScore.size(); i++)
    {
        if(participantsScore[i] >= participantsScore[score-1] && participantsScore[i] > 0) count ++;
    }
    cout << count;
    return 0;
}