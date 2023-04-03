#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>
#include <ctime>
#include <unistd.h>
#include <SFML/Audio.hpp>

using namespace std;

const int width = 2048;
const int hieght = 2048;

int main()
{

    sf::Clock t4;
    sf::RenderWindow window(sf::VideoMode(width, hieght), "Battle!!!!");
    window.setFramerateLimit(60);

    bool p1Choosed = false;
    bool p2Choosed = false;

    sf::Texture *weaponTexture = new sf::Texture [6];
    sf::Sprite *Weapon = new sf::Sprite [6];

    weaponTexture[0].loadFromFile("Images/dogge.png");
    Weapon[0].setTexture(weaponTexture[0]);
    Weapon[0].setPosition(500,500);

    weaponTexture[1].loadFromFile("Images/pengiun.png");
    Weapon[1].setTexture(weaponTexture[1]);
    Weapon[1].setPosition(1000,500);

    weaponTexture[2].loadFromFile("Images/pokeball.png");
    Weapon[2].setTexture(weaponTexture[2]);
    Weapon[2].setPosition(1500,500);

    weaponTexture[3].loadFromFile("Images/grenade1.png");
    Weapon[3].setTexture(weaponTexture[3]);
    Weapon[3].setPosition(500,1000);


    weaponTexture[4].loadFromFile("Images/grenade2.png");
    Weapon[4].setTexture(weaponTexture[4]);
    Weapon[4].setPosition(1000,1000);

    weaponTexture[5].loadFromFile("Images/angry.png");
    Weapon[5].setTexture(weaponTexture[5]);
    Weapon[5].setPosition(1500,1000);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
    
    while(p1Choosed == false){
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num1)){
            p1.weapon.setTexture(weaponTexture[0]);
            p1Choosed = true;
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num2)){
            p1.weapon.setTexture(weaponTexture[1]);
            p1Choosed = true;
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num3)){
            p1.weapon.setTexture(weaponTexture[2]);
            p1Choosed = true;
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num4)){
            p1.weapon.setTexture(weaponTexture[3]);
            p1Choosed = true;
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num5)){
            p1.weapon.setTexture(weaponTexture[4]);
            p1Choosed = true;
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num6)){
            p1.weapon.setTexture(weaponTexture[5]);
            p1Choosed = true;
        }
    
        window.clear();
        for(int i = 0; i <6 i++){
           window.draw(Weapon[i]); 
        }
        window.display();
    }
    t4.restart();
    while(t4.getElapsedTime().asSeconds() <= 2.0f){
        
    }

    while(p2Choosed == false){
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num1){
            p2.weapon.setTexture(weaponTexture[0]);
            p2Choosed = true;
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::num2){
            p2.weapon.setTexture(weaponTexture[1]);
            p2Choosed = true;
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num3){
            p2.weapon.setTexture(weaponTexture[2]);
            p2Choosed = true;
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num4){
            p2.weapon.setTexture(weaponTexture[3]);
            p2Choosed = true;
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num5){
            p2.weapon.setTexture(weaponTexture[4]);
            p2Choosed = true;
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num6){
            p2.weapon.setTexture(weaponTexture[5]);
            p2Choosed = true;
        }
    
        window.clear();
        for(int i = 0; i <6 i++){
           window.draw(Weapon[i]); 
        }
        window.display();
    }
        

        
    return 0;
}

