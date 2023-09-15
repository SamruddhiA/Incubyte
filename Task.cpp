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

    // Function for forward movement
    void fwd_move()
    {
        if (direction == 'N')
            y++;
        else if (direction == 'S')
            y--;
        else if (direction == 'E')
            x++;
        else if (direction == 'W')
            x--;
        else if (direction == 'U')
            z++;
        else if (direction == 'D')
            z--;
    }

    // Function for backward movement
    void backwd_move()
    {
        if (direction == 'N')
            y--;
        else if (direction == 'S')
            y++;
        else if (direction == 'E')
            x--;
        else if (direction == 'W')
            x++;
        else if (direction == 'U')
            z--;
        else if (direction == 'D')
            z++;
    }

    // Function for turning right
    void right_turn()
    {
        if (direction == 'N')
            direction = 'E';
        else if (direction == 'S')
            direction = 'W';
        else if (direction == 'E')
            direction = 'S';
        else if (direction == 'W')
            direction = 'N';
    }

    // Function for turning left
    void left_turn()
    {
        if (direction == 'N')
            direction = 'W';
        else if (direction == 'S')
            direction = 'E';
        else if (direction == 'E')
            direction = 'N';
        else if (direction == 'W')
            direction = 'S';
    }

    // Function for moving down
    void down()
    {
        if (direction == 'N' || direction == 'S')
            direction = 'D';
        else if (direction == 'U')
            direction = 'S';
        else if (direction == 'D')
            direction = 'N';
    }

    // Function for moving up
    void up()
    {
        if (direction == 'N' || direction == 'S')
            direction = 'U';
        else if (direction == 'U')
            direction = 'N';
        else if (direction == 'D')
            direction = 'S';
    }

    // Execution function
    void execute(const vector<char> &cmds)
    {
        for (char command : cmds)
        {
            if (command == 'f')
                fwd_move();
            else if (command == 'b')
                backwd_move();
            else if (command == 'l')
                left_turn();
            else if (command == 'r')
                right_turn();
            else if (command == 'u')
                up();
            else if (command == 'd')
                down();
        }
    }
};