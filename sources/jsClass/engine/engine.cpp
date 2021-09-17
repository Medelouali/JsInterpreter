#include "engine.h"
#include "error/error.h"

using namespace std;

string engine(string& command){
	std::string err= Error(command).error();
	if(err!="") return err;
	return command;//for now
};
