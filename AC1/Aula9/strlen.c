int strlen(char string[]){
    if(string[0] == '\0'){
        return 0;
    }
    return 1 + strlen(string + 1);
}