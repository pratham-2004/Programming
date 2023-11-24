#include<stdio.h>

int main() {
    int i, j, k, n, m;
    n = 5;
    m = 3;
    int alloc[5][3] = {{0, 1, 0},
                       {2, 0, 0},
                       {3, 0, 2},
                       {2, 1, 1},
                       {0, 0, 2}};

    int max[5][3] = { {7, 5, 3},
                     {3, 2, 2},
                     {9, 0, 2},
                     {2, 2, 2},
                     {4, 3, 3}};

    int avail[3] = {3, 3, 2};

    int f[n] /*Flag array*/, ans[n] /*safe sequence*/, ind = 0;
    for (i = 0; i < n; i++) {
        f[i] = 0;
    }
    int need[5][3];
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }

    for (k = 0; k < 5; k++) {
        for (i = 0; i < n; i++) {
            if (f[i] == 0) {
                int flag = 0;
                for (j = 0; j < m; j++) {
                    if (need[i][j] > avail[j]) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) {
                    ans[ind++] = i;
                    for (int y = 0; y < m; y++) {
                        avail[y] += alloc[i][y];
                    }
                    f[i] = 1;
                }
            }
        }
    }

    int flag = 1;

    for (i = 0; i < n; i++) {
        if (f[i] == 0) {
            flag = 0;
            printf("NOT A SAFE SEQUENCE\n");
            break;
        }
    }

    if (flag == 1) {
        printf("SAFE SEQUENCE\n");
        for (int i = 0; i < n; i++) {
            printf("P%d ", ans[i]);
        }
    }

    return 0;
}
