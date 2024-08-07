void rFilter(char* s) {
    // Your code goes here
    int length = strlen(s);

    while (length > 0 && !isalpha(s[length - 1]))
    {
        s[length - 1] = '_';
        length--;
    }
}