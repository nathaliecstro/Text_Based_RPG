#include<iostream> 

using namespace std;

int main(){
    
    cout << "Welcome to Sioulgate!" << endl;
    
    string playerName;

    cout << "Please enter your name: ";
    cin >> playerName;

    cout << "Welcome " << playerName << " to Sioulgate!" << endl;
    cout << "*********************************" << endl;

    //Declare an int variable to capture the user's choice 
    int choice;

    //Declare and int variable to capture the user's nested choice
    int nestedChoice;

    //Offer the player a choice of 3 locations: 1 for Twilight Plaza, 2 for Shadow Vault, and 3 for Nova Heights
    cout << "You awaken to the hum of neon lights and the metallic tang of rain on steel." << endl;
    cout << "Towering skyscrapers loom above, their shadows hiding faces you cannot recognize." << endl;
    cout << "You do not know where you are—or how you got here—but the city feels eerily familiar." << endl;
    cout << "*********************************" << endl;

    bool exploring = true;

    while (exploring){

    cout << "Where will " << playerName << " go next?" << endl;
    cout << endl;
    cout << "1. Twilight Plaza" << endl;
    cout << "2. The Shadow Vault" << endl;
    cout << "3. Nova Heights" << endl;
    cout << "4. Exit" << endl;
    cout << endl;
    cout << "Please enter a choice: ";
    cin >> choice;

    //Check the user's choice and display the corresponding messages 
    switch(choice) {
        case 1: 
           cout << "You chose Twilight Plaza." << endl;
           break;
        case 2: 
           cout << "You chose The Shadow Vault." << endl;
           cout << "*********************************" << endl;
           cout << "You descend into the Shadow Vault, the air thick with the scent of ozone and cold metal." << endl;
           cout << "Dim, flickering lights cast eerie shadows over rows of humming machinery and cryo-chambers." << endl;
           cout << "In the corner, a figure in a lab coat turns to face you, her sharp eyes glinting behind augmented glasses." << endl;
           cout << "\"Welcome to the Vault,\" she says with a hint of sarcasm. \"I'm Dr. Ashera Voss, and you're either very brave or very foolish to have come here.\"" << endl;

           cout << "*********************************" << endl;
           cout << "1. Ask what kind of work is done here." << endl;
           cout << "2. Leave without a word." << endl;
           cout << endl;
           cout << "Please enter your choice: ";
           cin >> nestedChoice;

           break;
        case 3:
           cout << "You chose Nova Heights." << endl;
           break;
        case 4: 
          exploring = false;
          break;
        default: 
          cout << "Invalid choice." << endl;
          break;
    }
    }
    return 0;
}
