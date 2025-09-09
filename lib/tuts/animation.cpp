// #include "SFML/Graphics/CircleShape.hpp"
// #include "SFML/Graphics/Color.hpp"
// #include "SFML/Graphics/ConvexShape.hpp"
// #include "SFML/Graphics/PrimitiveType.hpp"
// #include "SFML/Graphics/Rect.hpp"
// #include "SFML/Graphics/RectangleShape.hpp"
// #include "SFML/Graphics/Sprite.hpp"
// #include "SFML/Graphics/Texture.hpp"
// #include "SFML/Graphics/Vertex.hpp"
// #include "SFML/Graphics/VertexArray.hpp"
// #include "SFML/System/Angle.hpp"
// #include "SFML/System/Vector2.hpp"
// #include "SFML/Window/Context.hpp"
// #include "SFML/Window/Keyboard.hpp"
// #include "SFML/Window/Mouse.hpp"
// #include <SFML/Graphics.hpp>

// #include <algorithm>
// #include <cmath>
// #include <cstdint>

// #include <fstream>
// #include <iostream>



// enum directions {down, right, up, left};

// int main() {

//     unsigned int width = 640;
//     unsigned int height = 360;
    

    
//     sf::RenderWindow * window = new sf::RenderWindow(sf::VideoMode({width, height}), "Test");
//     window->setFramerateLimit(60);

//     sf::Texture tex;

//     if (!tex.loadFromFile("Misc/TestSprites/hitsparkFx.png"))
//     {
//         std::cerr << "Could not load file" << std::endl;
//         return -1;
//     }

//     sf::Sprite sprite(tex);

//     int texWidth = 0;
//     sprite.setTextureRect({{0,0}, {54, 50}});
//     sprite.setOrigin({sprite.getTextureRect().size.x / 2.0f, sprite.getTextureRect().size.y / 2.0f});
//     sprite.setPosition({width / 2.0f, height / 2.0f});

//     float timer = 0.0f;
//     float timerMax = 0.25f;


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


//         timer += 0.1f;
//         if (timer >= timerMax)
//         {
//             texWidth += 54;

//             if (texWidth < tex.getSize().x)
//             {
//                 sprite.setTextureRect({{texWidth,0}, {54, 50}});
//             }
//             else
//             {
//                 texWidth = 0;
//             }


//             timer = 0.0f;
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
