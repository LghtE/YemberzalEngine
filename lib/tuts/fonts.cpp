
// #include "SFML/Graphics/Font.hpp"
// #include "SFML/Graphics/PrimitiveType.hpp"
// #include "SFML/Graphics/Rect.hpp"
// #include "SFML/Graphics/RectangleShape.hpp"
// #include "SFML/Graphics/RenderWindow.hpp"
// #include "SFML/Graphics/Sprite.hpp"
// #include "SFML/Graphics/Text.hpp"
// #include "SFML/Graphics/Texture.hpp"
// #include "SFML/Graphics/Vertex.hpp"
// #include "SFML/Graphics/VertexArray.hpp"
// #include "SFML/System/Angle.hpp"
// #include "SFML/System/Clock.hpp"
// #include "SFML/System/Vector2.hpp"
// #include "SFML/Window/Context.hpp"
// #include "SFML/Window/Keyboard.hpp"
// #include "SFML/Window/Mouse.hpp"
// #include <SFML/Graphics.hpp>

// // ========================================================================= // 



// #include <algorithm>
// #include <cmath>
// #include <cstdint>

// #include <fstream>
// #include <iostream>

// #include <string>
// #include <sstream>


// enum directions {down, right, up, left};



// void PollEvent(sf::RenderWindow &window)
// {
//     while(const std::optional event = window.pollEvent())
//     {
//         if (event->is<sf::Event::Closed>())
//         {
//             window.close();
//         }
//         else if(const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
//         {
//             if(keyPressed->scancode == sf::Keyboard::Scancode::Escape)
//             {
//                 window.close();
//             }
//         }
//     }
// }

// void LoadFont(sf::Font &font, std::string str)
// {
//     if (!font.openFromFile(str))
//     {
//         std::cerr << "Could not load file" << std::endl;

//     }
// }


// int main() {

//     unsigned int width = 640;
//     unsigned int height = 360;
    

    
//     sf::RenderWindow * window = new sf::RenderWindow(sf::VideoMode({width, height}), "Test");
//     window->setFramerateLimit(60);

//     sf::Font font;
//     LoadFont(font, "Misc/Fonts/UAV-OSD-Mono.ttf");

//     sf::Text txt(font);

//     txt.setString("Time: 0.000000");
//     txt.setOrigin(txt.getGlobalBounds().size / 2.0f);
//     txt.setPosition({width / 2.0f, height / 2.0f});

//     sf::Clock clock;
//     float deltaTime = clock.restart().asSeconds();


//     while(window->isOpen())
//     {


//         PollEvent(*window);



//         deltaTime = clock.restart().asSeconds();

//         std::stringstream sStream;
//         sStream << "Time: " << deltaTime;
//         txt.setString(sStream.str());

//         // Rendering // 

//         window->clear();


//         // Drawing to the screen // 

//        window->draw(txt);

//         window->display();
//     }





//     delete window;


//     return 0;
// }
