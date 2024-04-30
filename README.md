# BCC3004

## Princípio da Responsabilidade Única
É o princípio que faz a aplicação direta da ideia de coesão. Propõe que toda classe deve ter uma única responsabilidade. Mais ainda, responsabilidade, no contexto do princípio, significa motivo para modificar uma classe. Ou seja, deve existir 1 único motivo para modificar qualquer classe em um sistema.

No exemplo feito em BCC3004/Principios_de_Responsabilidade_Unica/correto.cpp podemos observar na classe Disciplina e na classe Console:

- Classe Disciplina:
Responsabilidade: A classe Disciplina é responsável por gerenciar a lista de disciplinas cadastradas.
Justificativa: A classe tem uma única responsabilidade: manter uma lista de disciplinas e fornecer métodos para cadastrar e obter disciplinas. Ela não se preocupa com a interação com o usuário ou com a apresentação das disciplinas.
- Classe Console:
Responsabilidade: A classe Console é responsável por interagir com o usuário e gerenciar a entrada e saída do console.
Justificativa: A classe Console tem uma única responsabilidade: interagir com o usuário para cadastrar disciplinas e mostrar as disciplinas cadastradas. Ela não se preocupa com a lógica de negócios de como as disciplinas são armazenadas ou gerenciadas.


## Princípio de Inversão de Dependências
"Esse princípio recomenda que uma classe cliente deve estabelecer dependências prioritariamente com abstrações e não com implementações concretas, pois abstrações (isto é, interfaces) são mais estáveis do que implementações concretas (isto é, classes). A ideia é então trocar (ou inverter) as dependências: em vez de depender de classes concretas, clientes devem depender de interfaces. Portanto, um nome mais intuitivo para o princípio seria Prefira Interfaces a Classes."

No exemplo feito em BCC3004/Princípio_de_Inversão_de_Dependências/correto.cpp vemos:

- A classe NotificationService depende de uma abstração, não de implementações concretas. Ela recebe uma referência a um objeto do tipo MessageService no construtor.
- A classe NotificationService não está diretamente ligada às classes EmailService ou SMSService. Em vez disso, ela depende de uma interface comum (MessageService) que define um contrato para todos os serviços de mensagem.
- Isso permite que a classe NotificationService seja flexível em relação às implementações concretas de MessageService. Se você quiser alterar o serviço de mensagem de email para SMS, por exemplo, você pode simplesmente fornecer uma instância de SMSService ao construir NotificationService, sem modificar o código de NotificationService em si.

Portanto, a classe NotificationService segue o Princípio de Inversão de Dependências, pois depende de abstrações em vez de implementações concretas.





