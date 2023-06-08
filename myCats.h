//
// Created by mirabelka on 07.06.23.
//
#include <SFML/Graphics.hpp>

#ifndef FIGUREDRAWER_MYCATS_H
#define FIGUREDRAWER_MYCATS_H

class myCats{
private:
    sf::RenderWindow &window;
    std::vector<sf::Texture> catsArray = createCatsArray();

public:
    explicit myCats(sf::RenderWindow& window) : window(window) {};
    static std::vector<sf::Texture> createCatsArray();


    sf::Sprite drawCats();
};

#endif //FIGUREDRAWER_MYCATS_H
