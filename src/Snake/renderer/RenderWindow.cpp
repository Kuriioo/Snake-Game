/**
 * @file RenderWindow.cpp
 * @author Kuriioo
*/

#include <Snake/renderer/RenderWindow.hpp>


#include <string>


namespace Snake
{
    RenderWindow::RenderWindow(const int width, const int height, const std::string title)
        : m_width(width), m_height(height), m_title(title) {};

    RenderWindow::~RenderWindow() {};
};