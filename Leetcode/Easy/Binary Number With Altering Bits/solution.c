int ft_binary(int n){
    int i = 7;
    int bit;

    while(i >= 0 && bit != 1){
        bit = ((n >> i) & 1);
        i--;
    }
    return(i + 1);
}

bool hasAlternatingBits(int n){
    int idx;
    int bit1;
    int bit2;

    idx = ft_binary(n);
    int idx1 = idx;
    while(idx1 >= 0){
        if(idx1 == idx)
            bit2 = ((n >> idx1) & 1);
        else{
            bit1 = ((n >> idx1) & 1);
        }
        if (bit1 == bit2 && idx1 <= (idx -1))
            return(false);
        if(idx1 <= idx-1)
            bit2 = bit1;
        idx1--;
    }
    return(true);
}