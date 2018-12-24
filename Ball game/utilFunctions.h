#ifndef UTIL_FUNCTIONS
#define UTIL_FUNCTIONS

//enum definitions
enum gameScreens { entrance, game, scoreboard, end }; //make enum for all the screens

//below are all the function prototypes

void selectionProcessor(gameScreens &gameState, gameScreens nextScreen, sf::RectangleShape &button, sf::RenderWindow &window, bool &justChanged, std::string filePath, int &score);
void loadTexture(sf::Texture &texture, sf::RectangleShape &rect, std::string filePath, float posX, float posY);
void loadTextureSprite(sf::Texture &texture, sf::Sprite &sprite, std::string filePath, float posX, float posY);

void moveBall(sf::View &view, sf::RenderWindow &window, sf::Sprite &sprite, float &velocityX, float &velocityY, float accelerationX, float accelerationY, float &gravity, float originalGravity, bool collide, bool &hitFloor, float decelerationX, bool &removeGravity);
void onDeath(gameScreens &gameState, std::string filePath, int score);

void sortScoreBoard(std::fstream &scoreboardFile, int *fileNums, int arrayLen, std::string filePath);
void scoreboard_init(std::string filePath, std::string &finalReturnString);

#endif