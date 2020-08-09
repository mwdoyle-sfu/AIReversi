//
// Created by Matthew Doyle on 2020-08-08.
//

#include <iostream>
#include <vector>
#include "abstract_player.h"

using namespace std;
using namespace abstract_player;

class HumanPlayer : public abstract_player :: Player {
public:
    string player_input;
    int checkRow;
    int checkCol;

    const Tile playerTile = Tile::white;
    const Tile computerTile = Tile::black;

    void input(Game& B) {
    }

    ~HumanPlayer() { } //destructor

};// Human_Player class