int main() {
    int x = 10;
    const int y = x;
    y = 0;             // ERROR
    // error: cannot assign to variable 'y' with const-qualified type 'const int'
    int *y_ptr = &y;   // WARNING
    // warning: initializing 'int *' with an expression of type 'const int *' discards qualifiers
    *y_ptr = 0;
    return 0;
}