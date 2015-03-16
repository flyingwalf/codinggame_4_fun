#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int LX; // the X position of the light of power
    int LY; // the Y position of the light of power
    int TX; // Thor's starting X position
    int TY; // Thor's starting Y position
    scanf("%d%d%d%d", &LX, &LY, &TX, &TY);

    // game loop
    while (1) {
        int E; // The level of Thor's remaining energy, representing the number of moves he can still make.
        scanf("%d", &E);

        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        char dir[3];
        if(LX == TX)
        {
          dir[0] = (LY > TY) ? 'S': 'N'; //Since game is NOT over, LY should NOT be equal to TY at this point.
          TY += (LY > TY) ? 1:(-1);
          dir[1] = '\0';
        }
        else if(LY == TY)
        {
          dir[0] = (LX > TX) ? 'E': 'W'; //Since game is NOT over, LX should NOT be equal to TX at this point.
          TX += (LX > TX) ? 1:(-1);
          dir[1] = '\0';
        }
        else
        {
          dir[0] = (LY > TY) ? 'S': 'N';
          dir[1] = (LX > TX) ? 'E': 'W';
          dir[2] = '\0';
          TX += (LX > TX) ? 1:(-1);
          TY += (LY > TY) ? 1:(-1);
        }

        printf("%s\n", dir); // A single line providing the move to be made: N NE E SE S SW W or NW
    }
}
