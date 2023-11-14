/**
 * @file Player.hpp
 * @author Kuriioo
*/

#ifndef _SNAKE_GAME_GAME_PLAYER_HPP_
#define _SNAKE_GAME_GAME_PLAYER_HPP_

#include <Snake/game/Game.hpp>
#include <Snake/Utils.hpp>


namespace Snake::Game
{
    class Player
    {
    public:
        Player();
        ~Player();
        
        inline void set_position(s_v2 pos) { m_position = pos; };
        inline s_v2 get_position()         { return m_position; };

        inline void set_score(int score) { m_score = score; };
        inline int  get_score()          { return m_score;  };
    private:
        int m_score;
        s_v2 m_position;
    };
};

#endif