#include<stdio.h>

int main(){
    char str[]="KVCY, SP IYE RKFO K COXDOXMO DRKD IYE VYFO PBYW K ZKBDSMEVKB KEDRYB, KXN IYE DRSXU SD'C K LODDOB COXDOXMO DRKX DRO YXO S'FO AEYDON, ZVOKCO, LI KVV WOKXC, VOD'C RKFO DRO COXDOXMOC NY LKDDVO! ZYCD SD KXN GO'VV COO GRODROB SD'C LODDOB.";
    char symbol;
    int i, key;
    
    printf("enter key:");
    scanf("%d",&key);
    
    for(i=0;str[i]!='\0';i++){
        symbol=str[i];
        if(symbol>='A'&&symbol<='Z'){
            symbol=symbol+key;
            if(symbol>='Z'){
                symbol=symbol- 'Z' + 'A' -1;
            }
            str[i]=symbol;
        }else if(symbol>' ' && symbol<'/'){
            symbol=symbol+key;
            if(symbol>'/'){
                symbol=symbol - '/' + ' ' -1;
            }
            str[i]=symbol;
        }
    }
    printf("%s",str);
}