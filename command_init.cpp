//
// Created by srk on 7/29/25.
//
#include "main.h"
int create_maindir() { // this is the function which will create the .checkpointer directory in the repo location
    const char* directoryName = ".checkpointer";
    mode_t mode = S_IRWXU | S_IRWXG | S_IRWXO;

    if (mkdir(directoryName, mode) == -1) {
        std::cout << "Fatal Error: Failed to create .checkpointer directory!" << '\n';
        return 0;
    }
    std::cout << "Successfully initialized checkpointer repo!" << '\n';
    return 1;
}


void init_repo() {
    const int creation = create_maindir();//this is the function which will create the .checkpointer directory in the repo location
    if (creation == 1) {
        std::cout << "here comes the next step" << '\n';
    }else {
        exit(EXIT_SUCCESS);
    }

}