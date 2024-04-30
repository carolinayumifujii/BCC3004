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

//Correto
//Para obter os produtos
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
};

int main() {
    Produto produto1("Batom");
    Produto produto2("Blush");
    
    Pedido pedido;
    pedido.adicionarProduto(produto1);
    pedido.adicionarProduto(produto2);

    Cliente cliente("Carolina");
    cliente.adicionarPedido(pedido);

    const Pedido& pedidoCliente = cliente.getPedido();
    const std::vector<Produto>& produtosPedido = pedidoCliente.getProdutos();

    for (const auto& produto : produtosPedido) {
        std::cout << "Produto: " << produto.getNome() << std::endl;
    }

    return 0;
}
