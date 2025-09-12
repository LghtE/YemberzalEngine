
#include "SFML/Graphics/RenderWindow.hpp"
#include "SFML/Window/Event.hpp"
#include "SFML/Window/Keyboard.hpp"
#include "SFML/Window/VideoMode.hpp"
#include "lib/header/LevelEditor/EditorMouse.h"
#include "lib/header/Tiles/tileMapper.h"
#include <iostream>
#include <optional>

#include "./lib/header/Game/game.h"

Game::Game()
{
    initWindow();
}

Game::~Game()
{
    delete window;
}


void Game::initWindow()
{
    width = 1280;
    height = 720;
    title = "SFML WITH CLASSES";
    vm = sf::VideoMode({width, height});
    window = new sf::RenderWindow(vm, title);
    window->setFramerateLimit(144);
}

void Game::pollEvents()
{
    while (const std::optional event = window->pollEvent()) 
    {
        if (event->is<sf::Event::Closed>())
        {
            window->close();
        }
        else if (const auto *keyPressed = event->getIf<sf::Event::KeyPressed>())
        {
            if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
            {
                window->close();
            }
        }
    }   
}

void Game::updating()
{
    pollEvents();
}

void Game::rendering(TileMapper* t, BaseCamera &cam)
{
    window->clear();

    // Draw Here // 

    window->setView(cam.returnCamView());
    window->draw(*t);

    window->display();
}

void Game::running(TileMapper *tm, BaseCamera &cam, EditorMouse &ed_mouse)
{
    while (window->isOpen())
    {

        updating();

        // cam.moveCam(sf::Vector2f{0.0f, 0.0f});


        sf::Vector2i d = ed_mouse.process(window);

        cam.moveCam(sf::Vector2f{static_cast<float>(d.x), static_cast<float>(d.y)});
        rendering(tm, cam);
    }
}

sf::Vector2f Game::returnWindowSize()
{

    return sf::Vector2f(static_cast<float>(width), static_cast<float>(height));
}