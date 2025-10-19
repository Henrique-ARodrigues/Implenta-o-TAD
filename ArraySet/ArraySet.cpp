//
//  ArraySet.cpp
//  ArraySet
//
//

#include "Set.hpp"
#include <iostream>

// Construtor padrão
Set::Set() {
    this->capacity = CAPACITY_DEFAULT;
    this->array = new std::string[this->capacity];
    this->quantity = 0;
    this->insertPosition = 0;
}

// Construtor com capacidade inicial
Set::Set(int initialCapacity) {
    this->capacity = initialCapacity;
    this->array = new std::string[this->capacity];
    this->quantity = 0;
    this->insertPosition = 0;
}

// Destrutor
Set::~Set() {
    delete[] array;
}

// Adiciona uma string, se ainda não existir
bool Set::add(std::string s) {
    if (contains(s)) {
        std::cout << "Elemento '" << s << "' já existe\n";
        return false;
    }

    if (quantity == capacity) {
        std::cout << "Capacidade cheia\n";
        return false;
    }

    array[insertPosition++] = s;
    quantity++;
    std::cout << "Adicionado: " << s << "\n";
    return true;
}


// Verifica se o conjunto contém uma string
bool Set::contains(std::string s) {
    for (int i = 0; i < quantity; ++i) {
        if (array[i] == s) {
            return true;
        }
    }
    return false;
}

// Remove string se existir
bool Set::remove(std::string s) {
    for (int i = 0; i < quantity; ++i) {
        if (array[i] == s) {
            // Mover os elementos depois uma posição à esquerda
            for (int j = i; j < quantity - 1; ++j) {
                array[j] = array[j + 1];
            }

            quantity--;
            insertPosition--;
            return true;
        }
    }
    return false;
}

// Limpa o conjunto
void Set::clear() {
    quantity = 0;
    insertPosition = 0;
}

// Retorna o tamanho atual
int Set::size() {
    return quantity;
}

// Retorna se o conjunto está vazio
bool Set::isEmpty() {
    return quantity == 0;
}