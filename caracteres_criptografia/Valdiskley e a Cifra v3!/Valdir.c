#include <stdio.h>
#include <string.h>
#include <ctype.h>

void vigenere(char *texto, char *chave, char operacao) {
    int tamanho_texto = strlen(texto);
    int tamanho_chave = strlen(chave);
    char resultado[tamanho_texto + 1];

    for (int i = 0, j = 0; i < tamanho_texto; i++) {
        if (isalpha(texto[i])) {
            char letra_texto = tolower(texto[i]);
            char letra_chave = tolower(chave[j % tamanho_chave]);

            int indice_texto = letra_texto - 'a';
            int indice_chave = letra_chave - 'a';
            int novo_indice;

            if (operacao == '+') {  // Cifrar
                novo_indice = (indice_texto + indice_chave) % 26;
            } else if (operacao == '-') {  // Decifrar
                novo_indice = (indice_texto - indice_chave + 26) % 26;
            }

            resultado[i] = 'a' + novo_indice;
            j++;  // Avançar na chave apenas se foi uma letra
        } else {
            resultado[i] = texto[i];  // Mantém pontuação e espaços
        }
    }

    resultado[tamanho_texto] = '\0';  // Adiciona o terminador nulo
    printf("Resultado: %s\n", resultado);
}

int main() {
    char texto[256];
    char chave[256];
    char operacao;

    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';  // Remover o '\n' do final da string

    printf("Digite a chave: ");
    fgets(chave, sizeof(chave), stdin);
    chave[strcspn(chave, "\n")] = '\0';  // Remover o '\n' do final da string

    printf("Digite a operação (+ para cifrar, - para decifrar): ");
    scanf(" %c", &operacao);

    vigenere(texto, chave, operacao);

    return 0;
}