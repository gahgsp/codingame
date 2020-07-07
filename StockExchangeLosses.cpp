//
// Created by Kelvin on 06/07/2020.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();

    int currMax, maxLoss = 0;

    for (int i = 0; i < n; i++) {
        int v;
        cin >> v; cin.ignore();

        if (v > currMax) {
            currMax = v;
        } else {
            maxLoss = min(maxLoss, v - currMax);
        }
    }

    cout << maxLoss << endl;
}