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
    int W; // width of the building.
    int H; // height of the building.
    cin >> W >> H; cin.ignore();
    int N; // maximum number of turns before game over.
    cin >> N; cin.ignore();
    int X0;
    int Y0;
    cin >> X0 >> Y0; cin.ignore();

    int LY = 0; // lowest y position
    int LX = 0; // lowest x position
    int HY = H - 1; // highest y position
    int HX = W - 1; // highest x position

    // game loop
    while (1) {
        string bombDir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bombDir; cin.ignore();

        if (bombDir.find('U') != string::npos) {
            HY = Y0 - 1;
        } else if (bombDir.find('D') != string::npos) {
            LY = Y0 + 1;
        }

        if (bombDir.find('R') != string::npos) {
            LX = X0 + 1;
        } else if (bombDir.find('L') != string::npos) {
            HX = X0 - 1;
        }

        X0 = LX + (HX - LX) / 2;
        Y0 = LY + (HY - LY) / 2;

        // the location of the next window Batman should jump to.
        cout << X0 << " " << Y0 << endl;
    }
}