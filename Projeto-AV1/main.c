#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
/*
#ifdef WIN32
#define PAUSE 1
#else
#define PAUSE 0
#endif
*/


int main() {
    // Entradas do usuário: Opção no menu, itens comprados, item selecionado, sair do programa
    int key_option, item_key, items, quit;
    int stock_apple = 0, stock_tomato = 0, stock_banana = 0;  // Quantidade de produtos em estoque
    float cash = 100.0, price_apple = 1.0, price_tomato = 2.0, price_banana = 1.5;  // Preço dos produtos
    setlocale(LC_ALL, "Portuguese");
    
    while (1) {  // 1º laço, roda o programa "infinitas" vezes até que o usurário peça para sair.
        system("clear");  // Limpa a tela para reescrevê-la, como uma animação.

        // Menu
        printf("======================\n");
        printf("== Caixa: R$ %5.2f ==\n", cash);  // Mostra o dinheiro no caixa com aproximação de duas casas decimais
        printf("======================\n");
        printf("======== Menu ========\n");
        printf("1 - Comprar produtos\n");
        printf("2 - Vender produtos\n");
        printf("3 - Listar estoque\n");
        printf("4 - Sair\n");
        printf("======================\n");

        while (1) {
            printf("Opção: ");
            scanf("%d", &key_option);

            switch (key_option) {
            case 1:  // Comprando
                printf("======= Comprar ======\n");
                printf("1 - Tomate:   R$ %.2f\n", price_tomato);
                printf("2 - Banana:   R$ %.2f\n", price_banana);
                printf("3 - Maçã:     R$ %.2f\n", price_apple);
                printf("======================\n");

                while (1) {
                    printf("Item a comprar: ");
                    scanf("%d", &item_key);

                    switch (item_key) {
                    case 1:
                        while (1) {
                            printf("Número de itens: ");
                            scanf("%d", &items);

                            if (items*price_tomato > cash) {
                                printf("Opção inválida: Dinheiro insufinte. Tente novamente.\n");
                                continue;
                            } else {
                                cash = cash - items*price_tomato;
                                stock_tomato = stock_tomato + items;
                                printf("Compra realizada com sucesso! [%d tomates]\n", items);
                            }
                            break;
                            }
                        break;
                    
                    case 2:
                        while (1) {
                            printf("Número de itens: ");
                            scanf("%d", &items);

                            if (items*price_banana > cash) {
                                printf("Opção inválida: Dinheiro insufinte [M]. Tente novamente.\n");
                                continue;
                            } else {
                                cash = cash - items*price_banana;
                                stock_banana = stock_banana + items;
                                printf("Compra realizada com sucesso![%d bananas]\n", items);
                            }
                            break;
                        }
                        break;

                    case 3:
                        while (1) {
                            printf("Número de itens: ");
                            scanf("%d", &items);
                            
                            if (items*price_apple > cash) {
                                printf("Opção inválida: Dinheiro insufinte. Tente novamente.\n");
                                continue;
                            } else {
                                cash = cash - items*price_apple;
                                stock_apple = stock_apple + items;
                                printf("Compra realizada com sucesso! [%d maçãs]\n", items);
                            }
                            break;
                        }
                        break;
                    
                    default:
                        printf("Opção inválida: Item não encontrado. Tente novamente.\n");
                        continue;
                        break;
                    }
                    break;
                }
                break;

            case 2:  // Vendendo
                printf("======= Vender =======\n");
                printf("1 - Tomate: R$ %.2f\n", 2 * price_tomato);
                printf("2 - Banana: R$ %.2f\n", 2 * price_banana);
                printf("3 - Maçã:   R$ %.2f\n", 2 * price_apple);
                printf("======================\n");

                while (1) {
                    printf("Item a vender: ");
                    scanf("%d", &item_key);
                    switch (item_key) {
                    /*
                    Para cada caso (número chave de cada item)
                        Pega a quantidade de itens daquele produtos a serem vendidos
                        Verifica se ela excede o estoque:
                            Se sim:
                                Mostra uma mensagem de erro e qual o máximo possível
                                E então continua o loop do começo fazendo com que o usuário digite novamente um valor para item_key
                            Se não:
                                Mostra uma mensagem de sucesso e quantos e quais itens foram comprados
                                Aumenta o caixa vendendo o item pelo dobro do preço de compra e subtrai a quantidade de itens do estoque
                            Em seguida o laço acaba
                    */
                    
                    case 1:  // Vendendo tomates
                        while (1) {
                            // Recebe a quantidade de itens
                            printf("Número de itens: ");
                            scanf("%d", &items);
                            // Verifica se há estoque suficiente para serem vendidos e mostra o máximo possível se não
                            if (items > stock_tomato) {
                                printf("Opção inválida: Estoque insufinte [%d]. Tente novamente.\n", stock_tomato);
                                continue;
                            } else {
                                printf("Venda realizada com sucesso! [%d tomates]\n", items);
                                cash = cash + 2*items*price_tomato;
                                stock_tomato = stock_tomato - items;
                            }
                            break;
                        }
                        break;
                    
                    case 2:  // Vendendo bananas
                        while (1) {
                            printf("Número de itens: ");
                            scanf("%d", &items);

                            if (items > stock_banana) {
                                printf("Opção inválida: Estoque insufinte [%d]. Tente novamente.\n", stock_banana);
                                continue;
                            } else {
                                printf("Venda realizada com sucesso! [%d bananas]\n", items);
                                cash = cash + 2*items*price_banana;  // Vende as bananas pelo dobro do preço
                                stock_banana = stock_banana - items;  // Retira a quantidade de itens vendidos do estoque
                            }
                            break;
                        }
                        break;
                    
                    case 3:  // Vendendo maçãs
                        while (1) {
                            printf("Número de itens: ");
                            scanf("%d", &items);

                            if (items > stock_apple) {
                                printf("Opção inválida: Estoque insufinte [%d]. Tente novamente.\n", stock_apple);
                                continue;
                            } else {
                                printf("Venda realizada com sucesso! [%d maçãs]\n", items);
                                cash = cash + 2*items*price_apple;
                                stock_apple = stock_apple - items;
                            }
                            break;
                        }
                        break;

                    default:
                        break;
                    }

                    break;
                }
                break;
            
            case 3:  // Listando o estoque
                printf("===== Em Estoque =====\n");
                printf("Tomates:          %d\n", stock_tomato);
                printf("Bananas:          %d\n", stock_banana);
                printf("Maçãs:            %d\n", stock_apple);
                printf("======================\n");
                break;

            case 4:  // Saindo
                printf("==== Tem certeza? ====\n");
                printf("1 - Sim\n");
                printf("2 - Não\n");
                printf("======================\n");
                
                while (1) {
                    printf("Opção: ");
                    scanf("%d", &quit);

                    switch (quit) {
                    case 1:  // Se sim
                        printf("======= Adeus! =======\n");
                        pause();
                        return 0;  // Sai do método main retornado 0 e fechando o programa
                        break;
                    
                    case 2:  // Se não
                        // Simplesmente não faz nada, sai do switch e então segue para o laço principal
                        printf("=== Continuando... ===");
                        break;

                    default:  // Código inválido
                        printf("Opção Inválida: Inexistente. \nTente novamente.");
                        continue;
                        // Faz com que o código volte pra o início deste laço onde vai pedir novamente o valor de quit
                        // Se não houvesse este continue, o programa executaria o ultimo comando deste loop, que é break, 
                        // sairia do mesmo sem pedir novamente a opção do usuário sobre sair ou continuar
                        break;
                    }
                    break;
                }
            
            default: // Código inválido
                printf("Opção inválida: Inexistente. \nTente novamente.\n");
                continue;
                break;
            }

            pause();
            break;
        }
        printf("Pressione qualquer teçla para continuar ...\n");  // Assim pode ser compilado no linux e mac também
        getchar(); getchar();  // Simula o pause do windows, tanto nele mesmo quanto em outros sistemas
    }
    return 0;
}