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


// sf::Color HSVToRGB(float h, float s, float v)
// {
//     float hPrime = h / 60.0f;
//     unsigned int hIndex = (unsigned int)hPrime % 6;

//     float chroma = s * v;
//     float min = (v - chroma);
//     float x = chroma - (1.0f - abs(fmod(hPrime, 2.0f) - 1.0f));

//     float outRGB[6][3] = 
//     {
//         {chroma, x, 0.0f},
//         {x, chroma, 0.0f},
//         {0.0f, chroma, x},
//         {0.0f, x, chroma},
//         {x, 0.0f, chroma},
//         {chroma, 0.0f, x}
//     };

//     float rF = (outRGB[hIndex][0] + min);
//     float gF = (outRGB[hIndex][1] + min);
//     float bF = (outRGB[hIndex][2] + min);
//     rF *= 255.0f;
//     gF *= 255.0f;
//     bF *= 255.0f;

//     std::uint8_t rI = std::uint8_t(rF);
//     std::uint8_t gI = std::uint8_t(gF);
//     std::uint8_t bI = std::uint8_t(bF);

//     return sf::Color(rI, gI, bI);

// }

// enum directions {down, right, up, left};

// int main() {

//     unsigned int width = 640;
//     unsigned int height = 360;
    

    
//     sf::RenderWindow * window = new sf::RenderWindow(sf::VideoMode({width, height}), "Test");
//     window->setFramerateLimit(60);

//     sf::CircleShape circle(20.0f);
//     circle.setOrigin(circle.getGeometricCenter());
//     circle.setFillColor(sf::Color::White);



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



//         if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
//         {
//             sf::Vector2i pos = sf::Mouse::getPosition(*window);
//             circle.setPosition(sf::Vector2f{pos});
//         }


//         // Rendering // 

//         window->clear();


//         // Drawing to the screen // 

//         window->draw(circle);
       

//         window->display();
//     }





//     delete window;


//     return 0;
// }
