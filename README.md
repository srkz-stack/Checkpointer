# Checkpointer ⚡

A simple, lightweight Version Control System (VCS) inspired by Git. This project is a personal journey to understand the inner workings of VCS tools from the ground up.

---

## 🎯 About The Project

Checkpointer aims to replicate some of the core functionalities of Git, providing a hands-on learning experience in system design, file management, and C++ development. It's built to be simple, understandable, and a fun exploration of how version control works under the hood.

---

## ✨ Current Features

As of now, the project has the basic foundation in place:

* **Command Line Interface (CLI) Parser:** The application can accept and parse initial commands from the user's terminal input.
* **Modular Code Structure:** Declarations are separated into header files (`cli_parser.h`, `main.h`) to improve organization and maintainability.

---

## 🚀 Getting Started

To get a local copy up and running, follow these simple steps.

### Prerequisites

* A C++ compiler (like g++)
* `make` (optional, but recommended for building)

### Installation & Usage

1.  Clone the repository:
    ```sh
    git clone [https://github.com/your_username/Checkpointer.git](https://github.com/your_username/Checkpointer.git)
    ```
2.  Navigate to the project directory:
    ```sh
    cd Checkpointer
    ```
3.  Compile the source code:
    ```sh
    g++ main.cpp cli_parser.cpp -o checkpointer
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

---

## 🗺️ Future Goals

The next steps in the development roadmap are:

* [ ] **`init` command:** Implement the logic to create a new, empty Checkpointer repository (`.checkpointer` directory).
* [ ] **`buffer` command:** Implement a staging area (similar to "git add" command) to track files before committing.
* [ ] **`commit` command:** Implement the functionality to save a snapshot of the staged files.

---

## 📄 License

Distributed under the MIT License. See `LICENSE.txt` for more information.
