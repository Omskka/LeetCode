char ** fizzBuzz(int n, int* returnSize){
    int j;

    *returnSize = n;
    char **str = malloc(sizeof(char*) * n);

    for(int i = 1, j = 0; i <= n; i++, j++){
        str[j] = malloc(sizeof(char)* 10);
        if (i % 3 == 0 && i % 5 == 0)
            sprintf(str[j], "%s", "FizzBuzz");
        else if(i % 3 == 0)
            sprintf(str[j], "%s", "Fizz");
        else if(i % 5 == 0)
            sprintf(str[j], "%s", "Buzz");
        else 
            sprintf(str[j], "%d", i);
    }
    return(str);
}
