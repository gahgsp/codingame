//
// Created by Kelvin on 13/06/2020.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();

    // Variables to keep track of the Thor's current position.
    int currThorX = initialTX;
    int currThorY = initialTY;

    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();

        string direction;

        if (currThorY < lightY) {
            direction += "S";
            currThorY++;
        } else if (currThorY > lightY) {
            direction += "N";
            currThorY--;
        }

        if (currThorX < lightX) {
            direction += "E";
            currThorX++;
        } else if (currThorX > lightX) {
            direction += "W";
            currThorX--;
        }

        // A single line providing the move to be made: N NE E SE S SW W or NW
        cout << direction << endl;
    }
}