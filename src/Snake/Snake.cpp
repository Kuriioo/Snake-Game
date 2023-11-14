/**
 * @file Snake.cpp
 * @author Kuriioo
*/

#include <Snake/Snake.hpp>
#include <Snake/renderer/RenderWindow.hpp>
#include <Snake/game/Game.hpp>
#include <Snake/game/Player.hpp>


#include <iostream>


int main (int argc, char **argv)
{
    std::printf(
        "Snake Game version %i.%i\n",
        SNAKE_GAME_VERSION_MAJOR,
        SNAKE_GAME_VERSION_MINOR
    ); 
    Snake::RenderWindow window { SNAKE_GAME_WIDTH, 
                                 SNAKE_GAME_HEIGHT, 
                                 SNAKE_GAME_TITLE };
    Snake::Game::Game game {};
    Snake::Game::Player player {};
    game.set_player(player);
    game.get_player().set_score(78);
    game.set_state(Snake::Game::GameState::NOT_STARTED); 

    return 0;
};