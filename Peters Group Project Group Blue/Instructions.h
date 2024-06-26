// Name: Leo Bolaks
// Login: C00299368
// Work Done: fully set up text and positions, set up small and big apple examples,
//-----------------------------------------------------------
// Name: Elisabeth Sykorova
// Login: C00301316
// Work Done: adjusted layout, added heart example icon

#ifndef Instructions_HPP
#define Instructions_HPP

#include <SFML/Graphics.hpp>

class Instructions
{
	sf::Font m_storyFont; // font for story
	sf::Text m_storyText; // text for story
	sf::Font m_controlsFont; // font for instructions
	sf::Text m_controlsText; // text for instructions

	sf::Texture m_smallAppleExample; // set up for small apple example image
	sf::Sprite m_smallAppleExampleSprite;
	sf::Texture m_bigAppleExample; // set up for big apple example image
	sf::Sprite m_bigAppleExampleSprite;
	sf::Texture m_heartExample;
	sf::Sprite m_heartExampleSprite;

	sf::Texture m_homeButtonTexture;
	sf::Sprite m_homeButtonSprite;

public:
	Instructions();

	void loadInstructions();

	sf::Text getControlsText();
	sf::Text getStoryText();
	sf::Sprite getSmallAppleExample();
	sf::Sprite getBigAppleExample();
	sf::Sprite getHomeButton();
	sf::Sprite getHeartExample();
};
#endif