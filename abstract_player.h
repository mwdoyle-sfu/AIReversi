//
// Created by Matthew Doyle on 2020-08-08.
//

#pragma once

using namespace std;

namespace abstract_player {
    class Player
    {
    public:
        virtual ~Player() { }
        virtual void input(Game& B) = 0;
    };
}