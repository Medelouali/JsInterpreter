#include "engine.h"
#include "error/error.h"

using namespace std;

string engine(string& command){
	Error err= Error(command);
	if(err.error()!="") return err.error();
	return command;//for now
};
