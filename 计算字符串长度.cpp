#include <stdio.h>
#include <stdlib.h>

int str_len(char *str);

int main(){
    char *str = (char *)malloc(100*sizeof(char));
    scanf("%s",str);
    printf("%d", str_len(str));
    free(str);
    return 0;
}

int str_len(char *str){
//�������������ĺ���
    int len=0;
    while(*str!=0){len++;str++;}

    return len;
}

