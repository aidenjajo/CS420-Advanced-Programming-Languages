# Virtual Pet Simulator
*Object-Oriented Programming Project from CS420 - Advanced Programming Languages*

## Overview
This project implements an interactive virtual pet simulator using object-oriented programming principles in C++. Players take on the responsibility of caring for a virtual pet by managing its hunger and boredom levels through feeding, playing, and monitoring mood changes over time.

## Scenario
The player is placed in charge of a virtual pet that requires constant care and attention. The pet's happiness is determined by two key factors: hunger and boredom. Players must balance feeding and entertaining their pet to maintain its good mood. As time passes, the pet's needs increase, requiring active engagement to keep it content.

## Topics Covered

### Object-Oriented Programming
- Class design with private and public members
- Encapsulation through getter and setter methods
- Member initializer lists for efficient construction
- Private helper methods for internal logic

### Data Validation
- Input validation using ternary operators
- Boundary enforcement (0-100 range for hunger/boredom)
- Safe state management through controlled access

### Game Mechanics
- State-based behavior (mood changes based on levels)
- Time simulation (passage of time increases needs)
- User interaction through menu-driven interface
- Dynamic feedback based on pet state

## Technologies Used
- C++
- Standard Library (iostream, string)
- Object-Oriented Design

## Files
- `PetSim.h` - Class declaration and interface
- `PetSim.cpp` - Class method implementations  
- `main.cpp` - Driver program and user interface

## Key Concepts
- Encapsulation of data and behavior
- Public interface design with private implementation
- Default parameter values for flexible method calls
- Enumerations for improved code readability
- Separation of interface (.h) and implementation (.cpp)

## Skills Demonstrated
- Designing classes with proper encapsulation
- Implementing data validation in setters
- Creating interactive menu-driven applications
- Managing object state across method calls
- Writing modular, maintainable C++ code

## How to Compile and Run
```bash
# Compile all files together
g++ -o petsim main.cpp PetSim.cpp -std=c++11

# Run the program
./petsim
```

## Usage Example
```
Welcome to the Pet Simulator!
What would you like to name your pet?
Buddy
How hungry is your pet? (0-100)
5
How bored is your pet? (0-100)
5

Your pet Buddy has been created!
Buddy Hunger Level: 5, Boredom Level: 5
Buddy is slightly hungry.
Buddy is slightly bored.

1. Listen to your pet Buddy
2. Feed your pet Buddy
3. Play with your pet Buddy
4. Quit
Enter choice:
```

## Course Information
**Course**: CS420 - Advanced Programming Languages  
**Institution**: San Diego State University  
**Author**: Aiden B Jajo
