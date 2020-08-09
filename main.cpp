#include <iostream>
#include "board.h"
#include "human_player.h"
#include "computer_player.h"
//#include "human_player.h"
//#include "computer_player.h"


using namespace std;

const int width = 10;
const int height = 10;

int main() {
    bool startGame = true;
    char begin = 0;

//    cout << "\nPress enter to begin\n";
//    scanf("%c", &begin);
//    system("clear");



//    while(startGame) {

        cout << "\nGame Begins\n\n";

        Game game(width, height);
        HumanPlayer humanPlayer;
        ComputerPlayer computerPlayer;

        game.println();
//    }



    cout << "Game Over!\n" << endl;
    return 0;
}
