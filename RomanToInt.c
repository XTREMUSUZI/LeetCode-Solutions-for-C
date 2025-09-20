 #include <stdio.h>
 #include <stdlib.h>
 int convert(char n){
    switch(n){
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;

    }
    return 0;
}
int romanToInt(char* s) {
    int num=0;
    int i;
    for(i=0;i<strlen(s);i++){
        if(convert(*(s+i))<convert(*(s+i+1))){
            num-=convert(*(s+i));
        }else{
            num+=convert(*(s+i));
        }
    }
    return num;
    
}
