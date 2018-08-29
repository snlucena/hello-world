#include <iostream>
#include "BlockStream.h"
#include "StringN.h"
#include <fstream>


int main () {

struct GrupoA{ 
	String<20> equipo;
	String<1> letragrupo;
	String<10> confederacion;
};


std::ifstream in{"grupoA", };

GrupoA grupo;

for(GrupoA grupo; ReadBlock(in, grupo);)

	std::cout<< UnpackString(grupo.equipo) << UnpackString(grupo.letragrupo) << UnpackString(grupo.confederacion);

in.close();




}