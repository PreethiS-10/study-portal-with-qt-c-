#### NUCLEOLUS

## Overview
This project is a Study Portal developed using C++ and Qt framework. It provides a role-based interface for users including students and staff (teachers) with basic authentication and user management.

## Core Classes

### User
- Base class representing a generic portal user.
- Contains private members for user ID and password.
- Provides getter methods for ID and password.

### Student (inherits from User)
- Represents a student user.
- Adds functionality to serialize student information for persistence.

### Staff (inherits from User)
- Represents a staff or teacher user.
- Currently minimal extension over User, but designed for staff-specific functionality.

### Teacher (Qt QDialog)
- Qt dialog class representing the teacher’s dashboard interface.
- Contains UI elements for file access and session control.
- Stores teacher's name and an integer identifier passed during construction.
- Provides slots for UI button click handling.

## Architecture
- Uses inheritance for user roles ensuring shared attributes with specialized behavior.
- Leverages Qt’s signal-slot mechanism to handle GUI events for the teacher interface.
- Designed to integrate with data persistence mechanisms (e.g., file serialization, databases).

## Usage
- Intended as part of a larger Qt-based portal application.
- Students and staff authenticate using their credentials.
- Teachers interact through a dedicated Qt dialog to manage files and classes.

## Extensibility
- Additional roles and functionality can be added by extending the base `User` class.
- The teacher dialog can be expanded with more UI controls and integration with backend services.
- Security improvements such as password hashing and authorization checks are recommended for production.

## Requirements
- Qt framework and development environment
- C++11 compatible compiler or higher

## Notes
- This repository contains header files defining the class interfaces.
- Implementation files (.cpp) should define the detailed behavior and UI logic.
