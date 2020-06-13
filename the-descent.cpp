#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    while (1) {

        int highestMountain = 0;
        int mountainIndexToShootAt = 0;

        for (int i = 0; i < 8; i++) {
            int mountainH; // represents the height of one mountain.
            cin >> mountainH; cin.ignore();
            if (mountainH > highestMountain) {
                highestMountain = mountainH;
                mountainIndexToShootAt = i;
            }
        }
        
        cout << mountainIndexToShootAt << endl; // The index of the mountain to fire on.
    }
}