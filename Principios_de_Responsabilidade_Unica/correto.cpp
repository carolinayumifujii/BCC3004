#include <iostream>
#include <vector>
#include <string>

class Disciplina {
private:
    std::vector<std::string> disciplinas;

public:
    // Método para cadastrar disciplinas
    void CadastrarDisciplina(const std::string& disciplina) {
        disciplinas.push_back(disciplina);
    }

    // Método para obter as disciplinas cadastradas
    std::vector<std::string> ObterDisciplinas() const {
        return disciplinas; // Retorna uma cópia da lista para evitar modificação direta
    }
};

class Console {
private:
    Disciplina disciplina;

public:
    // Método para interagir com o usuário e cadastrar disciplinas
    void InteragirCadastrarDisciplina() {
        std::cout << "Digite o nome da disciplina:" << std::endl;
        std::string nomeDisciplina;
        std::cin >> nomeDisciplina;
        disciplina.CadastrarDisciplina(nomeDisciplina);
        std::cout << "Disciplina cadastrada com sucesso!" << std::endl;
    }
//Correto
    // Método para interagir com o usuário e mostrar as disciplinas cadastradas
    void InteragirMostrarDisciplinas() {
        std::vector<std::string> disciplinas = disciplina.ObterDisciplinas();
        std::cout << "Disciplinas cadastradas:" << std::endl;
        for (const auto & disciplina : disciplinas) {
            std::cout << disciplina << std::endl;
        }
    }
};

int main() {
    Console console;
  
    console.InteragirCadastrarDisciplina(); // Exemplo de interação para cadastrar uma disciplina
    console.InteragirMostrarDisciplinas(); // Exemplo de interação para mostrar as disciplinas cadastradas
    
    return 0;
}
