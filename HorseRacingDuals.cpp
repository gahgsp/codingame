//
// Created by Kelvin on 27/06/2020.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N; cin.ignore();
    int horsesPower[N];
    for (int i = 0; i < N; i++) {
        int Pi;
        cin >> Pi; cin.ignore();
        horsesPower[i] = Pi;
    }

    sort(horsesPower, horsesPower + N);

    int minP = horsesPower[1] - horsesPower[0];
    for (int i = 0; i < N - 1; i++) {
        minP = min(horsesPower[i + 1] - horsesPower[i], minP);
    }

    cout << minP << endl;
}