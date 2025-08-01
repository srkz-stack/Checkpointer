#include<iostream>
#include "cli_parser.h"


int main(int argc, char *argv[]) {
    cliParser cliparser;
    cliparser.cli_Parser(argc, argv);//check cli_parser.h and cli_parser.cpp for details
    return 0;

}