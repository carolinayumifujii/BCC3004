# BCC3004

#Princípio da Responsabilidade Única
É o princípio que faz a aplicação direta da ideia de coesão. Propõe que toda classe deve ter uma única responsabilidade. Mais ainda, responsabilidade, no contexto do princípio, significa motivo para modificar uma classe. Ou seja, deve existir 1 único motivo para modificar qualquer classe em um sistema.
No exemplo feito em BCC3004/Principios_de_Responsabilidade_Unica/correto.cpp podemos observar na classe Disciplina e na classe Console.

Classe Disciplina:
Responsabilidade: A classe Disciplina é responsável por gerenciar a lista de disciplinas cadastradas.
Justificativa: A classe tem uma única responsabilidade: manter uma lista de disciplinas e fornecer métodos para cadastrar e obter disciplinas. Ela não se preocupa com a interação com o usuário ou com a apresentação das disciplinas.
Classe Console:
Responsabilidade: A classe Console é responsável por interagir com o usuário e gerenciar a entrada e saída do console.
Justificativa: A classe Console tem uma única responsabilidade: interagir com o usuário para cadastrar disciplinas e mostrar as disciplinas cadastradas. Ela não se preocupa com a lógica de negócios de como as disciplinas são armazenadas ou gerenciadas.
