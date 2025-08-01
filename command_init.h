//
// Created by srk on 8/1/25.
//

#ifndef COMMAND_INIT_H
#define COMMAND_INIT_H

#include<sys/stat.h>

class initCommand {
public:
    void initRepo();
    int createMaindir();
    void createSubdir();

private:
    const char* mainDirectoryName = ".checkpointer";
    const char* subDirectoryName_hooks = "hooks";
    const char* subDirectoryName_info = "info";
    const char* subDirectoryName_objects = "objects";
    const char* subDirectoryName_objects_info = "objects/info/";
    const char* subDirectoryName_objects_pack = "objects/pack";
    const char* subDirectoryName_refs = "refs";
    const char* subDirectoryName_refs_heads = "refs/heads/";
    const char* subDirectoryName_refs_tags = "refs/tags/";
    mode_t mode = S_IRWXG | S_IRWXU | S_IRWXO;

};

#endif //COMMAND_INIT_H
