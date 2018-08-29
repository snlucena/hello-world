#include <iostream>
#include "BlockStream.h"
#include "StringN.h"
#include <fstream>


int main(){
	struct GrupoA{
		String<14> equipo;
		String<1> letragrupo;
		String<10> confederacion;
		
	};
	
	constexpr auto filename{"grupoA"};

	std::ofstream out{filename, };

	WriteBlock(out, GrupoA{PackString("Uruguay - "), PackString("A"), PackString(" - CONMEBOL\n")});
	//WriteBlock(out, GrupoA{PackString("Rusia - "), PackString("A"), PackString(" - AFC\n")});
	//WriteBlock(out, GrupoA{PackString("Arabia Saudita - "), PackString("A"), PackString(" - AFC\n")});
	//WriteBlock(out, GrupoA{PackString("Egipto - "), PackString("A"), PackString(" - CAF\n")});

	out.close();
	
//std::ifstream in{filename, std::ios::binary};
	
//for(GrupoA grupo; ReadBlock(in, grupo) ;)
//		std::cout
//				<< "Equipo: " << grupo.equipo << ", "
//				<< "      Grupo:"  << grupo.letragrupo << ", "
//				<< "      Confederacion: " << grupo.confederacion << ", "
//				<< '\n';
//	in.close();
}