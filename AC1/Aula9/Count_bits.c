int count_bits(int n){

    if(n == 0){
        return 0;
    }
    return  (n & 1) + count_bits( n >> 1);
}