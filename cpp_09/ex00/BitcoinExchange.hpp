#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <cstring>
#include <algorithm>
std::map<std::string, float> initDatabase(void);
void findAppropriateValue(std::map<std::string, float> Database, std::string file);