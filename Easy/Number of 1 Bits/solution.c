int hammingWeight(uint32_t n) {
    int bit = 0;
    int idx = 31;

    while(idx >= 0){
        bit += ((n >> idx) & 1);
        idx--;
    }
    return(bit);
}