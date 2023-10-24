#include <stdio.h>

int main()
{
    
    int tabela[4][3] = {{1,2,3}, {4,5,6}, {1,123123,3332}, {123131,444,777}}; 

    for(int i =0; i<4; i++){
        for(int j= 0; j<3; j++){
            printf("list %d: %d\n",i ,  tabela[i][j]);

            if(tabela[i][j]%2 ==0){
                printf("o numero e par\n"); 
            }else{
                printf("o numero e impar\n"); 
            }
        }
    }
    return 0;
}
