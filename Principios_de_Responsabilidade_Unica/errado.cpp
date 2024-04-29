#include <iostream>
#include <vector>
#include <string>

class Disciplina {
private:
    std::vector<std::string> disciplinas;

public:
    // Método para cadastrar disciplinas e mostrar as disciplinas cadastradas
    void CadastrarDisciplina(const std::string& disciplina) {
        disciplinas.push_back(disciplina);

        // Mostrar as disciplinas cadastradas imprimindo no console do sistema
        std::cout << "Disciplinas cadastradas:" << std::endl;
        for (const auto& disciplina : disciplinas) {
            std::cout << disciplina << std::endl;
        }
    }
};

int main() {
    Disciplina disciplina;

    // Exemplo de uso: cadastrar e mostrar disciplinas
    disciplina.CadastrarDisciplina("Matemática");
    disciplina.CadastrarDisciplina("História");
    
    return 0;
}
