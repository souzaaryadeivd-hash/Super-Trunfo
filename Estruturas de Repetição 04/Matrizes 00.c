#include <stdio.h>

int main() {

    int index;

    char * nomesAlunos[3][3]= {
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 25", "Mat: 85"},
        {"Aluno 2", "Pt: 20", "Mat: 80"}            
    };
    
    printf ("Informe o numero do alunos que queria ver as notas: \n");

    printf (" \n");
    
    printf ("Para o aluno 0, digite 0: \n");
    printf ("Para o aluno 1, digite 1: \n");
    printf ("Para o aluno 2, digite 2: \n");
            scanf ("%d", &index);
    
    printf (" \n");

    printf ("A Nota do %s é: %s, %s ...\n", nomesAlunos[index][0],
                                            nomesAlunos[index][1],
                                            nomesAlunos[index][2]);

    
return 0;

}