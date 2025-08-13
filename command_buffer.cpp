//
// Created by srk on 8/3/25.
//
#include "command_buffer.h"
#include<fstream>

void bufferCommand::createIndexFile() {
    std::ofstream index("/.checkpointer/index.txt");
}

void bufferCommand::bufferRepo(int argc, char* argv[]) {
    for (int i = 1; i<argc; i++) {
        const char* dir = argv[i];
        struct stat sb;
        if (stat(".checkpointer", &sb) == 0) {
            if (stat(dir, &sb) == 0) {
                std::cout << "the file exist in the path" << '\n';
                createIndexFile();
            }else {
                std::cout << "the files doesn't exist in the path" << '\n';
            }
        }else {
            std::cout << "The repository is not initialized.";
        }

    }
}

