// Shell basico utilizando C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_INPUT_SIZE 1024

void showHelp() {
    printf("Comandos disponíveis:\n");
    printf("1. help - Exibe a lista de comandos disponíveis.\n");
    printf("2. exit - Sai do shell.\n");
    printf("3. forkExe - Exemplo de comando que cria forks.\n");
    printf("Comandos presentes no sistema também funcionam. \n");
}

void forkExe() {
    pid_t pid = fork();

    if (pid == -1) {
        perror("Erro ao criar um processo filho");
        exit(EXIT_FAILURE);

    } else if (pid == 0) {
        printf("Processo filho criado com sucesso. PID do filho: %d\n", getpid());
        exit(EXIT_SUCCESS);

    } else {
        printf("Processo pai. PID do pai: %d, PID do filho: %d\n", getpid(), pid);
        int status;
        waitpid(pid, &status, 0);

    }
}

int main() {
    char input[MAX_INPUT_SIZE];

    while (1) {
        char cwd[MAX_INPUT_SIZE];

        if (getcwd(cwd, sizeof(cwd)) == NULL) {
            perror("Erro ao obter o diretório atual");
            exit(EXIT_FAILURE);
        }

        printf("MeuShell (%s)> ", cwd);

        if (fgets(input, sizeof(input), stdin) == NULL) {
            perror("Erro ao ler a entrada");
            exit(EXIT_FAILURE);
        }

        input[strcspn(input, "\n")] = '\0';

        if (strcmp(input, "exit") == 0) {
            printf("Saindo do shell.\n");
            break;

        } else if (strcmp(input, "help") == 0) {
            showHelp();

        } else if (strcmp(input, "forkExe") == 0) {
            forkExe();

        } else if (strncmp(input, "cd", 2) == 0) {
            char *args[MAX_INPUT_SIZE];
            int i = 0;
            char *token = strtok(input, " ");

            while (token != NULL) {
                args[i++] = token;
                token = strtok(NULL, " ");
            }

            args[i] = NULL;

            if (args[1] != NULL) {
                if (chdir(args[1]) == 0) {
                    printf("Diretório alterado para %s.\n", args[1]);

                } else {
                    perror("Erro ao alterar o diretório");
                }

            } else {
                printf("Uso: cd <diretório>\n");
            }
        } else {
            int ret = system(input);

            if (ret == -1) {
                perror("Erro ao executar o comando");
            }
        }
    }

    return 0;
}
