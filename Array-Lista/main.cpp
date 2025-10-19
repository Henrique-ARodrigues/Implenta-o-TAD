#include "lista.hpp"
#include <iostream>


int main() {
    Lista nomes;
    // Adicionando nomes para teste
    nomes.add("Pedro", 1);
    nomes.add("Manolo", 2);
    nomes.add("Fabricia",3);
    nomes.add("João", 4);
    //Mostrando os nomes
    std::cout << "Mostrando tamanho: " << nomes.size() << std::endl;
    // Removendo um nome especifico
    // Mostrando o tamanho apos a remocao
    nomes.remove("Manolo");
    std::cout << "Mostrando tamanho depois de remover: " << nomes.size() << std::endl;
    std::cout << "Adicionando novo nome." << std::endl;
    nomes.add("Pablo", 2);
    // Verificando se o nome realmente foi removido
    std::cout << "Verificando se contem o nome 'Pablo': " << std::endl;
    std::cout << nomes.contain("Pablo") << std::endl;
    // Obtendo o nome que esta na posicao que o nome removida estava
    std::cout << "Verificando posicao 2, onde continha o nome removido." << std::endl;
    std::cout << nomes.obtain(2) << std::endl;
    // Verificando se a lista esta vazia
    std::cout << "Verificando se esta vazio: " << nomes.empty() << std::endl;
    // Esvaziando lista
    std::cout << "Esvaziando... " << std::endl;
    nomes.clear();
    // Verificando de novo
    std::cout << "Verificando se esta vazio: " << nomes.empty() << std::endl;
    // Mostrando o tamanho da lista apos a limpeza
    std::cout << "Verificando o tamanho: " << nomes.size() << std::endl;
}
