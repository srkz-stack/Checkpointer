# Checkpointer ⚡

A simple, lightweight Version Control System (VCS) inspired by Git. This project is a personal journey to understand the inner workings of VCS tools from the ground up.

---

## 🎯 About The Project

Checkpointer aims to replicate some of the core functionalities of Git, providing a hands-on learning experience in system design, file management, and C++ development. It's built to be simple, understandable, and a fun exploration of how version control works under the hood.

---

## ✨ Current Features

As of now, the project has the basic foundation in place:

* **Command Line Interface (CLI) Parser:** The application can accept and parse initial commands from the user's terminal input.
* **Modular Code Structure:** The codebase is now refactored into a class-based, object-oriented structure. Declarations for specific commands are separated into dedicated header files (e.g., `command_init.h`), with their definitions in corresponding `.cpp` files to improve organization and maintainability.
* **Initial Directory Structure:** The core directory structure for the Checkpointer repository is being implemented within the `initCommand` class, including the creation of key subdirectories like `hooks`, `info`, `objects`, and `refs`.

---

## 🚀 Getting Started

To get a local copy up and running, follow these simple steps.

### Prerequisites

* A C++ compiler (like g++)
* `make` (optional, but recommended for building)

### Installation & Usage

1.  Clone the repository:
    ```sh
    git clone [https://github.com/srkz-stack/Checkpointer.git](https://github.com/srkz-stack/Checkpointer.git)
    ```
2.  Navigate to the project directory:
    ```sh
    cd Checkpointer
    ```
3.  Compile the source code:
    ```sh
    g++ main.cpp cli_parser.cpp command_init.cpp -o checkpointer
    ```
4.  Run the application:
    ```sh
    ./checkpointer <command>
    ```

---

## 🛠️ Development Log

### Day 1 (July 28, 2025)

* Set up the initial project structure.
* Implemented a basic CLI parser to handle user commands (`init`, `buffer`, `commit`).
* Created header files (`cli_parser.h`, `main.h`) to separate declarations from definitions, improving code organization.

### Day 5 (August 1, 2025)

* Major refactoring of the codebase into a class-based structure.
* Introduced `command_init.h` and `command_init.cpp` to handle the `init` command logic.
* Began implementing the core functionality of the `init` command, including the creation of the `.checkpointer` directory and its essential subdirectories (`hooks`, `info`, `objects`, `refs`).

---

## 🗺️ Future Goals

The next steps in the development roadmap are:

* [ ] **Complete the `init` command:** Implement the logic to fully create a new, empty Checkpointer repository (`.checkpointer` directory) with all required subdirectories.
* [ ] **`buffer` command:** Implement a staging area (similar to "git add" command) to track files before committing.
* [ ] **`commit` command:** Implement the functionality to save a snapshot of the staged files.

---

## 📄 License

Distributed under the MIT License. See `LICENSE.txt` for more information.
