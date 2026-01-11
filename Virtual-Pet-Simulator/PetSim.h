/*
 * File: PetSim.h
 * 
 * Header file for the PetSim class - a virtual pet simulator that models
 * pet behavior through hunger and boredom mechanics. Demonstrates object-oriented
 * programming principles including encapsulation, data validation, and private
 * helper methods.
 * 
 * Author: Aiden B Jajo
 * Institution: San Diego State University
 * Course: CS420 - Advanced Programming Languages
 * Project: Virtual Pet Simulator
 */

#ifndef PETSIM_H
#define PETSIM_H

#include <iostream>
#include <string>

class PetSim {
private:
    // Pet state variables
    int hungerLevel;      // Tracks pet's hunger (0-100)
    int boredomLevel;     // Tracks pet's boredom (0-100)
    std::string name;     // Pet's name
    
    // Private helper methods
    int PetMood() const;                    // Calculates overall pet mood
    void PassTime(int time = 1);            // Simulates passage of time

public:
    // Constructor
    PetSim(std::string petName, int hunger, int boredom);
    
    // Setters with validation
    void SetHunger(int hunger);
    void SetBoredom(int boredom);
    
    // Getters
    int GetHunger() const;
    int GetBoredom() const;
    
    // Pet interaction methods
    void Talk();                            // Pet communicates its mood
    void FeedPet();                         // Reduces hunger level
    void Play(int fun = 4);                 // Reduces boredom level
    void DisplayPetBehavior();              // Shows current pet status
    void Menu();                            // Main game loop
};

#endif
