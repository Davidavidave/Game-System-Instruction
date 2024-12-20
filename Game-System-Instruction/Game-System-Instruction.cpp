

#include <iostream>
#include <string>
using namespace std;

int main() {

    int dambo_health = 80;
    int manag_health = 75;
    int gulapa_health = 60;
    int health = 100;
    const int super_damage = 15;
    const int mid_damage = 10;
    const int low_damage = 7;
    int player_damage = 10;
    int user_input;

    string name;

    cout << "What is your name?\n";
    cin >> name;
    cout << "Welcome to the game WAR " << name << "\n";
    cout << name << " Your health is " << health << "\n";

    while (true) {
        cout << "Choose monster to attack\n"
            << "1. Dambo\n"
            << "2. Manang\n"
            << "3. Gulapa\n";

        cin >> user_input;

        switch (user_input) {
        case 1:
            cout << "Dambo attacks you\n";
            health -= low_damage;
            dambo_health -= player_damage;

            

            break;
        case 2:
            cout << "Manang attacks you\n";
            health += mid_damage;
            manag_health -= player_damage;

            
            break;
        case 3:
            cout << "Gulapa attacks you\n";
            health -= super_damage;
            gulapa_health -= player_damage;

            
            break;
        }

        if (health < 0) {
            health = 0;
        }
        cout << "your health is " << health << "\n";

        if (health <= 0) {
            health = 100;
            string answer;
            cout << "You lose, Will you play again?y/n \n";
            cin >> answer;
            if (answer[0] == 'n') {
                break;
            }
        }
    }
}



