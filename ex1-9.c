#include <stdio.h>
void main(){
    char c;
    char aux;
    while((c=getchar())!=EOF){
        if(aux==' ' &&  c==' '){}
        else{
            printf("%c",c);
        }
        aux = c;
    }
}
