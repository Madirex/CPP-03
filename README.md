# C++ Module 03: Inheritance

This repository contains the solutions for Module 03 of the C++ curriculum. This module introduces one of the core pillars of Object-Oriented Programming: inheritance. The exercises explore how to create new classes based on existing ones, promoting code reuse and establishing class hierarchies.

---

## Core Concepts Covered

This module explores the following key topics:

-   **Inheritance**: Creating derived (child) classes that inherit members from a base (parent) class.
-   **Construction/Destruction Chaining**: Understanding the order in which base and derived class constructors and destructors are called.
-   **Access Specifiers**: How `public`, `protected`, and `private` inheritance affect the visibility of base class members.
-   **Function Overriding**: Redefining base class member functions in a derived class to provide specialized behavior.
-   **Multiple Inheritance**: Creating a class that inherits from more than one base class.
-   **The Diamond Problem & Virtual Inheritance**: Solving the ambiguity that arises from multiple inheritance paths by using `virtual` inheritance to ensure a single instance of a common base class.

---

## Exercise Breakdown

### `ex00: Aaaaand... OPEN!`
-   **Goal**: To implement a base class, `ClapTrap`, which will serve as the parent for other classes in the module. This exercise focuses on creating a well-defined class with its own attributes and member functions.

### `ex01: Serena, my love!`
-   **Goal**: To implement single inheritance by creating a `ScavTrap` class that derives from `ClapTrap`. This demonstrates how a derived class can inherit functionality while also having its own unique attributes and abilities.

### `ex02: Repetitive work`
-   **Goal**: To further practice single inheritance by creating another derived class, `FragTrap`. This reinforces the concepts of constructor chaining and specializing behavior in a derived class.

### `ex03: Now it’s weird!`
-   **Goal**: To tackle the complexities of multiple and virtual inheritance. A `DiamondTrap` class is created by inheriting from both `ScavTrap` and `FragTrap`, which requires solving the "Diamond Problem" to avoid ambiguity and ensure proper construction.

---

## How to Compile and Run

Each exercise is contained in its own directory (`ex00`, `ex01`, etc.) and includes a `Makefile`.

1.  **Navigate to an exercise directory**:
    ```bash
    cd ex00
    ```

2.  **Compile the project**:
    ```bash
    make
    ```

3.  **Run the executable**:
    The executable name is specified in the `Makefile` for each exercise.
    ```bash
    ./a.out
    ```

4.  **Clean up**:
    -   `make clean`: Removes the intermediate object files (`.o`).
    -   `make fclean`: Removes object files and the final executable.
    -   `make re`: Cleans and rebuilds the project.

All projects are compiled using `c++` with the flags `-Wall -Wextra -Werror -std=c++98`.
