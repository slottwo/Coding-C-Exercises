#include <locale.h>
#include <stdio.h>

int main() {
    // Entradas do usuário: Opção no menu, itens comprados, item selecionado, sair do programa
    int key_option, item_key, items, quit;
    int stock_apple = 0, stock_tomato = 0, stock_banana = 0;  // Quantidade de produtos em estoque
    float cash = 100.0, price_tomato = 2.0, price_banana = 1.5, price_apple = 1.0;  // Preço dos produtos
    setlocale(LC_ALL, "Portuguese");
    
    while (1) {  // 1º laço, roda o programa "infinitas" vezes até que o usurário peça para sair.
        system("clear");  // Limpa a tela para reescrevê-la, como uma animação.

        // Menu
        printf("==========================\n");
        printf("==== Caixa: R$ %.2f ====\n", cash);  // Mostra o dinheiro no caixa com aproximação de duas casas decimais
        printf("==========================\n");
        printf("========== Menu ==========\n");
        printf("1 - Comprar produtos\n");
        printf("2 - Vender produtos\n");
        printf("3 - Listar estoque\n");
        printf("4 - Sair\n");
        printf("==========================\n");

        while (1) {
            printf("Opção: ");
            scanf("%d", &key_option);

            switch (key_option) {
            case 1:  // Comprando
                printf("========= Comprar ========\n");
                printf("1 - Tomate:        R$ %.2f\n", price_tomato);
                printf("2 - Banana:        R$ %.2f\n", price_banana);
                printf("3 - Maçã:          R$ %.2f\n", price_apple);
                printf("==========================\n");

                /*
                Inicia-se um novo laço "infinito" onde:
                    Recebe-se o código do item a ser comprado (0 cancela)
                    E para cada caso no switch (número chave de cada item)
                    Inicia-se um outro laço infinito dentro deste
                        Pega a quantidade de itens do produto a ser comprado
                        Verifica se o preço total excede o dinheiro em caixa do usuário:
                            Se sim:
                                Mostra uma mensagem de erro e qual o máximo possível pra se comprar
                                E então continua o loop do começo fazendo com que o usuário digite novamente um valor para items
                            Se não:
                                Mostra uma mensagem de sucesso e quantos e quais itens foram comprados
                                Subtrai o valor no caixa pelo preço de compra e soma a quantidade de itens do estoque
                            Em seguida o laço para
                        Se o item_key inserido não for válido o programa avisa ao usuário e 
                        reinicia o loop ignorando, o resto dele, para que seja requerido um novo item_key válido
                        O laço quebra
                Após a compra ser executada (mesmo que tenha sido de 0 itens) o laço para e o código segue para fora do switch
                */
                
                while (1) {
                    printf("Item a comprar: [Cancelar: 0] ");
                    scanf("%d", &item_key);

                    switch (item_key) {
                    case 0:
                        printf("Compra cancelada com sucesso.\n");
                        break;

                    case 1:
                        printf("[Fruta: Tomate]\n");
                        while (1) {
                            printf("Número de itens: ");
                            scanf("%d", &items);

                            if (items < 0) {
                                printf("Opção inválida: Quantidade inválida [Insira um número natural].\nTente novament.\n");
                                continue;
                            } else if (items*price_tomato > cash) {
                                printf("Opção inválida: Dinheiro insufinte [Máx: %d].\nTente novamente.\n",  (int) (cash/price_tomato)); // (int) para não arredondar para cima
                                continue;
                            } else {
                                cash = cash - items*price_tomato;
                                stock_tomato = stock_tomato + items;
                                printf("\nCompra realizada com sucesso! [%d tomates]\n", items);
                            }
                            break;
                            }
                        break;
                    
                    case 2:
                        printf("[Fruta: Banana]\n");
                        while (1) {
                            printf("Número de itens: ");
                            scanf("%d", &items);

                            if (items < 0) {
                                printf("Opção inválida: Quantidade inválida [Insira um número natural].\nTente novament.\n");
                                continue;
                            } else if (items*price_banana > cash) {
                                printf("Opção inválida: Dinheiro insufinte [Máx: %d].\nTente novamente.\n", (int) (cash/price_banana));
                                continue;
                            } else {
                                cash = cash - items*price_banana;
                                stock_banana = stock_banana + items;
                                printf("\nCompra realizada com sucesso![%d bananas]\n", items);
                            }
                            break;
                        }
                        break;

                    case 3:
                        printf("[Fruta: Maçã]\n");
                        while (1) {
                            printf("Número de itens: ");
                            scanf("%d", &items);
                            
                            if (items < 0) {
                                printf("Opção inválida: Quantidade inválida [Insira um número natural].\nTente novament.\n");
                                continue;
                            } else if (items*price_apple > cash) {
                                printf("Opção inválida: Dinheiro insufinte [Máx: %d].\nTente novamente.\n", (int) (cash/price_apple));
                                continue;
                            } else {
                                cash = cash - items*price_apple;
                                stock_apple = stock_apple + items;
                                printf("\nCompra realizada com sucesso! [%d maçãs]\n", items);
                            }
                            break;
                        }
                        break;
                    
                    default:
                        printf("Opção inválida: Item não encontrado. Tente novamente.\n");
                        continue;
                    }
                    break;
                }
                break;

            case 2:  // Vendendo
                printf("========= Vender =========\n");
                printf("1 - Tomate:    R$ %.2f\n", 2 * price_tomato);
                printf("2 - Banana:    R$ %.2f\n", 2 * price_banana);
                printf("3 - Maçã:      R$ %.2f\n", 2 * price_apple);
                printf("==========================\n");

                /*
                Inicia-se um novo laço "infinito" onde:
                    Recebe-se o código do item a que deseja comprar (0 cancela)
                    E para cada caso no switch (número chave de cada item)
                    Inicia-se um outro laço infinito dentro deste
                        Pega a quantidade de itens do produto a ser vendido
                        Verifica se ela excede o estoque:
                            Se sim:
                                Mostra uma mensagem de erro e qual o máximo possível
                                E então continua o loop do começo fazendo com que o usuário digite novamente um valor para items
                            Se não:
                                Mostra uma mensagem de sucesso e quantos e quais itens foram comprados
                                Aumenta o caixa vendendo o item pelo dobro do preço de compra e subtrai a quantidade de itens do estoque
                            Em seguida o laço para
                        Para um caso não esperado imprimir uma mensagem de erro e recomeça o laço ignorando o resto do laço
                        Após a venda ser executada (mesmo que tenha sido de 0 itens) o laço para
                */

                while (1) {
                    printf("Item a vender: [Cancelar: 0] ");
                    scanf("%d", &item_key);
                    switch (item_key) {
                    case 0:
                        printf("Compra cancelada com sucesso.\n");
                        break;

                    case 1:  // Vendendo tomates
                        printf("[Fruta: Tomate]\n");
                        while (1) {
                            // Recebe a quantidade de itens
                            printf("Número de itens: ");
                            scanf("%d", &items);
                            if (items < 0) {
                                printf("Opção inválida: Quantidade inválida [Insira um número natural].\nTente novament.\n");
                                continue;
                            // Verifica se há estoque suficiente para serem vendidos e mostra o máximo possível se não
                            } else if (items > stock_tomato) {
                                printf("Opção inválida: Estoque insufinte [%d em estoque].\nTente novamente.\n", stock_tomato);
                                continue;
                            } else {
                                printf("\nVenda realizada com sucesso! [%d tomates]\n", items);
                                cash = cash + 2*items*price_tomato;
                                stock_tomato = stock_tomato - items;
                            }
                            break;
                        }
                        break;
                    
                    case 2:  // Vendendo bananas
                        printf("[Fruta: Banana]\n");
                        while (1) {
                            printf("Número de itens: ");
                            scanf("%d", &items);

                            if (items < 0) {
                                printf("Opção inválida: Quantidade inválida [Insira um número natural].\nTente novament.\n");
                                continue;
                            } else if (items > stock_banana) {
                                printf("Opção inválida: Estoque insufinte [%d em estoque].\nTente novamente.\n", stock_banana);
                                continue;
                            } else {
                                printf("\nVenda realizada com sucesso! [%d bananas]\n", items);
                                cash = cash + 2*items*price_banana;  // Vende as bananas pelo dobro do preço
                                stock_banana = stock_banana - items;  // Retira a quantidade de itens vendidos do estoque
                            }
                            break;
                        }
                        break;
                    
                    case 3:  // Vendendo maçãs
                        printf("[Fruta: Maçã]\n");
                        while (1) {
                            printf("Número de itens: ");
                            scanf("%d", &items);

                            if (items < 0) {
                                printf("Opção inválida: Quantidade inválida [Insira um número natural].\nTente novament.\n");
                                continue;
                            } else if (items > stock_apple) {
                                printf("Opção inválida: Estoque insufinte [%d em estoque].\nTente novamente.\n", stock_apple);
                                continue;
                            } else {
                                printf("\nVenda realizada com sucesso! [%d maçãs]\n", items);
                                cash = cash + 2*items*price_apple;
                                stock_apple = stock_apple - items;
                            }
                            break;
                        }
                        break;

                    default:
                        printf("Opção inválida: Item não encontrado. Tente novamente.\n");
                        continue;
                    }
                    break;
                }
                break;
            
            case 3:  // Listando o estoque
                printf("======= Em Estoque =======\n");
                printf("Tomates:             %d\n", stock_tomato);
                printf("Bananas:             %d\n", stock_banana);
                printf("Maçãs:               %d\n", stock_apple);
                printf("==========================\n");
                break;

            case 4:  // Saindo
                printf("====== Tem certeza? ======\n");
                printf("1 - Sim\n");
                printf("2 - Não\n");
                printf("==========================\n");
                
                while (1) {
                    printf("Opção: ");
                    scanf("%d", &quit);

                    switch (quit) {
                    case 1:  // Se sim
                        printf("========= Adeus! =========\n");
                        return 0;  // Sai do método main retornado 0 e fechando o programa
                        break;
                    
                    case 2:  // Se não, simplesmente não faz nada, sai do switch e então segue para o laço principal
                        printf("===== Continuando... =====\n");
                        break;

                    default:  // Código inválido
                        printf("Opção Inválida: Inexistente. \nTente novamente.\n");
                        continue;
                        /*
                        Faz com que o código volte pra o início deste laço onde vai pedir novamente o valor de quit
                        Se não houvesse este continue, o programa executaria o ultimo comando deste loop, que é break, 
                        sairia do mesmo sem pedir novamente a opção do usuário sobre sair ou continuar
                        */
                    }
                    break;
                }
                break;
            
            default: // Código inválido
                printf("Opção inválida: Inexistente. \nTente novamente.\n");
                continue;
            }
            break;
        }
        printf("\nPressione Enter para continuar ...");  // Assim pode ser compilado no linux e mac também
        getchar(); getchar();  // Simula o pause do windows, tanto nele mesmo quanto em outros sistemas
    }
    return 0;
}
