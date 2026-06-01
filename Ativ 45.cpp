45. Desenvolver um programa para verificar a nota do aluno em uma prova com 10 questões, o programa deve perguntar ao aluno a resposta de cada	questão e ao final comparar com o gabarito da prova e assim calcular o total de acertos e a nota (atribuir 1 ponto por resposta	certa). Após cada aluno utilizar o sistema deve ser feita uma pergunta se outro aluno vai utilizar o sistema. Após todos os alunos terem respondido informar:
    1. Maior e Menor Acerto;
    2. Total de Alunos que utilizaram o sistema;
    3. A Média das Notas da Turma.
        
        ```
        								-----------------------------
        										 **Gabarito da prova**
        								-----------------------------
        01 - A
        02 - B
        03 - C
        04 - D
        05 - E
        06 - E
        07 - D
        08 - C
        09 - B
        10 - A
        ```
        
Após concluir isto você poderia incrementar o programa permitindo que o professor digite o gabarito da prova antes dos alunos usarem o programa.

___________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________


#include <iostream>
using namespace std;

int main()
{
    string name;
    int nota;
    char let;
    char gab[10] = {'A', 'B', 'C', 'D', 'E', 'E', 'D', 'C', 'B', 'A'};

    int continuar = 0;
    float soma = 0;
    float media = 0;

    int maior = 0;
    int menor = 10;

    int totalAlunos = 0;
    int notes[300];

    while(continuar == 0)
    {
        nota = 0;

        cout << "Seu nome eh: ";
        cin >> name;

        cout << "Aviso: as respostas so podem ser (A, B, C, D ou E)" << endl;

        for(int i = 1; i <= 10; i++)
        {
            cout << "Questao " << i << ": ";
            cin >> let;

            switch(i)
            {
                case 1:
                    if(gab[0] == let)
                    {
                        cout << "Voce ACERTOU!!" << endl;
                        nota++;
                    }
                    else
                    {
                        cout << "Voce ERROU!" << endl;
                    }
                    cout << "Resposta correta: A" << endl;
                    break;

                case 2:
                    if(gab[1] == let)
                    {
                        cout << "Voce ACERTOU!!" << endl;
                        nota++;
                    }
                    else
                    {
                        cout << "Voce ERROU!" << endl;
                    }
                    cout << "Resposta correta: B" << endl;
                    break;

                case 3:
                    if(gab[2] == let)
                    {
                        cout << "Voce ACERTOU!!" << endl;
                        nota++;
                    }
                    else
                    {
                        cout << "Voce ERROU!" << endl;
                    }
                    cout << "Resposta correta: C" << endl;
                    break;

                case 4:
                    if(gab[3] == let)
                    {
                        cout << "Voce ACERTOU!!" << endl;
                        nota++;
                    }
                    else
                    {
                        cout << "Voce ERROU!" << endl;
                    }
                    cout << "Resposta correta: D" << endl;
                    break;

                case 5:
                    if(gab[4] == let)
                    {
                        cout << "Voce ACERTOU!!" << endl;
                        nota++;
                    }
                    else
                    {
                        cout << "Voce ERROU!" << endl;
                    }
                    cout << "Resposta correta: E" << endl;
                    break;

                case 6:
                    if(gab[5] == let)
                    {
                        cout << "Voce ACERTOU!!" << endl;
                        nota++;
                    }
                    else
                    {
                        cout << "Voce ERROU!" << endl;
                    }
                    cout << "Resposta correta: E" << endl;
                    break;

                case 7:
                    if(gab[6] == let)
                    {
                        cout << "Voce ACERTOU!!" << endl;
                        nota++;
                    }
                    else
                    {
                        cout << "Voce ERROU!" << endl;
                    }
                    cout << "Resposta correta: D" << endl;
                    break;

                case 8:
                    if(gab[7] == let)
                    {
                        cout << "Voce ACERTOU!!" << endl;
                        nota++;
                    }
                    else
                    {
                        cout << "Voce ERROU!" << endl;
                    }
                    cout << "Resposta correta: C" << endl;
                    break;

                case 9:
                    if(gab[8] == let)
                    {
                        cout << "Voce ACERTOU!!" << endl;
                        nota++;
                    }
                    else
                    {
                        cout << "Voce ERROU!" << endl;
                    }
                    cout << "Resposta correta: B" << endl;
                    break;

                case 10:
                    if(gab[9] == let)
                    {
                        cout << "Voce ACERTOU!!" << endl;
                        nota++;
                    }
                    else
                    {
                        cout << "Voce ERROU!" << endl;
                    }
                    cout << "Resposta correta: A" << endl;
                    break;
            }
        }

        cout << "Aluno: " << name << endl;
        cout << "Nota: " << nota << endl;

        notes[totalAlunos] = nota;

        soma = soma + nota;

        if(nota > maior)
        {
            maior = nota;
        }

        if(nota < menor)
        {
            menor = nota;
        }

        totalAlunos++;

        cout << "Deseja continuar?" << endl;
        cout << "0 - Sim" << endl;
        cout << "1 - Nao" << endl;
        cin >> continuar;
    }

    media = soma / totalAlunos;

    cout << "---------- RESULTADO FINAL ----------" << endl;
    cout << "Maior acerto: " << maior << endl;
    cout << "Menor acerto: " << menor << endl;
    cout << "Total de alunos: " << totalAlunos << endl;
    cout << "Media da turma: " << media << endl;

    cout << "Notas dos alunos:" << endl;

    for(int o = 0; o < totalAlunos; o++)
    {
        cout << "Aluno " << o + 1 << ": "
             << notes[o] << " pontos" << endl;
    }

    return 0;
}
