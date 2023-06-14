#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define M 1024

void add_memory(int n, int sec);

int main(int argc, char *argv[]) {
    int n, sec;
    char *endChar;
    if (argc <= 3) {
        n = strtol(argv[1], &endChar, 10);
        sec = strtol(argv[2], &endChar, 10);
    } else {
        printf("Error: please use './main 1000 5', 1000 is meant to add 1000M memory, 5 is 5s duration.\n");
        exit(1);
    }
    add_memory(n, sec);
    printf("the end...\n");
    return 0;
}

/**
 * 增加一定内存持续一段时间, 再释放
 * @param n 内存大小，单位：M
 * @param sec 时间，单位：s
 * @return
 */
void add_memory(int N, int sec) {
    char **q;
    q = (char **) malloc(sizeof(char *) * M * N);
    for (int i = 0; i < M * N; i++) {
        *(q + i) = (char *) malloc(sizeof(char) * M);
    }
    printf("add memory %dM\n", N);
    sleep(sec);
    // 释放内存
    for (int i = 0; i < M * N; i++) {
        free(*(q + i));
    }
    free(q);
    printf("free memory\n");
}