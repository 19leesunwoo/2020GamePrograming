#pragma once
#include <fstream>
#include <string>
#define DataMgr DataManager::instance()
using namespace std;
class DataManager
{
private:
	string name = "플레이어";
	int level = 37;
	int exp = 100000;
public:
	DataManager() {

	}
	static DataManager* instance() {
		static DataManager inst;
		return &inst;
	}
	int getLevel() {
		return level;
	}
};

