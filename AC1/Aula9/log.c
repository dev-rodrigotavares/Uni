int log(int n) {
    if (n == 1) {
        return 0;
    }

    return 1 + log(n / 2);
}

