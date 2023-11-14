/**
 * @file RenderWindow.hpp
 * @author Kuriioo
*/

#ifndef _SNAKE_RENDER_WINDOW_HPP_
#define _SNAKE_RENDER_WINDOW_HPP_


#define SNAKE_GAME_WIDTH    1280
#define SNAKE_GAME_HEIGHT   800
#define SNAKE_GAME_TITLE    "Snake Game by Kuriioo"


#include <string>


namespace Snake
{
    class RenderWindow
    {
    public:
        RenderWindow(const int width, const int height, std::string title);
        ~RenderWindow();

        inline int         get_width()  { return m_width;  };
        inline int         get_height() { return m_height; }; 
        inline std::string get_title()  { return m_title; };
    private:
        int m_width;
        int m_height;
        std::string m_title;
    };
};


#endif