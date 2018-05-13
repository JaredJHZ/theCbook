#include<stdio.h>
int main(){
    int c,blank,tabs,newLines;
    blank = tabs = newLines = 0;
    while((c=getchar())!='s'){
        if(c=='\n'){
            newLines++;
        } else if(c=='\t'){
            tabs++;
        } else if(c==' '){
            blank++;
        }
    }

    printf("Number of Tabs : %d , Blanks: %d, New Lines: %d",tabs,blank,newLines);

}
