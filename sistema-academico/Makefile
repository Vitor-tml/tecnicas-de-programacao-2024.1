# Lista de arquivos de origem
SOURCES = main.cpp Principal.cpp Pessoa.cpp Universidade.cpp Departamento.cpp

# Diretório de saída para os executáveis e objetos
BIN_DIR = bin

# Nome do executável
EXECUTABLE = $(BIN_DIR)/main

# Lista de arquivos objeto
OBJECTS = $(patsubst src/%.cpp, $(BIN_DIR)/%.o, $(SOURCES))

# Comando de compilação
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Regra padrão para compilar arquivos .cpp
$(BIN_DIR)/%.o: src/%.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@

# Regra para construir o executável
$(EXECUTABLE): $(OBJECTS)
    $(CXX) $(CXXFLAGS) $^ -o $@
    
# Limpar arquivos intermediários e o executável
clean:
    rm -f $(OBJECTS) $(EXECUTABLE)
