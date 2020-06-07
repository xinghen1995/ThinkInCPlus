//: C11:Reference.cpp
// Simple C++ reference

int *f(int *x) {
    (*x)++;
    return x; // Safe, x is outside this scope
}

int& g(int &x) {
    x++; // Same effect as in f()
    return x; // Safe, outside this scope
}

int& h() {
    int q;
    (void)q;
    //! return q; // Error
    static int x;
    return x; // Safe, x lives outside this scope
}

int main() {
    int a = 0;
    f(&a); // Ugly (but explicit)
    g(a); // Clean (but hidden)
} ///:~