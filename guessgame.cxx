#include <iostream>
#include <string>

using namespace std;

int main() {
    // declaration of variables
    string name, level;
    int guess, answer;

//game title
    cout <<"                  " << "Guess the number game!"  <<endl << endl;
    
    //Creators
    cout << " Created by: " << "Greg Abayon"<< endl << "Arwil Araneta " << endl << "Anito Bacog" << endl<< "Anica Martinez" << endl << "John Rei Orienda" << endl << endl;
   
   // Notes
    cout << "IMPORTANT NOTES!" << endl << "I. Easy is 1-9, Medium is 10-99, Hard is 100-999!" << endl << endl<< "II. For selecting a level always start in Uppercase         (Ex. Easy not easy)"<< endl;
    cout <<"*********************************************************"<<endl << endl;
    //asking user to enter name
    cout << " What's your name? ";
    cin >> name;
    cout << endl<<  "Hello: " << name <<endl << endl;
    //asking user to select a level
    
    cout << " Please select a level (Easy, Medium, Hard): " ;
    cin >> level;

    // Set the answer based on the selected level
    if (level == "Easy") {
        answer = 5;
    } else if (level == "Medium") {
        answer = 25; 
        
    } else if (level == "Hard") {
        answer = 500; 
        
        //if user just input "easy" not "Easy" or "medium" not "Medium" and "hard" not "Hard" it will display invalid level
    } else {
        cout << "Invalid level selected!" << endl;
        return 1; 
    }

    cout << endl << "Guess the number: ";
    
    // game loop for guessing
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

    return 0;
}