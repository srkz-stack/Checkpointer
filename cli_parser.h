//
// Created by srk on 7/28/25.
//
#include<iostream>
#include<cstring>
#include"command_init.h"

#ifndef CLI_PARSER_H_
#define CLI_PARSER_H_

void Checkpointer_welcome();
void Checkpointer_init();
void Checkpointer_buffer();
void Checkpointer_commit();
void Checkpointer_quit();
void cli_parser(int argc, char* argv[]);



class cliParser {
public:
    static void cli_Parser(int argc, char* argv[]);
private:


};


#endif //CLI_PARSER_H_
