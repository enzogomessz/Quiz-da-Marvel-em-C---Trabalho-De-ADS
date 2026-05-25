#include <stdio.h>

int main() {
    int resposta, pontos = 0;

    printf("============================\n");
    printf("   QUIZ DO UNIVERSO MARVEL\n");
    printf("============================\n\n");

    // ===== FACIL =====
    printf("--- NIVEL FACIL ---\n\n");

    printf("1. Qual o nome verdadeiro do Homem de Ferro?\n");
    printf("1 - Steve Rogers\n");
    printf("2 - Tony Stark\n");
    printf("3 - Bruce Banner\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    if (resposta == 2) { printf("Correto!\n\n"); pontos++; }
    else printf("Errado! Era Tony Stark.\n\n");

    printf("2. Qual e o nome do martelo do Thor?\n");
    printf("1 - Gungnir\n");
    printf("2 - Stormbreaker\n");
    printf("3 - Mjolnir\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    if (resposta == 3) { printf("Correto!\n\n"); pontos++; }
    else printf("Errado! Era Mjolnir.\n\n");

    printf("3. Qual vilao queria coletar todas as Joias do Infinito?\n");
    printf("1 - Loki\n");
    printf("2 - Thanos\n");
    printf("3 - Ultron\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    if (resposta == 2) { printf("Correto!\n\n"); pontos++; }
    else printf("Errado! Era Thanos.\n\n");

    printf("4. Qual o alter ego do Hulk?\n");
    printf("1 - Tony Stark\n");
    printf("2 - Clint Barton\n");
    printf("3 - Bruce Banner\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    if (resposta == 3) { printf("Correto!\n\n"); pontos++; }
    else printf("Errado! Era Bruce Banner.\n\n");

    // ===== MEDIO =====
    printf("--- NIVEL MEDIO ---\n\n");

    printf("5. Qual pedra do Infinito estava no cajado do Loki em Os Vingadores (2012)?\n");
    printf("1 - Pedra da Alma\n");
    printf("2 - Pedra da Mente\n");
    printf("3 - Pedra do Tempo\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    if (resposta == 2) { printf("Correto!\n\n"); pontos++; }
    else printf("Errado! Era a Pedra da Mente.\n\n");

    printf("6. Qual e o nome do reino dos gigantes de gelo em Thor?\n");
    printf("1 - Asgard\n");
    printf("2 - Midgard\n");
    printf("3 - Jotunheim\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    if (resposta == 3) { printf("Correto!\n\n"); pontos++; }
    else printf("Errado! Era Jotunheim.\n\n");

    printf("7. Qual personagem e a filha adotiva do Thanos?\n");
    printf("1 - Nebula\n");
    printf("2 - Gamora\n");
    printf("3 - Mantis\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    if (resposta == 2) { printf("Correto!\n\n"); pontos++; }
    else printf("Errado! Era Gamora.\n\n");

    printf("8. Qual e o nome do assistente de IA do Tony Stark nos primeiros filmes?\n");
    printf("1 - FRIDAY\n");
    printf("2 - EDITH\n");
    printf("3 - JARVIS\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    if (resposta == 3) { printf("Correto!\n\n"); pontos++; }
    else printf("Errado! Era JARVIS.\n\n");

    // ===== DIFICIL =====
    printf("--- NIVEL DIFICIL ---\n\n");

    printf("9. Qual e o nome verdadeiro do Loki de nascenca?\n");
    printf("1 - Loki Odinson\n");
    printf("2 - Loki Laufeyson\n");
    printf("3 - Loki Borson\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    if (resposta == 2) { printf("Correto!\n\n"); pontos++; }
    else printf("Errado! Era Loki Laufeyson.\n\n");

    printf("10. Em qual planeta Thanos sacrificou Gamora para obter a Pedra da Alma?\n");
    printf("1 - Xandar\n");
    printf("2 - Vormir\n");
    printf("3 - Titan\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    if (resposta == 2) { printf("Correto!\n\n"); pontos++; }
    else printf("Errado! Era Vormir.\n\n");

    printf("11. Qual personagem segurou a Pedra do Poder com a mao nua em Guardioes da Galaxia?\n");
    printf("1 - Groot\n");
    printf("2 - Drax\n");
    printf("3 - Peter Quill\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    if (resposta == 3) { printf("Correto!\n\n"); pontos++; }
    else printf("Errado! Era Peter Quill (Star-Lord).\n\n");

    printf("12. Qual foi o primeiro heroi a ser mostrado empunhando o Mjolnir alem do Thor nos filmes?\n");
    printf("1 - Tony Stark\n");
    printf("2 - Capitao America\n");
    printf("3 - Visao\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    if (resposta == 3) { printf("Correto!\n\n"); pontos++; }
    else printf("Errado! Foi o Visao em Era de Ultron.\n\n");

    // ===== FAN =====
    printf("--- NIVEL FAN ---\n\n");

    printf("13. Qual e o numero do universo principal da Marvel nos quadrinhos?\n");
    printf("1 - Terra-616\n");
    printf("2 - Terra-199999\n");
    printf("3 - Terra-1610\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    if (resposta == 1) { printf("Correto!\n\n"); pontos++; }
    else printf("Errado! Era Terra-616.\n\n");

    printf("14. Qual e o nome do cachorro do Gaviao Arqueiro nos quadrinhos?\n");
    printf("1 - Fido\n");
    printf("2 - Lucky (Pizza Dog)\n");
    printf("3 - Rex\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    if (resposta == 2) { printf("Correto!\n\n"); pontos++; }
    else printf("Errado! Era Lucky, o Pizza Dog.\n\n");

    printf("15. Qual foi o primeiro personagem da Marvel a aparecer nos quadrinhos historicamente?\n");
    printf("1 - Capitao America\n");
    printf("2 - Tocha Humana (Jim Hammond)\n");
    printf("3 - Namor\n");
    printf("Resposta: ");
    scanf("%d", &resposta);
    if (resposta == 2) { printf("Correto!\n\n"); pontos++; }
    else printf("Errado! Foi a Tocha Humana (Jim Hammond) em 1939.\n\n");

    printf("============================\n");
    printf("   RESULTADO FINAL: %d/15\n", pontos);
    printf("============================\n");

    if (pontos == 15)
        printf("Classificacao: VERDADEIRO FAN DA MARVEL\n");
    else if (pontos >= 12)
        printf("Classificacao: HEROI LENDARIO\n");
    else if (pontos >= 9)
        printf("Classificacao: VINGADOR\n");
    else if (pontos >= 6)
        printf("Classificacao: AGENTE S.H.I.E.L.D.\n");
    else if (pontos >= 3)
        printf("Classificacao: NOVATO\n");
    else
        printf("Classificacao: VILAO DERROTADO\n");

    printf("============================\n");

    return 0;
}