//---------------------------------------------------------
// Copyright 2015 Ontario Institute for Cancer Research
// Written by Jared Simpson (jared.simpson@oicr.on.ca)
//---------------------------------------------------------
//
// nanopolish.cpp -- main driver program
//
#include <stdio.h>
#include <string>
#include "nanopolish_consensus.h"

void print_usage()
{
    printf("usage: nanopolish [command] [options]\n");
}

int main(int argc, char** argv)
{
    if(argc <= 1) {
        printf("error: no command provided\n");
        print_usage();
        return 0;
    } else {
        std::string command(argv[1]);
        if(command == "help" || command == "--help") {
            print_usage();
            return 0;
        } else if(command == "consensus") {
            consensus_main(argc, argv);
            return 0;
        }
    }
}