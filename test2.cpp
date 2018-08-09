#include <iostream>
#include "BlockStream.h"
#include <string>

int main(){
	struct GrupoA{
		std::string equipo;
		char letragrupo;
		std::string confederacion;
		
	};
	
	constexpr auto filename{"grupoA"};

	std::ofstream out{filename, std::ios::binary};

	WriteBlock(out, GrupoA{"Uruguay", 'A', "CONMEBOL"});
	WriteBlock(out, GrupoA{"Rusia", 'A', "AFC"});
	WriteBlock(out, GrupoA{"Arabia Saudita", 'A', "AFC"});
	WriteBlock(out, GrupoA{"Egipto", 'A', "CAF"});

	out.close();
	
std::ifstream in{filename, std::ios::binary};
	
	for(GrupoA grupo; ReadBlock(in, grupo) ;)
		std::cout
				<< "Equipo: " << grupo.equipo << ", "
				<< "      Grupo:"  << grupo.letragrupo << ", "
				<< "      Confederacion: " << grupo.confederacion << ", "
				<< '\n';

	in.close();
}