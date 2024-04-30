#include <iostream>
#include <string>
#include <vector>

class Produto {
private:
    std::string nome;
public:
    Produto(const std::string& nome) : nome(nome) {}
    const std::string& getNome() const {
        return nome;
    }
};

class Pedido {
private:
    std::vector<Produto> produtos;
public:
    void adicionarProduto(const Produto& produto) {
        produtos.push_back(produto);
    }
    const std::vector<Produto>& getProdutos() const {
        return produtos;
    }
};
//Errado
/*classe Cliente está interagindo com objetos indiretos 
 em vez de interagir apenas com seus objetos diretos */
class Cliente {
private:
    std::string nome;
    Pedido pedido;
public:
    Cliente(const std::string& nome) : nome(nome) {}
    void adicionarPedido(const Pedido& p) {
        pedido = p;
    }
    const Pedido& getPedido() const {
        return pedido;
    }
    
    void imprimirProdutosPedido() const {
        const std::vector<Produto>& produtosPedido = pedido.getProdutos();
        for (const auto& produto : produtosPedido) {
            std::cout << "Produto: " << produto.getNome() << std::endl;
        }
    }
};

int main() {
    Produto produto1("Batom");
    Produto produto2("Corretivo");
    
    Pedido pedido;
    pedido.adicionarProduto(produto1);
    pedido.adicionarProduto(produto2);

    Cliente cliente("Carolina");
    cliente.adicionarPedido(pedido);

    cliente.imprimirProdutosPedido();

    return 0;
}
