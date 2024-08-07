void reverse(char* s) {
    // Your code goes here
    char* left = s;
    char* right = s + strlen(s) - 1;
    while (right > left)
    {
        swap(*right, *left);
        ++left;
        --right;
    }
}