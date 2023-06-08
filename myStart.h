//
// Created by mirabelka on 06.06.23.
//
#include <SFML/Graphics.hpp>

#ifndef FIGUREDRAWER_MYSTART_H
#define FIGUREDRAWER_MYSTART_H

class myStart{
private:
    sf::RenderWindow &window;

public:
    explicit myStart(sf::RenderWindow& window) : window(window) {};

    sf::Text setStartText(sf::Font &fond, std::string textString);

    sf::RectangleShape createDrawingButton(sf::Text buttonText);

    sf::Text createDrawingButtonText(sf::Font &fond);

    sf::RectangleShape createReturnButton(sf::Text buttonText);

    sf::Text createReturnButtonText(sf::Font &fond);
};

#endif //FIGUREDRAWER_MYSTART_H
