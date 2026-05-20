int belong(char c, char string[]){
    if(string[0] == '\0'){
        return 0;
    }
    if (string[0] == c){
        return 1;
    }
    return belong(c, string + 1);
}