# Quiz do Universo Marvel

## Informações do Aluno

- **Nome:** Enzo Gomes De Sousa Caldas
- **Matrícula:** 01891694
- **Curso:** Análise e Desenvolvimento de Sistemas (ADS)
- **Instituição:** Uninassau

---

## Descrição do Projeto

Programa desenvolvido na linguagem C que consiste em um quiz interativo com 15 perguntas sobre o Universo Marvel. As perguntas são divididas em quatro níveis de dificuldade, e ao final o usuário recebe uma pontuação e uma classificação.

---

## Funcionalidades

- 15 perguntas de múltipla escolha
- Níveis de dificuldade: Fácil, Médio, Difícil e Fã
- Feedback imediato após cada resposta
- Placar atualizado a cada pergunta
- Classificação final baseada na pontuação

---

## Níveis de Dificuldade

| Nível | Perguntas |
|-------|-----------|
| Fácil | 1 a 4 |
| Médio | 5 a 8 |
| Difícil | 9 a 12 |
| Fã | 13 a 15 |

---

## Classificação Final

| Pontuação | Classificação |
|-----------|---------------|
| 15 pontos | Verdadeiro Fã da Marvel |
| 12 a 14 | Herói Lendário |
| 9 a 11 | Vingador |
| 6 a 8 | Agente S.H.I.E.L.D. |
| 3 a 5 | Novato |
| 0 a 2 | Vilão Derrotado |

---

## Como Compilar e Executar

Abra o terminal na pasta do projeto e execute os comandos abaixo:

**Compilar:**
```bash
gcc quiz_marvel.c -o quiz_marvel
```

**Executar:**
```bash
./quiz_marvel
```

---

## Estrutura do Código

- `#include <stdio.h>` — biblioteca padrão para entrada e saída
- `int main()` — função principal do programa
- `printf()` — exibe as perguntas e mensagens na tela
- `scanf()` — lê a resposta digitada pelo usuário
- `if / else` — verifica se a resposta está correta e soma a pontuação

---

## Arquivos do Projeto

```
quiz_marvel.c   -> código fonte do programa
README.md       -> documentação do projeto
```