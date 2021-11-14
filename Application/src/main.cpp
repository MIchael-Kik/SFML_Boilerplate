#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "Application", sf::Style::Close | sf::Style::Titlebar | sf::Style::Resize);

    while(window.isOpen())
    {

        sf::Event evnt;

        while(window.pollEvent(evnt))
        {
            switch(evnt.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;

                case sf::Event::Resized:
                    std::cout << "Window width: " << evnt.size.width << ", Window Height: " << evnt.size.height << std::endl;
                    break;
            }


            window.clear();
            window.display();         
        }
    }

    return 0;
}