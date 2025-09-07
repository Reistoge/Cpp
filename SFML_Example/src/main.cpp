#include <SFML/Graphics.hpp>

int main() {
    // Declare a render window object
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Example");

    // Declare an event object
    sf::Event event;

    // Main game loop
    while (window.isOpen()) {
        // Poll events
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Clear the window
        window.clear();

        // Display the window content
        window.display();
    }

    return 0;
}
