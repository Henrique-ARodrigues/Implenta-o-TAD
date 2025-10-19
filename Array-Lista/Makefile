# Nome do executável
EXEC = programa

# Compilador
CXX = g++

# Flags de compilação
CXXFLAGS = -Wall -std=c++17

# Arquivos fonte
SRC = main.cpp lista.cpp

# Arquivos objeto (substitui .cpp por .o)
OBJ = $(SRC:.cpp=.o)

# Regra padrão: compilar tudo e criar o executável
all: $(EXEC)

# Como criar o executável a partir dos objetos
$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Como compilar os arquivos .cpp em .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpar arquivos objetos e executável
clean:
	rm -f $(OBJ) $(EXEC)

