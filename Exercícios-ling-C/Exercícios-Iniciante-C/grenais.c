#include <stdio.h>
typedef struct {
    int gols_inter;
    int gols_gremio;
    int grenal;
} competicao;

typedef struct {
    int inter;
    int gremio;
    int empate;
} resultado;

int main() {
    competicao comp;
    resultado res;
    int i;
    comp.grenal = 1;
    res.inter = 0;
    res.gremio = 0;
    res.empate = 0;
    i = 1;
    
    while (i == 1) {
        scanf("%d", &comp.gols_inter);
        scanf("%d", &comp.gols_gremio);

        if (comp.gols_inter > comp.gols_gremio) {
            res.inter += 1;
        }
        else if (comp.gols_gremio > comp.gols_inter) {
            res.gremio += 1;
        }
        else {
            res.empate += 1;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &i);
        if (i == 1) {
            comp.grenal += 1;
        }
    }
    printf("%d grenais\n", comp.grenal);
    printf("Inter:%d\n", res.inter);
    printf("Gremio:%d\n", res.gremio);
    printf("Empates:%d\n", res.empate);
    
    if (res.inter > res.gremio || res.inter > res.empate) {
        printf("Inter venceu mais\n");
    }
    else {
        printf("Gremio venceu mais\n");
    }
    
    return 0;
}