/*Handle All File Processing*/

#ifndef File_Process_H
#define File_Process_H

#include <string>
#include <queue>
#include <fstream>
#include <iostream>
#include "Items.h"

using namespace std;

class File_Process
{
private:
	string filename;
	File_Process();
public:
	File_Process(std::string i_fileName);
	queue<item> readFile();
};

#endif

