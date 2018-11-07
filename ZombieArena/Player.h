#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Player
{
private:
	const float START_SPEED = 200;
	const float START_HEALTH = 100;

	// Where is the player
	Vector2f m_Position;

	// We will need a sprite
	Sprite m_Sprite;

	// And a texture
	// !!Watch this space!!
	Texture m_Texture;

	// What is the screen resolution
	Vector2f m_Resolution;

	// What size is the current arena
	IntRect m_Arena;

	// How big is each tile in the arena
	int m_TileSize;

	// Which direction is the player currently moving
	bool m_UpPressed;
	bool m_DownPressed;
	bool m_LeftPressed;
	bool m_RightPressed;

	// How much health has the player got?
	int m_Health;

	// What is the maximum health the player can have?
	int m_MaxHealth;

	// When was the player last hit?
	Time m_LastHit;

	// Speed in pixels per second
	float m_Speed;

	// All public functions will come next
public:

	Player();
	
	void spawn(IntRect arena, Vector2f resolution, int tileSize);

	// Call at the end of every game
	void resetPlayerStats();

	// Handle the player getting hit by a zombir
	bool hit(Time timeHit);

	// How long ago was the player last hit
	Time getLastHitTime();

	// Where is the player
	FloatRect getPosition();

	// Where is the center of the player
	Vector2f getCenter();

	// Which angle is the player facing
	float getRotation();

	// Send a copy of the sprite to main
	Sprite getSprite();

	// The next four function move the player
	void moveUp();

	void moveDown();

	void moveLeft();

	void moveRight();

	// Stop the player moving in a specific direction
	void stopUp();

	void stopDown();

	void stopLeft();

	void stopRight();

	// We will call this function once every frame
	void update(float elapsedTime, Vector2i mousePosition);

	// Give the player a speed boost
	void upgradeSpeed();

	// Give the player some health
	void upgradeHealth();

	// Increas the max health tha plyer can have
	void increaseHealthLevel(int amount);

	// How much health does the player currently have
	int getHealth();
};