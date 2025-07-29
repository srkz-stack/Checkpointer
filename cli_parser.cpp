//
// Created by srk on 7/28/25.
//
#include "main.h"


enum class CheckpointerCommands {
    init,
    buffer,
    commit,
    quit,
    unknown
};


CheckpointerCommands commandPass(const std::string& str) {
    if (!strcmp(str.c_str() , "init")) return CheckpointerCommands::init;
    if (!strcmp(str.c_str() , "buffer")) return CheckpointerCommands::buffer;
    if (!strcmp(str.c_str() , "commit")) return CheckpointerCommands::commit;
    if (!strcmp(str.c_str() , "quit")) return CheckpointerCommands::quit;
    return CheckpointerCommands::unknown;
}

void Checkpointer_welcome() {
    std::cout << "Welcome to Checkpointer, a GIT like version control system." << '\n';
}

void Checkpointer_init() {
    std::cout << "This is a placeholder for init functionality." << '\n';
    init_repo();
}

void Checkpointer_buffer() {
    std::cout << "This is a placeholder for buffer functionality." << '\n';
}

void Checkpointer_commit() {
    std::cout << "This is a placeholder for commit functionality." << '\n';
}


void Checkpointer_quit() {
    std::cout << "quitting Checkpointer..." << '\n';
    exit(EXIT_SUCCESS);
}

void cli_parser(int argc, char* argv[]) {
    if (argc<=1) {
        Checkpointer_welcome();
    }else if (argc >= 2) {
        switch (commandPass(argv[1])) {
            case CheckpointerCommands::init: Checkpointer_init(); break;
            case CheckpointerCommands::buffer: Checkpointer_buffer(); break;
            case CheckpointerCommands::commit: Checkpointer_commit(); break;
            case CheckpointerCommands::quit: Checkpointer_quit(); break;
            case CheckpointerCommands::unknown: std::cout << "Not A Command of Checkpointer" << '\n'; break;
            default: break;
        }
    }
}
