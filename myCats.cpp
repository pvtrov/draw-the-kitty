//
// Created by mirabelka on 07.06.23.
//

#include <SFML/Graphics.hpp>
#include <random>
#include "myCats.h"


std::vector<sf::Texture> myCats::createCatsArray() {
    std::vector<sf::Texture> catsArray;

    catsArray.push_back(sf::Texture());
    catsArray[0].loadFromFile("/home/mirabelka/Projects/DrawTheKitty/cats/cat1.png");
    catsArray.push_back(sf::Texture());
    catsArray[1].loadFromFile("/home/mirabelka/Projects/DrawTheKitty/cats/cat2.png");
    catsArray.push_back(sf::Texture());
    catsArray[2].loadFromFile("/home/mirabelka/Projects/DrawTheKitty/cats/cat3.png");
    catsArray.push_back(sf::Texture());
    catsArray[3].loadFromFile("/home/mirabelka/Projects/DrawTheKitty/cats/cat4.png");
    catsArray.push_back(sf::Texture());
    catsArray[4].loadFromFile("/home/mirabelka/Projects/DrawTheKitty/cats/cat5.png");
    catsArray.push_back(sf::Texture());
    catsArray[5].loadFromFile("/home/mirabelka/Projects/DrawTheKitty/cats/cat6.png");

    return catsArray;
}

sf::Sprite myCats::drawCats() {
    sf::Sprite catSprite;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, catsArray.size() - 1);
    int randomIndex = dis(gen);

    catSprite.setTexture(catsArray[randomIndex]);
    sf::Vector2u imageSize = catSprite.getTexture()->getSize();
    catSprite.setScale( 300.0f / imageSize.x, 300.0f / imageSize.y);
    catSprite.setPosition(300, 200);

    return catSprite;
}



