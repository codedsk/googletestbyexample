// return a long long int to accomodate overflow in multiplication
// it is enough to cast the first operand to long long, other
// operands will be upcasted automatically before the multiplication.

long long box_volume( int length, int width, int height) {
    return (long long)length * width * height;
}
