//
// Created by Matthew Doyle on 2020-08-08.
//

//#ifndef AIREVERSI_COMPUTER_PLAYER_H
//#define AIREVERSI_COMPUTER_PLAYER_H

#include <iostream>
#include <vector>
#include "abstract_player.h"

using namespace std;
using namespace abstract_player;

class ComputerPlayer : public abstract_player :: Player {
public:
    string player_input;
    int checkRow;
    int checkCol;

    const Tile playerTile = Tile::white;
    const Tile computerTile = Tile::black;

    void input(Game& B) {
    }

    ~ComputerPlayer() { } //destructor

};// Human_Player class

//#endif //AIREVERSI_COMPUTER_PLAYER_H
