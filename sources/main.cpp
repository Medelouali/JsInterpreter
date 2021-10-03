#include <iostream>
#include <string>
#include "./js/js.h"

int main(int argc, char **argv){
	Js js=Js();
	std::string line, result;
	for(auto key: js.getInfo()) std::cout<<"| "<<key.first<<": "<<key.second<<std::endl;
	do{
		std::cout<<">> ";
		getline(std::cin, line);
		result=js.process(line);
		if(result!="") std::cout<<">> "<<js.process(line)<<std::endl;
	}while(true);
	return 0;
};
