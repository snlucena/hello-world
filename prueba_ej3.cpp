#include <iostream>
#include "BlockStream.h"
#include <string>
#include <fstream>


int main () {

struct GrupoA{ 
	std::string equipo;
	char letragrupo;
	std::string confederacion;
};

//constexpr auto filename{"grupoA"};

std::ifstream in{"grupoA", std::ios::binary};

GrupoA grupo;

for(GrupoA grupo; ReadBlock(in, grupo);)

	std::cout<< grupo.equipo;
	std::cout<< grupo.letragrupo;
	std::cout<< grupo.confederacion;

in.close();


//for(GrupoA grupo, ReadBlock(in, grupo); )
	//	std::cout<< grupo; 


}