#ifndef lista_hpp
#define lista_hpp

#include <string>


class Lista {
    private:
        int quantidade;
        int capacidade;
        std::string* arr;
        const int CAPACIDADE_PADRAO = 15;

    public:
        Lista();
        Lista(int cap);
        ~Lista();

        bool add(std::string nome, int posicao);
        bool remove(std::string nome);
        bool contain(std::string nome);
        std::string obtain(int posicao);
        bool empty();
        void clear();
        int size();
        
};
#endif
