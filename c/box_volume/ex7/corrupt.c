int do_memory_corruption() {
    char *m1;
    while(1) {
        *m1 = 'x';
        m1 += 1;
    }
    return 0;
}

int do_return_five() {
    return 5;
}
