#pragma once

#include <SFML/Audio.hpp>
#include <iostream>

class Audio
{
public:
	Audio();
	void Play();

	void printPath() const { std::cout << music << "\n"; }
private:
	std::string music = MUSIC;
	sf::Music musicPlayer;
};