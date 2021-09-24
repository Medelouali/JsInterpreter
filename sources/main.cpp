#include <iostream>
#include <string>
#include "./jsClass/js.h"

using namespace std;
int main(int argc, char **argv){
	Js js=Js();
	string line, result;
	for(auto key: js.getInfo()) cout<<"| "<<key.first<<": "<<key.second<<endl;
	do{
		cout<<">> ";
		getline(cin, line);
		result=js.process(line);
		if(result!="") cout<<">> "<<js.process(line)<<endl;
	}while(1);
	return 0;
};
