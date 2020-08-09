//
// Created by Matthew Doyle on 2020-07-27.
//

#include <iostream>
#include <vector>
#include <cassert>
#include <cstdlib>

using namespace std;

enum class Tile : char
{
    wall='#', black='B', white='W', blank='.'
};

class Game {
public:
    // 2d vector
    vector<vector<Tile>> board;

    // constructor
    Game(int w, int h) : board(h)
    {
        // add blank tiles
        for (int i = 0; i < board.size(); ++i) {
            board[i] = vector<Tile>(w, Tile::blank);
        }

        // add border
        for(int i = 0; i < w; ++i) board[0][i] = Tile::wall;   // top
        for(int i = 0; i < w; ++i) board[h - 1][i] = Tile::wall; // bottom
        for(int i = 0; i < h; ++i) board[i][0] = Tile::wall;   // left
        for(int i = 0; i < h; ++i) board[i][w - 1] = Tile::wall; // right

        // add players
        board[4][4] = Tile::white;
        board[4][5] = Tile::black;
        board[5][4] = Tile::black;
        board[5][5] = Tile::white;
    }

    // getters
    int width() const {return board[0].size();}
    int height() const {return board[0].size();}

    // setters
    void set(int r, int c, const Tile &t) {
        board[r][c] = t;
    }

    // print
    void print() const {
        for (int i = 0; i < height(); ++i) {
            for (int j = 0; j < width(); ++j) {
                cout << char(board[i][j]) << " ";
            }
            if(i == 0 || i == 9 ) {
                cout << " ";
            } else {
                char letters = 96 + i;
                cout << letters;
            }
            cout << "\n";
        }
    }

    void println() const {
        // print the numbers at top
        for(int i = 0; i < width()-1; i++) {
            if(i == 0) {
                cout << "  ";
            } else {
                cout << i << " ";
            }
        }
        cout << "\n";
        print();
        cout << "\n";
    }
};
