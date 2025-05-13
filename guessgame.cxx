#include <iostream>
#include <string>

using namespace std;

class GuessingGame {
private:
    string name, level;
    int answer;

public:
    void greetPlayer() {
        cout << "What's your name? ";
        cin >> name;
        cout << "Hello: " << name << endl << endl;
    }

    bool selectLevel() {
        cout << "Please select a level (Easy, Medium, Hard): ";
        cin >> level;

        if (level == "Easy") {
            answer = 5;
        } else if (level == "Medium") {
            answer = 25;
        } else if (level == "Hard") {
            answer = 500;
        } else {
            cout << "Invalid level selected!" << endl;
            return false;
        }
        return true;
    }

    void play() {
        int guess;
        cout << "Guess the number: ";
        while (true) {
            cin >> guess;
            if (guess < answer) {
                cout << "TRY AGAIN! HIGHER" << endl;
            } else if (guess > answer) {
                cout << "TRY AGAIN! LOWER" << endl;
            } else {
                cout << "CORRECT! The number was " << answer << "." << endl;
                break;
            }
        }
    }
};

int main() {
    cout << "Guess the number game!" << endl << endl;

    // Game notes and creators
    cout << "Created by: Greg Abayon, Arwil Araneta, Anito Bacog, Anica Martinez, John Rei Orienda" << endl;
    cout << "\nIMPORTANT NOTES:\n";
    cout << "I. Easy is 1-9, Medium is 10-99, Hard is 100-999!" << endl;
    cout << "II. For selecting a level always start in Uppercase (Ex. Easy not easy)" << endl;
    cout << "*********************************************************" << endl;

    GuessingGame game;
    game.greetPlayer();

    if (game.selectLevel()) {
        game.play();
    }

    return 0;
}
