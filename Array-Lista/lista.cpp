#include "lista.hpp"
#include "iostream"

// Constructor padrao
Lista::Lista() {
    capacidade = CAPACIDADE_PADRAO; //Inicia com capacidade = 15 
    arr = new std::string[capacidade];// aloca espaço para guardar os nomes
    quantidade = 0;

}

// Constructor personalizavel
Lista::Lista(int cap) {
    capacidade = cap; //possibilidade de escolher a quantidade de nomes
    arr = new std::string[capacidade];
    quantidade = 0;

}

// Destructor
Lista::~Lista() {
    delete[] arr; // Libera memoria alocada

}

bool Lista::add(std::string nome, int posicao) {
    // Verifica se posicao e invalida ou se esta cheia
    if(quantidade >= capacidade || posicao < 1 || posicao > quantidade + 1) {
        return false;
    }
    //Move elementos para direita
    for(int i = quantidade; i >= posicao; i--) {
        arr[i] = arr[i - 1];

    }
    // Insere nome
    arr[posicao - 1] = nome;
    // Atualiza contador
    quantidade++;


    return true;

}

bool Lista::remove(std::string nome) {
    for( int i = 0; i < quantidade; i++) {
        //Procura nome
        if(arr[i] == nome) {
            for(int j = i; j < quantidade - 1; j++) {
                // Se achou, remove, deslocando para esquerda
                arr[j] = arr[j + 1];

            }

        }
        quantidade--;
        
        return true;
    }

    return false;
}

bool Lista::contain(std::string nome) {
    // Verifica nome na lista
    for(int i = 0; i < quantidade; i++) {
        if(arr[i] == nome) {
            return true;
        }
    }
    return false;
}

std::string Lista::obtain(int posicao) {
    // Recebe posicao
    if(posicao < 1 || posicao > quantidade){
        // Se posicao invalida, retorna ""
        return "";
    }
    // Retorna nome
    return arr[posicao - 1];
}

bool Lista::empty() {
    //Se tiver vazia, retorna verdadeiro
    return quantidade == 0;
}

void Lista::clear() {
    // Quantidade = 0, se for adicionado mais, ele reescreve em cima
    quantidade = 0;
}

int Lista::size() {
    //Retorna a quantidade de nomes na lista
    return quantidade;
}
