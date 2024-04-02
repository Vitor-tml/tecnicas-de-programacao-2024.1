# Nome do projeto
PROJECT=sistema_academico

# Arquivos de cabeçalho
H_SOURCE=$(wildcard ./include/*.h)

# Arquivos de implementação
CPP_SOURCE=$(wildcard ./src/*.cpp)

# Arquivos de objeto
#substitui o ./src por ./bin e o .cpp por .o
OBJ=$(subst .cpp,.o,$(subst src,bin,$(CPP_SOURCE)))

# Compilador
CXX=g++

# Flags do compilador
CXX_FLAGS=-c     \
          -Wall   \
          -Wextra  \
		  -I./include/

# Cores para o echo
# Cores para o echo
BLUE_COLOR=\e[0;36m
GREEN_COLOR=\e[0;31m
PURPLE_COLOR=\e[0;33m
NC=\e[0m


# É chamado por default e pede as dependências de estrutura e do projeto
all: estruturaDoProjeto $(PROJECT)

# É chamado como dependência do all e pede como dependência a lista dentro da variável OBJ
$(PROJECT): $(OBJ)
	@echo -e '${GREEN_COLOR}Linkando o projeto!${NC}'
	$(CXX) $^ -o $@
	@echo ' '

# Regra para qualquer chamada com final .o, depende da existência do .cpp e do .h de mesmo nome
./bin/%.o: ./src/%.cpp ./include/%.h
	@echo -e '${BLUE_COLOR}Construindo binario do: $@${NC}'
	$(CXX) -o $@ $< $(CXX_FLAGS)
	@echo ' '

# Especial para o main
./bin/main.o: ./src/main.cpp $(H_SOURCE)
	@echo -e '${PURPLE_COLOR}Compilando a main${NC}'
	$(CXX) -o $@ $< $(CXX_FLAGS)
	@echo ' '

# Cacarecos
estruturaDoProjeto:
	@mkdir -p bin
	@mkdir -p src
	@mkdir -p include

# Limpa os arquivos de compilação
clean:
	rm -rf ./bin/*.o $(PROJECT) *~

# Evita que de algum bug caso tenha um all.c ou clean.c
.PHONY: all clean
