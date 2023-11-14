/**
 * @file Apple.hpp
 * @author Kuriioo
*/

#include <Snake/game/Game.hpp>
#include <Snake/Utils.hpp>


namespace Snake::Game
{
    class Apple
    {
    public:
        Apple();
        ~Apple();

        inline void set_position(s_v2 pos) { m_position = pos; };
        inline s_v2 get_position()         { return m_position; };
    private:
        s_v2 m_position; 
    };
};