/**
 * @file Game.hpp
 * @author Kuriioo
*/

#ifndef _SNAKE_GAME_GAME_HPP_
#define _SNAKE_GAME_GAME_HPP_

#include <Snake/game/Player.hpp>
#include <Snake/game/Apple.hpp>


namespace Snake::Game
{
    enum class GameState
    {
        PLAYING,
        PAUSED,
        NOT_STARTED
    };

    class Game
    {
    public:
        Game();
        ~Game();

        inline void   set_player(Player player) { m_player = player; };
        inline Player get_player() { return m_player; };

        inline void      set_state(GameState state) { m_state = state; };
        inline GameState get_state() { return m_state; };
    private:
        Player m_player;
        GameState m_state;
    };    
};


#endif