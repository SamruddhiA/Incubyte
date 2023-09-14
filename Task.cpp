// Samruddhi Alekar
// Chandrayaan 3 Lunar Craft: Galactic Space Craft Control

#include <bits/stdc++.h>
using namespace std;

class ISRO
{
private:
    int x, y, z;
    /*x for east or west location,
    y for north or south location,
    and z for distance above or below the galactic plane*/

    char direction;
    /* N North,
     S South,
    E East,
    W West,
    U Up,
    D Down
    */

public:
    ISRO(int x_start, int y_start, int z_start, char dir_start)
    {
        x = x_start;
        y = y_start;
        z = z_start;
        direction = dir_start;
    }
};