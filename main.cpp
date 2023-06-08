#include <iostream>
#include "myStart.h"
#include "myCats.h"

#include <SFML/Graphics.hpp>

class Main{
private:
    sf::RenderWindow &window;
    myStart start;
    myCats cats;
    sf::Font fond;

public:
    explicit Main(sf::RenderWindow& window_, myStart start_, myCats cats_, sf::Font fond_) :
            window(window_), start(start_), cats(cats_), fond(fond_) {};

    void manageCatApp(){
        sf::Text text_clicked = start.setStartText(fond, "Here is your kitty: ");

        sf::Text buttonText = start.createReturnButtonText(fond);
        sf::RectangleShape button = start.createReturnButton(buttonText);

        sf::Sprite cat = cats.drawCats();

        while (window.isOpen()){
            sf::Event event{};
            while (window.pollEvent(event)){
                if (event.type == sf::Event::Closed){
                    window.close();
                }
                if (event.type == sf::Event::MouseButtonPressed){
                    if (event.mouseButton.button == sf::Mouse::Left){
                        sf::Vector2f mousePosition = sf::Vector2f(event.mouseButton.x, event.mouseButton.y);
                        if (buttonText.getGlobalBounds().contains(mousePosition)){
                            manageApp();
                        }
                    }
                }
            }
            window.clear();
            window.draw(text_clicked);
            window.draw(button);
            window.draw(buttonText);
            window.draw(cat);
            window.display();
        }
    }

    void manageApp(){
        sf::Text text_start = start.setStartText(fond, "Draw a kitten: ");

        sf::Text buttonText = start.createDrawingButtonText(fond);
        sf::RectangleShape button = start.createDrawingButton(buttonText);

        while (window.isOpen()){
            sf::Event event{};
            while (window.pollEvent(event)){
                if (event.type == sf::Event::Closed){
                    window.close();
                }
                if (event.type == sf::Event::MouseButtonPressed){
                    if (event.mouseButton.button == sf::Mouse::Left){
                        sf::Vector2f mousePosition = sf::Vector2f(event.mouseButton.x, event.mouseButton.y);
                        if (buttonText.getGlobalBounds().contains(mousePosition)){
                            manageCatApp();
                        }
                    }
                }
            }
            window.clear();
            window.draw(text_start);
            window.draw(button);
            window.draw(buttonText);
            window.display();
        }
    }
};

int main(){
    sf::RenderWindow window(sf::VideoMode(800, 600), "DrawTheKitty");
    sf::Font fond;
    if (!fond.loadFromFile("/home/mirabelka/Projects/DrawTheKitty/tinos.ttf")) {
        std::cout << "Error" << std::endl;
    }

    myStart start(window);
    myCats cats(window);
    Main main(window, start, cats, fond);

    main.manageApp();

    return 0;
}
