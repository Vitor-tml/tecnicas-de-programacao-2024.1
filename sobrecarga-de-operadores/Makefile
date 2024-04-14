all: exe

main: operadores 
	@echo "Compilando main:" 
	g++ main.cpp ga.o -o operadores

operadores: ga.h ga.cpp
	@echo "Compilando operadores:" 
	g++ -c ga.cpp -o ga.o

exe: main
	@echo "Rodando progama:" 
	@echo " " 
	./operadores