//
// Created by srk on 7/29/25.
//
#include<iostream>
#include"command_init.h"

int initCommand::createMaindir() { // this is the function which will create the .checkpointer directory in the repo location
    if (mkdir(mainDirectoryName, mode) == -1) {
        std::cout << "Fatal Error: Failed to create .checkpointer directory!" << '\n';
        return 0;
    }
    std::cout << "Successfully initialized checkpointer repo!" << '\n';
    createSubdir();
    return 1;
}
void initCommand::createSubdir() {
    mkdir(subDirectoryName_hooks, mode);
    mkdir(subDirectoryName_info, mode);
    mkdir(subDirectoryName_objects, mode);
    mkdir(subDirectoryName_objects_info, mode);


}
void initCommand::initRepo() {
    //this is the function which will create the .checkpointer directory in the repo location
    if (createMaindir() == 1) {
        std::cout << " " << '\n';
    }else {
        exit(EXIT_SUCCESS);
    }
}