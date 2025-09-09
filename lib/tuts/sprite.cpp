// #include "SFML/Graphics/Color.hpp"
// #include "SFML/Graphics/ConvexShape.hpp"
// #include "SFML/Graphics/Rect.hpp"
// #include "SFML/Graphics/RectangleShape.hpp"
// #include "SFML/Graphics/Sprite.hpp"
// #include "SFML/Graphics/Texture.hpp"
// #include "SFML/System/Angle.hpp"
// #include "SFML/Window/Context.hpp"
// #include "SFML/Window/Keyboard.hpp"
// #include <SFML/Graphics.hpp>
// #include <iostream>


// enum directions {down, right, up, left};
// int main() {

//     unsigned int width = 640;
//     unsigned int height = 360;
    

    
//     sf::RenderWindow * window = new sf::RenderWindow(sf::VideoMode({width, height}), "Test");
//     window->setFramerateLimit(60);

//     sf::Texture texture;

//     if(!texture.loadFromFile("Misc/TestSprites/Test-Fos-Turnaround.png"))
//     {
//         std::cerr << "ERROR::COULD NOT LOAD FILE" << std::endl;
//         return -1;
//     }

//     sf::Sprite sprite(texture);

//     sf::IntRect dir[4];

//     for(int i =0; i<4; i++)
//     {
//         dir[i] = sf::IntRect({ {37 * i, 0}, {37, 67} });
//     }

//     sprite.setTextureRect(dir[down]);
//     sprite.setOrigin({37.0f/2.0f, 67.0f / 2.0f});
//     sprite.setPosition({width / 2.0f, height / 2.0f});
//     sprite.setColor(sf::Color::Red);

//     while(window->isOpen())
//     {
//         while(const std::optional event = window->pollEvent())
//         {
//             if (event->is<sf::Event::Closed>())
//             {
//                 window->close();
//             }
//             else if(const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
//             {
//                 if(keyPressed->scancode == sf::Keyboard::Scancode::Escape)
//                 {
//                     window->close();
//                 }
//             }
//         }


//         if(sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::S))
//         {
//             sprite.move({0.0f, 1.0f});
//             sprite.setTextureRect(dir[down]);

//         }
//         else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::W))
//         {
//             sprite.move({0.0f, -1.0f});
//             sprite.setTextureRect(dir[up]);
//         }
//         else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::D))
//         {
//             sprite.move({1.0f, 0.0f});
//             sprite.setTextureRect(dir[right]);
//         }
//         else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::A))
//         {
//             sprite.move({-1.0f, 0.0f});
//             sprite.setTextureRect(dir[left]);
//         }
        
//         // Rendering // 

//         window->clear();


//         // Drawing to the screen // 
//         window->draw(sprite);



//         window->display();
//     }





//     delete window;


//     return 0;
// }
