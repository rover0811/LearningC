#include <stdio.h>


void input(int (* pary)[]);
void calculate(int (* pary)[]);
void print(int (* pary)[]);

int main() {
    int ary[5][6]={0};
    input(ary);
    calculate(ary);
    print(ary);
    return 0;
}

void input(int (* pary)[6]){
    int k=1;
    for (int i=0;i<4;i++){
        for (int j=0;j<5;j++){
            pary[i][j]=k++;
        }
    }
}
void calculate(int (* pary)[6]){
    for (int i=0;i<4;i++){
        int temp=0;
        for (int j=0;j<5;j++){
            pary[i][5]+=pary[i][j];
            pary[4][j]+=pary[i][j];
            pary[4][5]+=pary[i][j];
        }
    }
}

void print(int (* pary)[6]){
    for (int i=0;i<5;i++){
        int temp=0;
        for (int j=0;j<6;j++){
            printf("%5d",pary[i][j]);
        }
        printf("\n");
    }
}

