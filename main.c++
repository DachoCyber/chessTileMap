#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

int main() {

    RenderWindow window(VideoMode(400, 400), "chess");
    Texture texture;
    if(!texture.loadFromFile("download.jpeg")) {
        throw runtime_error("Can not open the chess image file!");
    }
    Sprite sprite;
    sprite.setTexture(texture);
    while(window.isOpen()) {
        Event event;
        while(window.pollEvent(event)) {
            if(event.type == Event :: Closed) {
                window.close();
            }

            window.clear(Color :: White);
            window.draw(sprite);
            window.display();
        }
    }

    return 0;
}
