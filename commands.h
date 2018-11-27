#ifndef _COMMANDS_H
#define _COMMANDS_H
#include <unistd.h> 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
//for c++
#include <list>
#include <string>
#include<iostream>
//for checking file status
#include <sys/stat.h>
//for exec command
#include <unistd.h>

#define MAX_LINE_SIZE 80
#define MAX_ARG 20
#define MAX_CMD_LIST_SIZE 50 // for history command
#define ARG_ERR "Wrong number of arguments"
int ExeComp(char* lineSize);
int BgCmd(char* lineSize, void* jobs);
int ExeCmd(void* jobs, char* lineSize, char* cmdString, std::list<std::string> cmd_list);
void ExeExternal(char *args[MAX_ARG], char* cmdString);
#endif

