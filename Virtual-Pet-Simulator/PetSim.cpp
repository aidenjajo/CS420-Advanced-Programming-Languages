/*
 * File: PetSim.cpp
 * 
 * Implementation file for the PetSim class. Contains all method definitions
 * for the virtual pet simulator including constructor, getters/setters,
 * interaction methods (Talk, FeedPet, Play), and the main game loop.
 * 
 * Author: Aiden B Jajo
 * Institution: San Diego State University
 * Course: CS420 - Advanced Programming Languages
 * Project: Virtual Pet Simulator
 */

#include "PetSim.h"

using namespace std;

// Constructor - initializes pet with name, hunger, and boredom levels
PetSim::PetSim(string petName, int hunger, int boredom) 
    : hungerLevel(hunger), boredomLevel(boredom), name(petName) {
    cout << "Your pet " << name << " has been created!" << endl;
    DisplayPetBehavior(); // Display initial pet state
}

// Setter for hunger level with validation (0-100 range)
void PetSim::SetHunger(int hunger) {
    hungerLevel = (hunger < 0) ? 0 : (hunger > 100) ? 100 : hunger;
}

// Getter for hunger level
int PetSim::GetHunger() const {
    return hungerLevel;
}

// Setter for boredom level with validation (0-100 range)
void PetSim::SetBoredom(int boredom) {
    boredomLevel = (boredom < 0) ? 0 : (boredom > 100 ? 100 : boredom);
}

// Getter for boredom level
int PetSim::GetBoredom() const {
    return boredomLevel;
}

// Private function to calculate pet's mood (sum of hunger and boredom)
int PetSim::PetMood() const {
    return hungerLevel + boredomLevel;
}

// Private function to simulate time passing (increases hunger and boredom)
void PetSim::PassTime(int time) {
    SetHunger(hungerLevel + time);
    SetBoredom(boredomLevel + time);
}

// Allows pet to communicate its mood based on hunger and boredom levels
void PetSim::Talk() {
    int mood = PetMood();
    cout << name << " says: ";
    
    if (mood < 7) cout << "I'm feeling good!" << endl;
    else if (mood < 16) cout << "I'm okay." << endl;
    else if (mood < 22) cout << "I'm feeling a little bored." << endl;
    
    PassTime(); // Time passes after interaction
}

// Allows player to feed the pet (reduces hunger, max 4 units)
void PetSim::FeedPet() {
    int food;
    cout << "How much food would you like to feed " << name << "? (NO MORE THAN 4)" << endl;
    cin >> food;
    
    if (food > 4) food = 4; // Enforce maximum food limit
    
    SetHunger(hungerLevel - food);
    cout << "You fed " << name << " " << food << " units of food." << endl;
    
    PassTime(); // Time passes after interaction
}

// Allows player to play with pet (reduces boredom)
void PetSim::Play(int fun) {
    SetBoredom(boredomLevel - fun);
    cout << name << " has played! Boredom level is now " << boredomLevel << "." << endl;
    
    PassTime(); // Time passes after interaction
}

// Displays pet's current state with contextual messages
void PetSim::DisplayPetBehavior() {
    cout << name << " Hunger Level: " << hungerLevel 
         << ", Boredom Level: " << boredomLevel << endl;
    
    // Check if pet is in optimal state
    if (hungerLevel < 3 && boredomLevel < 3) {
        cout << "I'm feeling extremely happy!" << endl;
    } else {
        // Display hunger status
        if (hungerLevel > 11) cout << name << " is very hungry!" << endl;
        else if (hungerLevel >= 3) cout << name << " is slightly hungry." << endl;
        
        // Display boredom status
        if (boredomLevel > 11) cout << name << " is very bored!" << endl;
        else if (boredomLevel >= 3) cout << name << " is slightly bored." << endl;
    }
}

// Main game loop - presents menu and handles player choices
void PetSim::Menu() {
    enum Choice { LISTEN = 1, FEED, PLAY, QUIT };
    int choice;
    
    do {
        // Display menu options
        cout << "\n1. Listen to your pet " << name 
             << "\n2. Feed your pet " << name 
             << "\n3. Play with your pet " << name 
             << "\n4. Quit\nEnter choice: ";
        cin >> choice;
        
        // Process player's choice
        switch (choice) {
            case LISTEN: Talk(); break;
            case FEED: FeedPet(); break;
            case PLAY: Play(); break;
            case QUIT: cout << "Goodbye!" << endl; break;
            default: cout << "Invalid choice. Please try again." << endl;
        }
        
        DisplayPetBehavior(); // Show updated pet state after each action
        
    } while (choice != QUIT);
}
