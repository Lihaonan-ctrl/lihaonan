//202510306218
//2229740274@qq.com
//李浩楠
#include<stdio.h>

int main(){
    int mat[3][3],trans[3][3];

    for (int i=0;i<3;i++){
        sanf("%d %d %d",&mat[i][0],&mat[i][1],&mat[i][2]);
    }

    for (int i=0;i<3;i++){
        for(int j = 0;j<3;j++){
            trans[j][i]=mat[i][j];
        }
    }
    for (int i=0;i<3;i++){
        printf("%d %d %d\n",trans[i][0],trans[i][1],trans[1][2]);
    }
    return 0;
}
