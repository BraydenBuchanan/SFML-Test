#include <main.hpp>

#include <SFML/Graphics.hpp>

Audio::Audio()
{
	if (!musicPlayer.openFromFile(music))
		std::cerr << "Could not open music file: " << music << "\n";
}

void Audio::Play()
{
	musicPlayer.play();
	musicPlayer.setLoop(true);
}

int main()
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "WINDOW");
	sf::Event event;

	Audio audio;

	audio.Play();
	audio.printPath();

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == event.Closed)
				window.close();
		}

		window.clear();
		window.display();
	}
}