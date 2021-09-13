#include <iostream>
#include "../headers/classes/js.h"

int main(int argc, char **argv){
	Js js=Js();
	std::cout<<js.getInfo("version")<<std::endl;
	return 0;
};
