# Jarvis is a Mini shell with AI.
Jarvis CLI Assistant

Jarvis is a simple command-line assistant written in C. It supports a few built-in commands and keeps track of your command history. This is a lightweight starter project to practice C, Makefiles, and building modular programs.

Features

Command-line interface that accepts user input.

Built-in commands:

help → show available commands

exit → quit the program

history → print previously entered commands

History system implemented in history.c.

Easy to extend with more commands in the future.

Project Structure
.
├── include/
│   └── history.h      # header for history functions
├── src/
│   ├── main.c         # main CLI loop
│   └── history.c      # command history implementation
├── bin/
│   └── jarvis         # compiled binary (after build)
├── Makefile           # build automation
└── README.md          # project documentation

Build Instructions

Make sure you have gcc installed. Then:

make


This will produce the executable in bin/jarvis.

Run Jarvis
./bin/jarvis

Example Usage
Jarvis CLI — type 'help' to see commands
> help
Available commands:
  help     - Show this message
  history  - Show command history
  exit     - Quit Jarvis
> echo hello world
Command not recognized: echo hello world
> history
1: help
2: echo hello world
> exit
Goodbye!

Extend the Project

You can add new commands inside main.c. Example:

else if (strcmp(input, "greet") == 0) {
    printf("Hello, Human!\n");
}


Then recompile with make.

License

MIT License — free to use, modify, and share.