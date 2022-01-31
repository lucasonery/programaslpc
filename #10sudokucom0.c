#include <stdio.h>
#include <stdlib.h>
#define TAM 9

int main(){
    
    int n, i, j, m, k, mat[TAM][TAM], controle, vet[10], recebe, linha, coluna; 

    controle = 0;
    scanf("%d", &n);

    for(k=1; k<=n; k++){
        //zerando o vetor
        for (j=0; j<10; j++){
            vet[j] = 0;
        }
        
        //ler a primeira matriz
        for (i=0; i<9; i++){
            for (j=0; j<9; j++){
                scanf("%d", &mat[i][j]);
            }   
        }

        //verificando as linhas

        for (i=0; i<9 && controle!=1; i++){
            for (j=0; j<9 && controle!=1; j++){            
                if (0 <= mat[i][j] && mat[i][j] <=9){ // verifica o intervalo
                    
                    recebe = mat[i][j];            
                    
                    if (recebe != 0){                 //verifica a repetição de 0
                        if (vet[recebe]==0){
                        vet[recebe]=1;
                        }else{            
                            controle=1;
                        break;
                        }  
                    }
                }else{                    
                    controle = 1;                
                    break;
                }
            }
            if (controle == 1) {
                break;
            }  

            //limpa o vetor
            
            for (m=0; m<10; m++){
                vet[m] = 0;
            }
        }        

        for (j=0; j<10; j++){
            vet[j] = 0;
        }

        //verifica as colunas
        
        for (j=0; j<9 && controle!=1; j++){
            for (i=0; i<9 && controle!=1; i++){            
                if (0 <= mat[i][j] && mat[i][j] <=9){                
                    
                    recebe = mat[i][j];                
                    
                    if (recebe != 0){               //verifica a repetição de 0
                        if (vet[recebe]==0){
                            vet[recebe]=1;
                        }else{                
                            controle=1;
                            break;
                        }   
                    }
                    
                }else{                    
                    controle = 1;
                    break;
                }
            }
            if (controle == 1) {
                break;
            }        
            
            //limpa o vetor
            for (m=0; m<10; m++){
                vet[m] = 0;
            }
        }

        for (j=0; j<10; j++){
            vet[j] = 0;
        }
        
        //Verifica os quadrantes

        for(linha = 0; linha < 9 && controle!=1; linha += 3){ //linha inicial de cada quadrante
            for(coluna = 0; coluna < 9 && controle!=1; coluna += 3){ //coluna inicial de cada quadrante
                /* os laços que fazem a verificação de cada quadrante */
                for(i = 0; i < 3 && controle!=1; i++){
                    for(j = 0; j < 3 && controle!=1; j++){
                        /* verifica aqui */                    
                        
                        recebe = mat[linha+i][coluna+j];                        
                        
                        if (recebe != 0){                   //verifica a repetição de 0
                            if (vet[recebe]==0){
                                vet[recebe]=1;
                            }else{
                                controle=1;
                                break;
                            }  
                        }
                    }
                }
                
                //limpa o vetor
                for (m=0; m<10; m++){
                    vet[m] = 0;
                }
            }
        }        
        
        if (controle == 0) {
            printf("Instancia %d\nSIM\n\n", k);            
        }
        else{
            printf("Instancia %d\nNAO\n\n", k);
        }
        
        controle = 0;
    }    

    return 0;

}
