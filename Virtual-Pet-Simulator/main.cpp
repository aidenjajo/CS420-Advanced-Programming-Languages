/*
 * File: main.cpp
 * 
 * Main driver program for the Virtual Pet Simulator. Prompts user for
 * pet name and initial hunger/boredom levels, then starts the game loop.
 * 
 * Author: Aiden B Jajo
 * Institution: San Diego State University
 * Course: CS420 - Advanced Programming Languages
 * Project: Virtual Pet Simulator
 */

#include "PetSim.h"

using namespace std;

int main() {
    string petName;
    int hunger, boredom;
    
    // Welcome message
    cout << "Welcome to the Pet Simulator!" << endl;
    
    // Get pet name from user
    cout << "What would you like to name your pet?" << endl;
    getline(cin, petName);
    
    // Get initial hunger level
    cout << "How hungry is your pet? (0-100)" << endl;
    cin >> hunger;
    
    // Get initial boredom level
    cout << "How bored is your pet? (0-100)" << endl;
    cin >> boredom;
    
    // Create pet object and start game loop
    PetSim pet(petName, hunger, boredom);
    pet.Menu();
    
    return 0;
}
