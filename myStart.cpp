//
// Created by mirabelka on 06.06.23.
//
#include <SFML/Graphics.hpp>
#include <iostream>
#include "myStart.h"


sf::Text myStart::setStartText(sf::Font& fond, std::string textString){
    sf::Text text;
    text.setFont(fond);
    text.setString(textString);
    text.setCharacterSize(50);
    text.setFillColor(sf::Color::White);
    sf::FloatRect textBounds = text.getLocalBounds();
    text.setOrigin(textBounds.left + textBounds.width / 2,
                   textBounds.top + textBounds.height / 2);
    text.setPosition(window.getSize().x / 2, window.getSize().y / 4);

    return text;
}

sf::RectangleShape myStart::createDrawingButton(sf::Text buttonText){
    sf::RectangleShape buttonShape(sf::Vector2f(buttonText.getLocalBounds().width + 20,
                                                buttonText.getLocalBounds().height + 10));

    buttonShape.setPosition(buttonText.getPosition().x - buttonShape.getLocalBounds().width / 2,
                            buttonText.getPosition().y - buttonShape.getLocalBounds().height / 2);

    buttonShape.setFillColor(sf::Color::Black);

    return buttonShape;
}

sf::Text myStart::createDrawingButtonText(sf::Font& fond){
    sf::Text buttonText;
    buttonText.setFont(fond);
    buttonText.setString("Start drawing");
    buttonText.setCharacterSize(25);
    buttonText.setFillColor(sf::Color::Magenta);
    sf::FloatRect textBounds = buttonText.getLocalBounds();
    buttonText.setPosition((window.getSize().x - buttonText.getLocalBounds().width) / 2,
                           (window.getSize().y - buttonText.getLocalBounds().height) / 2);
    buttonText.setOrigin(textBounds.left + textBounds.width / 2, textBounds.top + textBounds.height);

    return buttonText;
}

sf::Text myStart::createReturnButtonText(sf::Font &fond) {
    sf::Text buttonText;
    buttonText.setFont(fond);
    buttonText.setString(" <- return");
    buttonText.setCharacterSize(25);
    buttonText.setFillColor(sf::Color::Magenta);
    sf::FloatRect textBounds = buttonText.getLocalBounds();
    buttonText.setPosition(20, 30);
//    buttonText.setOrigin(textBounds.left + textBounds.width / 2, textBounds.top + textBounds.height);

    return buttonText;
}

sf::RectangleShape myStart::createReturnButton(sf::Text buttonText) {
    sf::RectangleShape buttonShape(sf::Vector2f(buttonText.getLocalBounds().width + 20,
                                                buttonText.getLocalBounds().height + 10));

    buttonShape.setPosition(20, 20);

    buttonShape.setFillColor(sf::Color::Black);

    return buttonShape;
}


