#include <iostream>
#include <string>
#include "./jsClass/js.h"

using namespace std;
int main(int argc, char **argv){
	Js js=Js();
	string line;
	cout<<"Interpreter version: "<<js.getInfo("version")<<endl;
	do{
		cout<<">> ";
		getline(cin, line);
		cout<<">> "<<js.process(line)<<endl;
	}while(1);
	return 0;
};
